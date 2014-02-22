#ifndef RIOT_API_HPP
#define RIOT_API_HPP

#include <map>
#include <vector>
#include "dtos/Champion.hpp"
#include "dtos/RecentGames.hpp"
#include "dtos/Game.hpp"
#include "dtos/League.hpp"
#include "dtos/LeagueItem.hpp"
#include "dtos/ChampionList.hpp"
#include "dtos/Item.hpp"
#include "dtos/ItemList.hpp"
#include "dtos/Mastery.hpp"
#include "dtos/MasteryList.hpp"
#include "dtos/Realm.hpp"
#include "dtos/Rune.hpp"
#include "dtos/RuneList.hpp"
#include "dtos/SummonerSpell.hpp"
#include "dtos/SummonerSpellList.hpp"
#include "dtos/PlayerStatsSummaryList.hpp"
#include "dtos/RankedStats.hpp"
#include "dtos/Summoner.hpp"
#include "dtos/MasteryPages.hpp"
#include "dtos/RunePages.hpp"
#include "dtos/Team.hpp"
#include "dtos/params/ChampData.hpp"
#include "dtos/params/ItemData.hpp"
#include "dtos/params/ItemListData.hpp"
#include "dtos/params/Locale.hpp"
#include "dtos/params/MasteryData.hpp"
#include "dtos/params/MasteryListData.hpp"
#include "dtos/params/QueueType.hpp"
#include "dtos/params/Region.hpp"
#include "dtos/params/RuneData.hpp"
#include "dtos/params/RuneListData.hpp"
#include "dtos/params/Season.hpp"
#include "dtos/params/SpellData.hpp"

namespace RiotAPI
{
	/* By default, RiotAPI will use these fields
	   unless otherwise specified. */
	extern Region region = Region::NA;
	extern Locale locale = Locale::en_US;

	// ----------API Resource: game-v1.3---------- //

		/* Retrieves all champions */
		ChampionList getChampionList(
			// Defaulted parameters
			bool freeToPlay=false,
			Region reg=region
		);

	// ----------API Resource: game-v1.3---------- //

		/* Retrieves recent games by summoner */
		RecentGames getRecentGames(
			// Required parameters
			long long summonerID,
			// Defaulted parameters
			Region reg=region
		);

	// ----------API Resource: league-v2.3---------- //

		/* Retrieves challenger tier league */
		League getChallengerLeague(
			// Defaulted parameters
			QueueType qtype=QueueType::RANKED_SOLO_5x5
		);

		/* Retrieves leagues item data for each of summoner's teams */
		std::vector<LeagueItem> getLeagueItems(
			// Required parameters
			long long summonerID,
			// Defaulted parameters
			Region reg=region
		);

		/* Retrieves leagues data for each of summoner's teams */
		std::vector<League> getLeagues(
			// Required parameters
			long long summonerID,
			// Defaulted parameters
			Region reg=region
		);

	// ----------API Resource: lol-static-data-v1---------- //

		/* Retrieves champion data by ID */
		Champion getChampionData(
			// Required parameters
			long long championID,
			// Defaulted parameters
			ChampData cdata=ChampData::ALL,
			Region reg=region,
			Locale loc=locale
		);

		/* Retrieves list of champion data */
		ChampionList getChampionListData(
			// Defaulted parameters
			ChampData cdata=ChampData::ALL,
			Region reg=region,
			Locale loc=locale
		);

		/* Retrieves item data by ID */
		Item getItemData(
			// Required parameters
			long long itemID,
			// Defaulted parameters
			ItemData idata=ItemData::ALL,
			Region reg=region,
			Locale loc=locale
		);

		/* Retrieves list of item data */
		ItemList getItemListData(
			// Defaulted parameters
			ItemListData ildata=ItemListData::ALL,
			Region reg=region,
			Locale loc=locale
		);

		/* Retrieves mastery data by ID */
		Mastery getMasteryData(
			// Required parameters
			long long masteryID,
			// Defaulted parameters
			MasteryData mdata=MasteryData::ALL,
			Region reg=region,
			Locale loc=locale
		);

		/* Retrieves list of mastery data */
		MasteryList getMasteryListData(
			// Defaulted parameters
			MasteryListData mldata=MasteryListData::ALL,
			Region reg=region,
			Locale loc=locale
		);

