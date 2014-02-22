#include "RiotAPI.hpp"

namespace RiotAPI
{
	// ----------API Resource: game-v1.3---------- //

		/* Retrieves all champions */
		ChampionList getChampionList(bool freeToPlay, Region reg)
		{

		}

	// ----------API Resource: game-v1.3---------- //

		/* Retrieves recent games by summoner */
		RecentGames getRecentGames(long long summonerID, Region reg)
		{

		}

	// ----------API Resource: league-v2.3---------- //

		/* Retrieves challenger tier league */
		League getChallengerLeague(QueueType qtype)
		{

		}

		/* Retrieves leagues item data for each of summoner's teams */
		std::vector<LeagueItem> getLeagueItems(long long summonerID, Region reg)
		{

		}

		/* Retrieves leagues data for each of summoner's teams */
		std::vector<League> getLeagues(long long summonerID, Region reg)
		{

		}

	// ----------API Resource: lol-static-data-v1---------- //

		/* Retrieves champion data by ID */
		Champion getChampionData(long long championID, ChampData cdata, Region reg, Locale loc)
		{

		}

		/* Retrieves list of champion data */
		ChampionList getChampionListData(ChampData cdata, Region reg, Locale loc)
		{

		}

		/* Retrieves item data by ID */
		Item getItemData(long long itemID,ItemData idata, Region reg, Locale loc)
		{

		}

		/* Retrieves list of item data */
		ItemList getItemListData(ItemListData ildata, Region reg, Locale loc)
		{

		}

		/* Retrieves mastery data by ID */
		Mastery getMasteryData(long long masteryID, MasteryData mdata, Region reg, Locale loc)
		{

		}

		/* Retrieves list of mastery data */
		MasteryList getMasteryListData(MasteryListData mldata, Region reg, Locale loc)
		{

		}

		/* Retrieves realm data */
		Realm getRealmData(Region reg)
		{

		}

		/* Retrieves rune data by ID */
		Rune getRuneData(long long runeID, RuneData rdata, Region reg, Locale loc)
		{

		}

		/* Retrieves list of rune data */
		RuneList getRuneListData(RuneListData rldata, Region reg, Locale loc)
		{

		}

		/* Retrieves spell data by ID */
		SummonerSpell getSpellData(long long spellID, SpellData sdata, Region reg, Locale loc)
		{

		}

		/* Retrieves list of spell data */
		SummonerSpellList getSpellListData(SpellData sdata, Region reg, Locale loc)
		{

		}

	// ----------API Resource: stats-v1.2---------- //

		/* Retrieves player stats summaries */
		PlayerStatsSummaryList getPlayerStats(long long summonerID, Season season, Region reg)
		{

		}

		/* Retrieves player ranked stats */
		RankedStats getRankedStats(long long summonerID, Season season, Region reg)
		{

		}

	// ----------API Resource: summoner-v1.3---------- //

		/* Retrieves mastery pages for given summoner ID */
		MasteryPages getMasteryPages(long long summonerID, Region reg)
		{

		}

		/* Retrieves mastery pages for each of the given summoner IDs */
		std::map<std::string, MasteryPages> getMasteryPages(std::vector<long long> summonerIDs, Region reg)
		{

		}

		/* Retrieves rune pages for given summoner ID */
		RunePages getRunePages(long long summonerID, Region reg)
		{

		}

		/* Retrieves rune pages for each of the given summoner IDs */
		std::map<std::string, RunePages> getRunePages(std::vector<long long> summonerIDs, Region reg)
		{

		}

		/* Retrieves summoner for given summoner name */
		Summoner getSummoner(std::string summonerName, Region reg)
		{

		}

		/* Retrieves summoner for each of the given summoner names */
		std::map<std::string, Summoner> getSummoners(std::vector<std::string> summonerNames, Region reg)
		{

		}

		/* Retrieves summoner name for given summoner ID */
		std::string getSummonerName(long long summonerID, Region reg)
		{

		}

		/* Retrieves summoner name for each of the given summoner IDs */
		std::map<std::string, std::string> getSummonerNames(std::vector<long long> summonerIDs, Region reg)
		{

		}

		/* Retrieves summoner for given summoner ID */
		Summoner getSummoner(long long summonerID, Region reg)
		{

		}

		/* Retrieves summoner for each of the given summoner IDs */
		std::map<std::string, Summoner> getSummoners(std::vector<long long> summonerIDs, Region reg)
		{

		}

	// ----------API Resource: team-v2.2---------- //

		/* Retrieves teams for given summoner ID */
		std::vector<Team> getTeams(long long summonerID, Region reg)
		{

		}

		/* Retrieves teams for given team ID */
		Team getTeam(long long teamID, Region reg)
		{

		}

		/* Retrieves team for each of the given team IDs */
		std::map<std::string, Team> getTeams(std::vector<long long> teamIDs, Region reg)
		{

		}
}