#ifndef RIOT_HPP
#define RIOT_HPP

#include <map>
#include <vector>
#include <string>
#include <rapidjson/document.h>
#include <rapidjson/reader.h>
#include <RiotCPP/Parser/URLReader.hpp>
#include <RiotCPP/Parser/RiotParser.hpp>
#include <RiotCPP/DTO/Param/ChampData.hpp>
#include <RiotCPP/DTO/Param/ItemData.hpp>
#include <RiotCPP/DTO/Param/ItemListData.hpp>
#include <RiotCPP/DTO/Param/Locale.hpp>
#include <RiotCPP/DTO/Param/MasteryData.hpp>
#include <RiotCPP/DTO/Param/MasteryListData.hpp>
#include <RiotCPP/DTO/Param/QueueType.hpp>
#include <RiotCPP/DTO/Param/Region.hpp>
#include <RiotCPP/DTO/Param/RuneData.hpp>
#include <RiotCPP/DTO/Param/RuneListData.hpp>
#include <RiotCPP/DTO/Param/Season.hpp>
#include <RiotCPP/DTO/Param/SpellData.hpp>

namespace Riot
{
	/* By default, functions will use these fields
	   unless otherwise specified. */
	extern std::string api_key; // ""
	extern Region region;       // Region::NA
	extern Locale locale;       // Locale::en_US

	// ----------API Resource: champion-v1.1---------- //

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
		Item getItem(long long itemID, ItemData idata=ItemData::ALL);

		/* Retrieves list of item data */
		ItemList getItemList(ItemListData ildata=ItemListData::ALL);

		/* Retrieves mastery data by ID */
		Mastery getMastery(long long masteryID, MasteryData mdata=MasteryData::ALL);

		/* Retrieves list of mastery data */
		MasteryList getMasteryList(MasteryListData mldata=MasteryListData::ALL);

		/* Retrieves realm data */
		Realm getRealm();

		/* Retrieves rune data by ID */
		Rune getRune(long long runeID, RuneData rdata=RuneData::ALL);

		/* Retrieves list of rune data */
		RuneList getRuneList(RuneListData rldata=RuneListData::ALL);

		/* Retrieves spell data by ID */
		SummonerSpell getSummonerSpell(std::string spellID, SpellData sdata=SpellData::ALL);

		/* Retrieves list of spell data */
		SummonerSpellList getSummonerSpellList(SpellData sdata=SpellData::ALL);

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

		/* NAME MUST BE ALL LOWERCASE */
		/* Retrieves summoner for given summoner name */
		Summoner getSummoner(const std::string& summonerName);

		/* NAME KEYS ARE ALL LOWERCASE */
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
		Team getTeam(std::string teamID);

		/* Retrieves team for each of the given team IDs */
		std::map<std::string, Team> getTeams(const std::vector<std::string>& teamIDs);

	// ----------Helper Functions---------- //

		/* Returns ids in a comma delimited string */
		std::string formatIDList(const std::vector<long long>& ids);

		/* Returns names in a comma delimited string */
		std::string formatIDList(const std::vector<std::string>& ids);
}

#endif // RIOT_API_HPP