		/* Retrieves realm data */
		Realm getRealmData(
			// Defaulted parameters
			Region reg=region
		);

		/* Retrieves rune data by ID */
		Rune getRuneData(
			// Required parameters
			long long runeID,
			// Defaulted parameters
			RuneData rdata=RuneData::ALL,
			Region reg=region,
			Locale loc=locale
		);

		/* Retrieves list of rune data */
		RuneList getRuneListData(
			// Defaulted parameters
			RuneListData rldata=RuneListData::ALL,
			Region reg=region,
			Locale loc=locale
		);

		/* Retrieves spell data by ID */
		SummonerSpell getSpellData(
			// Required parameters
			long long spellID,
			// Defaulted parameters
			SpellData sdata=SpellData::ALL,
			Region reg=region,
			Locale loc=locale
		);

		/* Retrieves list of spell data */
		SummonerSpellList getSpellListData(
			// Defaulted parameters
			SpellData sdata=SpellData::ALL,
			Region reg=region,
			Locale loc=locale
		);

	// ----------API Resource: stats-v1.2---------- //

		/* Retrieves player stats summaries */
		PlayerStatsSummaryList getPlayerStats(
			// Required parameters
			long long summonerID,
			// Defaulted parameters
			Season season=Season::SEASON_4,
			Region reg=region
		);

		/* Retrieves player ranked stats */
		RankedStats getRankedStats(
			// Required parameters
			long long summonerID,
			// Defaulted parameters
			Season season=Season::SEASON_4,
			Region reg=region
		);

	// ----------API Resource: summoner-v1.3---------- //

		/* Retrieves mastery pages for given summoner ID */
		MasteryPages getMasteryPages(
			// Required parameters
			long long summonerID,
			// Defaulted parameters
			Region reg=region
		);

		/* Retrieves mastery pages for each of the given summoner IDs */
		std::map<std::string, MasteryPages> getMasteryPages(
			// Required parameters
			std::vector<long long> summonerIDs,
			// Defaulted parameters
			Region reg=region
		);

		/* Retrieves rune pages for given summoner ID */
		RunePages getRunePages(
			// Required parameters
			long long summonerID,
			// Defaulted parameters
			Region reg=region
		);

		/* Retrieves rune pages for each of the given summoner IDs */
		std::map<std::string, RunePages> getRunePages(
			// Required parameters
			std::vector<long long> summonerIDs,
			// Defaulted parameters
			Region reg=region
		);

		/* Retrieves summoner for given summoner name */
		Summoner getSummoner(
			// Required parameters
			std::string summonerName,
			// Defaulted parameters
			Region reg=region
		);

		/* Retrieves summoner for each of the given summoner names */
		std::map<std::string, Summoner> getSummoners(
			// Required parameters
			std::vector<std::string> summonerNames,
			// Defaulted parameters
			Region reg=region
		);

		/* Retrieves summoner name for given summoner ID */
		std::string getSummonerName(
			// Required parameters
			long long summonerID,
			// Defaulted parameters
			Region reg=region
		);

		/* Retrieves summoner name for each of the given summoner IDs */
		std::map<std::string, std::string> getSummonerNames(
			// Required parameters
			std::vector<long long> summonerIDs,
			// Defaulted parameters
			Region reg=region
		);

		/* Retrieves summoner for given summoner ID */
		Summoner getSummoner(
			// Required parameters
			long long summonerID,
			// Defaulted parameters
			Region reg=region
		);

		/* Retrieves summoner for each of the given summoner IDs */
		std::map<std::string, Summoner> getSummoners(
			// Required parameters
			std::vector<long long> summonerIDs,
			// Defaulted parameters
			Region reg=region
		);

	// ----------API Resource: team-v2.2---------- //

		/* Retrieves teams for given summoner ID */
		std::vector<Team> getTeams(
			// Required parameters
			long long summonerID,
			// Defaulted parameters
			Region reg=region
		);

		/* Retrieves teams for given team ID */
		Team getTeam(
			// Required parameters
			long long teamID,
			// Defaulted parameters
			Region reg=region
		);

		/* Retrieves team for each of the given team IDs */
		std::map<std::string, Team> getTeams(
			// Required parameters
			std::vector<long long> teamIDs,
			// Default parameters
			Region reg=region
		);
}

#endif // RIOT_API_HPP