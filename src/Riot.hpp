#ifndef RIOT_HPP
#define RIOT_HPP

#include <map>
#include <vector>
#include <string>
#include <rapidjson/document.h>
#include <rapidjson/reader.h>
#include "URLReader.hpp"
#include "DataParser.hpp"
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

namespace Riot
{
	/* By default, functions will use these fields
	   unless otherwise specified. */
	extern std::string api_key; // ""
	extern Region region;       // Region::NA
	extern Locale locale;       // Locale::en_US

	// ----------API Resource: game-v1.3---------- //

		/* Retrieves all champions */
		ChampionList getChampionList(bool freeToPlay=false);

	// ----------API Resource: game-v1.3---------- //

		/* Retrieves recent games by summoner */
		RecentGames getRecentGames(long long summonerID);

	// ----------API Resource: league-v2.3---------- //

		/* Retrieves challenger tier league */
		League getChallengerLeague(QueueType qtype=QueueType::RANKED_SOLO_5x5);

		/* Retrieves leagues item data for each of summoner's teams */
		std::vector<LeagueItem> getLeagueItems(long long summonerID);

		/* Retrieves leagues data for each of summoner's teams */
		std::vector<League> getLeagues(long long summonerID);

	// ----------API Resource: lol-static-data-v1---------- //

		/* Retrieves champion data by ID */
		ChampionData getChampionData(long long championID, ChampData cdata=ChampData::ALL);

		/* Retrieves list of champion data */
		ChampionDataList getChampionDataList(ChampData cdata=ChampData::ALL);

		/* Retrieves item data by ID */
		Item getItemData(long long itemID, ItemData idata=ItemData::ALL);

		/* Retrieves list of item data */
		ItemList getItemDataList(ItemListData ildata=ItemListData::ALL);

		/* Retrieves mastery data by ID */
		Mastery getMasteryData(long long masteryID, MasteryData mdata=MasteryData::ALL);

		/* Retrieves list of mastery data */
		MasteryList getMasteryDataList(MasteryListData mldata=MasteryListData::ALL);

		/* Retrieves realm data */
		Realm getRealmData();

		/* Retrieves rune data by ID */
		Rune getRuneData(long long runeID, RuneData rdata=RuneData::ALL);

		/* Retrieves list of rune data */
		RuneList getRuneDataList(RuneListData rldata=RuneListData::ALL);

		/* Retrieves spell data by ID */
		SummonerSpell getSpellData(long long spellID, SpellData sdata=SpellData::ALL);

		/* Retrieves list of spell data */
		SummonerSpellList getSpellDataList(SpellData sdata=SpellData::ALL);

	// ----------API Resource: stats-v1.2---------- //

		/* Retrieves player stats summaries */
		PlayerStatsSummaryList getPlayerStats(long long summonerID, Season season=Season::SEASON4);

		/* Retrieves player ranked stats */
		RankedStats getRankedStats(long long summonerID, Season season=Season::SEASON4);

	// ----------API Resource: summoner-v1.3---------- //

		/* Retrieves mastery pages for given summoner ID */
		MasteryPages getMasteryPages(long long summonerID);

		/* Retrieves mastery pages for each of the given summoner IDs */
		std::map<long long, MasteryPages> getMasteryPages(const std::vector<long long>& summonerIDs);

		/* Retrieves rune pages for given summoner ID */
		RunePages getRunePages(long long summonerID);

		/* Retrieves rune pages for each of the given summoner IDs */
		std::map<long long, RunePages> getRunePages(const std::vector<long long>& summonerIDs);

		/* Retrieves summoner for given summoner name */
		Summoner getSummoner(const std::string& summonerName);

		/* Retrieves summoner for each of the given summoner names */
		std::map<std::string, Summoner> getSummoners(const std::vector<std::string>& summonerNames);

		/* Retrieves summoner name for given summoner ID */
		std::string getSummonerName(long long summonerID);

		/* Retrieves summoner name for each of the given summoner IDs */
		std::map<long long, std::string> getSummonerNames(const std::vector<long long>& summonerIDs);

		/* Retrieves summoner for given summoner ID */
		Summoner getSummoner(long long summonerID);

		/* Retrieves summoner for each of the given summoner IDs */
		std::map<long long, Summoner> getSummoners(const std::vector<long long>& summonerIDs);

	// ----------API Resource: team-v2.2---------- //

		/* Retrieves teams for given summoner ID */
		std::vector<Team> getTeams(long long summonerID);

		/* Retrieves team for given team ID */
		Team getTeam(long long teamID);

		/* Retrieves team for each of the given team IDs */
		std::map<long long, Team> getTeams(const std::vector<long long>& teamIDs);

	// ----------Helper Functions---------- //

		/* Returns ids in a comma delimited string */
		std::string formatIDList(const std::vector<long long>& ids);

		/* Returns names in a comma delimited string */
		std::string formatIDList(const std::vector<std::string>& names);
}

#endif // RIOT_API_HPP