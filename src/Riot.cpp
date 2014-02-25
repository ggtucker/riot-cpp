#include <RiotCPP/Riot.hpp>

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

		/*rapidjson::Document parseJSON(std::string url)
		{
			rapidjson::Document json;
			std::string* contents = URLReader::read(url);
			json.Parse<0>(contents->c_str());
			delete contents;
			return json;
		}*/
	}

	// ----------API Resource: champion-v1.1---------- //

		/* Retrieves all champions */
		ChampionList getChampionList(bool freeToPlay)
		{
			std::string url
				= BASE_URL
				+ toString(region)
				+ CHAMPION_API_VERSION
				+ "champion"
				+ "?freeToPlay=" + (freeToPlay ? "true" : "false")
				+ "&api_key=" + api_key;

			rapidjson::Document json;
			json.Parse<0>(URLReader::read(url).c_str());
			return RiotParser::parseChampionList(json);
		}
		
	// ----------API Resource: game-v1.3---------- //

		/* Retrieves recent games by summoner */
		RecentGames getRecentGames(long long summonerID)
		{
			std::string url
				= BASE_URL
				+ toString(region)
				+ GAME_API_VERSION
				+ "game/by-summoner/"
				+ std::to_string(summonerID)
				+ "/recent"
				+ "?api_key=" + api_key;

			rapidjson::Document json;
			json.Parse<0>(URLReader::read(url).c_str());
			return RiotParser::parseRecentGames(json);
		}

	// ----------API Resource: league-v2.3---------- //

		/* Retrieves challenger tier league */
		League getChallengerLeague(QueueType qtype)
		{
			std::string url
				= BASE_URL
				+ toString(region)
				+ LEAGUE_API_VERSION
				+ "league/challenger"
				+ "?type=" + toString(qtype)
				+ "&api_key=" + api_key;

			rapidjson::Document json;
			json.Parse<0>(URLReader::read(url).c_str());
			return RiotParser::parseLeague(json);
		}

		/* Retrieves leagues item data for each of summoner's teams */
		std::vector<LeagueItem> getLeagueItems(long long summonerID)
		{
			std::string url
				= BASE_URL
				+ toString(region)
				+ LEAGUE_API_VERSION
				+ "league/by-summoner/"
				+ std::to_string(summonerID)
				+ "/entry"
				+ "?api_key=" + api_key;

			rapidjson::Document json;
			json.Parse<0>(URLReader::read(url).c_str());
			return RiotParser::parseLeagueItemList(json);
		}

		/* Retrieves leagues data for each of summoner's teams */
		std::vector<League> getLeagues(long long summonerID)
		{
			std::string url
				= BASE_URL
				+ toString(region)
				+ LEAGUE_API_VERSION
				+ "league/by-summoner/"
				+ std::to_string(summonerID)
				+ "?api_key=" + api_key;

			rapidjson::Document json;
			json.Parse<0>(URLReader::read(url).c_str());
			return RiotParser::parseLeagueList(json);
		}

	// ----------API Resource: lol-static-data-v1---------- //

		/* Retrieves champion data by ID */
		ChampionData getChampionData(long long championID, ChampData cdata)
		{
			std::string url
				= BASE_STATIC_URL
				+ toString(region)
				+ STATIC_API_VERSION
				+ "champion/"
				+ std::to_string(championID)
				+ "?locale=" + toString(locale)
				+ "&champData=" + toString(cdata)
				+ "&api_key=" + api_key;

			rapidjson::Document json;
			json.Parse<0>(URLReader::read(url).c_str());
			return RiotParser::parseChampionData(json);
		}

		/* Retrieves list of champion data */
		ChampionDataList getChampionDataList(ChampData cdata)
		{
			std::string url
				= BASE_STATIC_URL
				+ toString(region)
				+ STATIC_API_VERSION
				+ "champion"
				+ "?locale=" + toString(locale)
				+ "&champData=" + toString(cdata)
				+ "&api_key=" + api_key;

			rapidjson::Document json;
			json.Parse<0>(URLReader::read(url).c_str());
			return RiotParser::parseChampionDataList(json);
		}

		/* Retrieves item data by ID */
		Item getItem(long long itemID, ItemData idata)
		{
			std::string url
				= BASE_STATIC_URL
				+ toString(region)
				+ STATIC_API_VERSION
				+ "item/"
				+ std::to_string(itemID)
				+ "?locale=" + toString(locale)
				+ "&itemData=" + toString(idata)
				+ "&api_key=" + api_key;

			rapidjson::Document json;
			json.Parse<0>(URLReader::read(url).c_str());
			return RiotParser::parseItem(json);
		}

		/* Retrieves list of item data */
		ItemList getItemList(ItemListData ildata)
		{
			std::string url
				= BASE_STATIC_URL
				+ toString(region)
				+ STATIC_API_VERSION
				+ "item"
				+ "?locale=" + toString(locale)
				+ "&itemListData=" + toString(ildata)
				+ "&api_key=" + api_key;

			rapidjson::Document json;
			json.Parse<0>(URLReader::read(url).c_str());
			return RiotParser::parseItemList(json);
		}

		/* Retrieves mastery data by ID */
		Mastery getMastery(long long masteryID, MasteryData mdata)
		{
			std::string url
				= BASE_STATIC_URL
				+ toString(region)
				+ STATIC_API_VERSION
				+ "mastery/"
				+ std::to_string(masteryID)
				+ "?locale=" + toString(locale)
				+ "&masteryData=" + toString(mdata)
				+ "&api_key=" + api_key;

			rapidjson::Document json;
			json.Parse<0>(URLReader::read(url).c_str());
			return RiotParser::parseMastery(json);
		}

		/* Retrieves list of mastery data */
		MasteryList getMasteryList(MasteryListData mldata)
		{
			std::string url
				= BASE_STATIC_URL
				+ toString(region)
				+ STATIC_API_VERSION
				+ "mastery"
				+ "?locale=" + toString(locale)
				+ "&masteryListData=" + toString(mldata)
				+ "&api_key=" + api_key;

			rapidjson::Document json;
			json.Parse<0>(URLReader::read(url).c_str());
			return RiotParser::parseMasteryList(json);
		}

		/* Retrieves realm data */
		Realm getRealm()
		{
			std::string url
				= BASE_STATIC_URL
				+ toString(region)
				+ STATIC_API_VERSION
				+ "realm"
				+ "?api_key=" + api_key;

			rapidjson::Document json;
			json.Parse<0>(URLReader::read(url).c_str());
			return RiotParser::parseRealm(json);
		}

		/* Retrieves rune data by ID */
		Rune getRune(long long runeID, RuneData rdata)
		{
			std::string url
				= BASE_STATIC_URL
				+ toString(region)
				+ STATIC_API_VERSION
				+ "rune/"
				+ std::to_string(runeID)
				+ "?locale=" + toString(locale)
				+ "&runeData=" + toString(rdata)
				+ "&api_key=" + api_key;

			rapidjson::Document json;
			json.Parse<0>(URLReader::read(url).c_str());
			return RiotParser::parseRune(json);
		}

		/* Retrieves list of rune data */
		RuneList getRuneList(RuneListData rldata)
		{
			std::string url
				= BASE_STATIC_URL
				+ toString(region)
				+ STATIC_API_VERSION
				+ "rune"
				+ "?locale=" + toString(locale)
				+ "&runeListData=" + toString(rldata)
				+ "&api_key=" + api_key;

			rapidjson::Document json;
			json.Parse<0>(URLReader::read(url).c_str());
			return RiotParser::parseRuneList(json);
		}

		/* Retrieves spell data by ID */
		SummonerSpell getSummonerSpell(std::string spellID, SpellData sdata)
		{
			std::string url
				= BASE_STATIC_URL
				+ toString(region)
				+ STATIC_API_VERSION
				+ "summoner-spell/"
				+ spellID
				+ "?locale=" + toString(locale)
				+ "&spellData=" + toString(sdata)
				+ "&api_key=" + api_key;

			rapidjson::Document json;
			json.Parse<0>(URLReader::read(url).c_str());
			return RiotParser::parseSummonerSpell(json);
		}

		/* Retrieves list of spell data */
		SummonerSpellList getSummonerSpellList(SpellData sdata)
		{
			std::string url
				= BASE_STATIC_URL
				+ toString(region)
				+ STATIC_API_VERSION
				+ "summoner-spell"
				+ "?locale=" + toString(locale)
				+ "&spellData=" + toString(sdata)
				+ "&api_key=" + api_key;

			rapidjson::Document json;
			json.Parse<0>(URLReader::read(url).c_str());
			return RiotParser::parseSummonerSpellList(json);
		}

	// ----------API Resource: stats-v1.2---------- //

		/* Retrieves player stats summaries */
		PlayerStatsSummaryList getPlayerStats(long long summonerID, Season season)
		{
			std::string url
				= BASE_URL
				+ toString(region)
				+ STATS_API_VERSION
				+ "stats/by-summoner/"
				+ std::to_string(summonerID)
				+ "/summary"
				+ "?season=" + toString(season)
				+ "&api_key=" + api_key;

			rapidjson::Document json;
			json.Parse<0>(URLReader::read(url).c_str());
			return RiotParser::parsePlayerStatsSummaryList(json);
		}

		/* Retrieves player ranked stats */
		RankedStats getRankedStats(long long summonerID, Season season)
		{
			std::string url
				= BASE_URL
				+ toString(region)
				+ STATS_API_VERSION
				+ "stats/by-summoner/"
				+ std::to_string(summonerID)
				+ "/ranked"
				+ "?season=" + toString(season)
				+ "&api_key=" + api_key;

			rapidjson::Document json;
			json.Parse<0>(URLReader::read(url).c_str());
			return RiotParser::parseRankedStats(json);
		}

	// ----------API Resource: summoner-v1.3---------- //

		/* Retrieves mastery pages for given summoner ID */
		MasteryPages getMasteryPages(long long summonerID)
		{
			std::vector<long long> id;
			id.push_back(summonerID);
			return getMasteryPages(id)[summonerID];
		}

		/* Retrieves mastery pages for each of the given summoner IDs */
		std::map<long long, MasteryPages> getMasteryPages(const std::vector<long long>& summonerIDs)
		{
			std::string url
				= BASE_URL
				+ toString(region)
				+ SUMMONER_API_VERSION
				+ "summoner/"
				+ formatIDList(summonerIDs)
				+ "/masteries"
				+ "?api_key=" + api_key;

			rapidjson::Document json;
			json.Parse<0>(URLReader::read(url).c_str());
			return RiotParser::parseMasteryPagesById(json);
		}

		/* Retrieves rune pages for given summoner ID */
		RunePages getRunePages(long long summonerID)
		{
			std::vector<long long> id;
			id.push_back(summonerID);
			return getRunePages(id)[summonerID];
		}

		/* Retrieves rune pages for each of the given summoner IDs */
		std::map<long long, RunePages> getRunePages(const std::vector<long long>& summonerIDs)
		{
			std::string url
				= BASE_URL
				+ toString(region)
				+ SUMMONER_API_VERSION
				+ "summoner/"
				+ formatIDList(summonerIDs)
				+ "/runes"
				+ "?api_key=" + api_key;

			rapidjson::Document json;
			json.Parse<0>(URLReader::read(url).c_str());
			return RiotParser::parseRunePagesById(json);
		}

		/* Retrieves summoner for given summoner name */
		Summoner getSummoner(const std::string& summonerName)
		{
			std::vector<std::string> id;
			id.push_back(summonerName);
			return getSummoners(id)[summonerName];
		}

		/* Retrieves summoner for each of the given summoner names */
		std::map<std::string, Summoner> getSummoners(const std::vector<std::string>& summonerNames)
		{
			std::string url
				= BASE_URL
				+ toString(region)
				+ SUMMONER_API_VERSION
				+ "summoner/by-name/"
				+ formatIDList(summonerNames)
				+ "?api_key=" + api_key;

			rapidjson::Document json;
			json.Parse<0>(URLReader::read(url).c_str());
			return RiotParser::parseSummonersByName(json);
		}

		/* Retrieves summoner name for given summoner ID */
		std::string getSummonerName(long long summonerID)
		{
			std::vector<long long> id;
			id.push_back(summonerID);
			return getSummonerNames(id)[summonerID];
		}

		/* Retrieves summoner name for each of the given summoner IDs */
		std::map<long long, std::string> getSummonerNames(const std::vector<long long>& summonerIDs)
		{
			std::string url
				= BASE_URL
				+ toString(region)
				+ SUMMONER_API_VERSION
				+ "summoner/"
				+ formatIDList(summonerIDs)
				+ "/name"
				+ "?api_key=" + api_key;

			rapidjson::Document json;
			json.Parse<0>(URLReader::read(url).c_str());
			return RiotParser::parseSummonerNamesById(json);
		}

		/* Retrieves summoner for given summoner ID */
		Summoner getSummoner(long long summonerID)
		{
			std::vector<long long> id;
			id.push_back(summonerID);
			return getSummoners(id)[summonerID];
		}

		/* Retrieves summoner for each of the given summoner IDs */
		std::map<long long, Summoner> getSummoners(const std::vector<long long>& summonerIDs)
		{
			std::string url
				= BASE_URL
				+ toString(region)
				+ SUMMONER_API_VERSION
				+ "summoner/"
				+ formatIDList(summonerIDs)
				+ "?api_key=" + api_key;

			rapidjson::Document json;
			json.Parse<0>(URLReader::read(url).c_str());
			return RiotParser::parseSummonersById(json);
		}

	// ----------API Resource: team-v2.2---------- //

		/* Retrieves teams for given summoner ID */
		std::vector<Team> getTeams(long long summonerID)
		{
			std::string url
				= BASE_URL
				+ toString(region)
				+ TEAM_API_VERSION
				+ "team/by-summoner/"
				+ std::to_string(summonerID)
				+ "?api_key" + api_key;

			rapidjson::Document json;
			json.Parse<0>(URLReader::read(url).c_str());
			return RiotParser::parseTeamList(json);
		}

		/* Retrieves teams for given team ID */
		Team getTeam(std::string teamID)
		{
			std::vector<std::string> id;
			id.push_back(teamID);
			return getTeams(id)[teamID];
		}

		/* Retrieves team for each of the given team IDs */
		std::map<std::string, Team> getTeams(const std::vector<std::string>& teamIDs)
		{
			std::string url
				= BASE_URL
				+ toString(region)
				+ TEAM_API_VERSION
				+ "team/"
				+ formatIDList(teamIDs)
				+ "?api_key=" + api_key;

			rapidjson::Document json;
			json.Parse<0>(URLReader::read(url).c_str());
			return RiotParser::parseTeamsById(json);
		}
		
	// ----------Helper Functions---------- //

		/* Returns ids in a comma delimited string */
		std::string formatIDList(const std::vector<long long>& ids)
		{
			std::string formatted = "";

			for(unsigned i = 0; i < ids.size(); i++)
			{
				formatted += std::to_string(ids[i]);

				if(i != ids.size()-1)
					formatted += ",";
			}

			return formatted;
		}

		/* Returns names in a comma delimited string */
		std::string formatIDList(const std::vector<std::string>& ids)
		{
			std::string formatted = "";

			for(unsigned i = 0; i < ids.size(); i++)
			{
				formatted += ids[i];

				if(i != ids.size()-1)
					formatted += ",";
			}

			return formatted;
		}
}