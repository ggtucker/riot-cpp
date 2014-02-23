#include "Riot.hpp"

namespace Riot
{
	std::string api_key = "";
	Region region = Region::NA;
	Locale locale = Locale::en_US;

	namespace
	{
		const std::string BASE_URL = "http://prod.api.pvp.net/api/lol/";
		const std::string BASE_STATIC_URL = "http://prod.api.pvp.net/api/lol/static-data/";
		const std::string CHAMPION_API_VERSION = "/v1.1/";
		const std::string GAME_API_VERSION = "/v1.3/";
		const std::string LEAGUE_API_VERSION = "/v2.3/";
		const std::string STATIC_API_VERSION = "/v1/";
		const std::string STATS_API_VERSION = "/v1.2/";
		const std::string SUMMONER_API_VERSION = "/v1.3/";
		const std::string TEAM_API_VERSION = "/v2.2/";
	}

	// ----------API Resource: game-v1.3---------- //

		/* Retrieves all champions */
		ChampionList getChampionList(bool freeToPlay)
		{
			std::string url = BASE_URL
							+ getRegionName(region)
							+ CHAMPION_API_VERSION
							+ "champion"
							+ "?freeToPlay="
							+ (freeToPlay ? "true" : "false")
							+ "&api_key=" + api_key;
			rapidjson::Document json;
			json.Parse<0>(URLReader::read(url).c_str());
			return DataParser::parseChampionList(json);
		}

	// ----------API Resource: game-v1.3---------- //

		/* Retrieves recent games by summoner */
		RecentGames getRecentGames(long long summonerID)
		{
			return RecentGames();
		}

	// ----------API Resource: league-v2.3---------- //

		/* Retrieves challenger tier league */
		League getChallengerLeague(QueueType qtype)
		{
			return League();
		}

		/* Retrieves leagues item data for each of summoner's teams */
		std::vector<LeagueItem> getLeagueItems(long long summonerID)
		{
			return std::vector<LeagueItem>();
		}

		/* Retrieves leagues data for each of summoner's teams */
		std::vector<League> getLeagues(long long summonerID)
		{
			return std::vector<League>();
		}

	// ----------API Resource: lol-static-data-v1---------- //

		/* Retrieves champion data by ID */
		Champion getChampionData(long long championID, ChampData cdata)
		{
			return Champion();
		}

		/* Retrieves list of champion data */
		ChampionList getChampionListData(ChampData cdata)
		{
			return ChampionList();
		}

		/* Retrieves item data by ID */
		Item getItemData(long long itemID,ItemData idata)
		{
			return Item();
		}

		/* Retrieves list of item data */
		ItemList getItemListData(ItemListData ildata)
		{
			return ItemList();
		}

		/* Retrieves mastery data by ID */
		Mastery getMasteryData(long long masteryID, MasteryData mdata)
		{
			return Mastery();
		}

		/* Retrieves list of mastery data */
		MasteryList getMasteryListData(MasteryListData mldata)
		{
			return MasteryList();
		}

		/* Retrieves realm data */
		Realm getRealmData(Region reg)
		{
			return Realm();
		}

		/* Retrieves rune data by ID */
		Rune getRuneData(long long runeID, RuneData rdata)
		{
			return Rune();
		}

		/* Retrieves list of rune data */
		RuneList getRuneListData(RuneListData rldata)
		{
			return RuneList();
		}

		/* Retrieves spell data by ID */
		SummonerSpell getSpellData(long long spellID, SpellData sdata)
		{
			return SummonerSpell();
		}

		/* Retrieves list of spell data */
		SummonerSpellList getSpellListData(SpellData sdata)
		{
			return SummonerSpellList();
		}

	// ----------API Resource: stats-v1.2---------- //

		/* Retrieves player stats summaries */
		PlayerStatsSummaryList getPlayerStats(long long summonerID, Season season)
		{
			return PlayerStatsSummaryList();
		}

		/* Retrieves player ranked stats */
		RankedStats getRankedStats(long long summonerID, Season season)
		{
			return RankedStats();
		}

	// ----------API Resource: summoner-v1.3---------- //

		/* Retrieves mastery pages for given summoner ID */
		MasteryPages getMasteryPages(long long summonerID)
		{
			return MasteryPages();
		}

		/* Retrieves mastery pages for each of the given summoner IDs */
		std::map<std::string, MasteryPages> getMasteryPages(const std::vector<long long>& summonerIDs)
		{
			return std::map<std::string, MasteryPages>();
		}

		/* Retrieves rune pages for given summoner ID */
		RunePages getRunePages(long long summonerID)
		{
			return RunePages();
		}

		/* Retrieves rune pages for each of the given summoner IDs */
		std::map<std::string, RunePages> getRunePages(const std::vector<long long>& summonerIDs)
		{
			return std::map<std::string, RunePages>();
		}

		/* Retrieves summoner for given summoner name */
		Summoner getSummoner(const std::string& summonerName)
		{
			return Summoner();
		}

		/* Retrieves summoner for each of the given summoner names */
		std::map<std::string, Summoner> getSummoners(const std::vector<std::string>& summonerNames)
		{
			return std::map<std::string, Summoner>();
		}

		/* Retrieves summoner name for given summoner ID */
		std::string getSummonerName(long long summonerID)
		{
			return std::string();
		}

		/* Retrieves summoner name for each of the given summoner IDs */
		std::map<std::string, std::string> getSummonerNames(const std::vector<long long>& summonerIDs)
		{
			return std::map<std::string, std::string>();
		}

		/* Retrieves summoner for given summoner ID */
		Summoner getSummoner(long long summonerID)
		{
			return Summoner();
		}

		/* Retrieves summoner for each of the given summoner IDs */
		std::map<std::string, Summoner> getSummoners(const std::vector<long long>& summonerIDs)
		{
			return std::map<std::string, Summoner>();
		}

	// ----------API Resource: team-v2.2---------- //

		/* Retrieves teams for given summoner ID */
		std::vector<Team> getTeams(long long summonerID)
		{
			return std::vector<Team>();
		}

		/* Retrieves teams for given team ID */
		Team getTeam(long long teamID)
		{
			return Team();
		}

		/* Retrieves team for each of the given team IDs */
		std::map<std::string, Team> getTeams(const std::vector<long long>& teamIDs)
		{
			return std::map<std::string, Team>();
		}
}