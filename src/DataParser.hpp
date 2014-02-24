#ifndef DATA_PARSER_HPP
#define DATA_PARSER_HPP

#include <map>
#include <vector>
#include <string>
#include <rapidjson\reader.h>
#include <rapidjson\document.h>
#include "dtos/Champion.hpp"
#include "dtos/ChampionList.hpp"
#include "dtos/ChampionData.hpp"
#include "dtos/ChampionDataList.hpp"
#include "dtos/RecentGames.hpp"
#include "dtos/Game.hpp"
#include "dtos/League.hpp"
#include "dtos/LeagueItem.hpp"
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

#include "JSONPrinter.hpp"

namespace Riot
{
	namespace DataParser
	{
		using namespace rapidjson;

		// ----------The glorious wall of parse functions---------- //

			AggregatedStats parseAggregatedStats(const Value& json);
			BasicData parseBasicData(const Value& json);
			BasicDataStats parseBasicDataStats(const Value& json);
			Block parseBlock(const Value& json);
			BlockItem parseBlockItem(const Value& json);
			Champion parseChampion(const Value& json);
			ChampionData parseChampionData(const Value& json);
			ChampionDataList parseChampionDataList(const Value& json);
			ChampionList parseChampionList(const Value& json);
			ChampionSpell parseChampionSpell(const Value& json);
			ChampionStats parseChampionStats(const Value& json);
			Game parseGame(const Value& json);
			Gold parseGold(const Value& json);
			Group parseGroup(const Value& json);
			Image parseImage(const Value& json);
			Info parseInfo(const Value& json);
			Item parseItem(const Value& json);
			ItemList parseItemList(const Value& json);
			ItemTree parseItemTree(const Value& json);
			League parseLeague(const Value& json);
			std::vector<League> parseLeagueList(const Value& json);
			LeagueItem parseLeagueItem(const Value& json);
			std::vector<LeagueItem> parseLeagueItemList(const Value& json);
			LevelTip parseLevelTip(const Value& json);
			Mastery parseMastery(const Value& json);
			MasteryList parseMasteryList(const Value& json);
			MasteryPage parseMasteryPage(const Value& json);
			MasteryPages parseMasteryPages(const Value& json);
			std::map<long long, MasteryPages> parseMasteryPagesMap(const Value& json);
			MasteryTree parseMasteryTree(const Value& json);
			MasteryTreeItem parseMasteryTreeItem(const Value& json);
			MasteryTreeList parseMasteryTreeList(const Value& json);
			MatchHistorySummary parseMatchHistorySummary(const Value& json);
			MessageOfDay parseMessageOfDay(const Value& json);
			MetaData parseMetaData(const Value& json);
			MiniSeries parseMiniSeries(const Value& json);
			Passive parsePassive(const Value& json);
			Player parsePlayer(const Value& json);
			PlayerStatsSummary parsePlayerStatsSummary(const Value& json);
			PlayerStatsSummaryList parsePlayerStatsSummaryList(const Value& json);
			RankedStats parseRankedStats(const Value& json);
			RawStats parseRawStats(const Value& json);
			Realm parseRealm(const Value& json);
			RecentGames parseRecentGames(const Value& json);
			Recommended parseRecommended(const Value& json);
			Roster parseRoster(const Value& json);
			Rune parseRune(const Value& json);
			RuneList parseRuneList(const Value& json);
			RunePage parseRunePage(const Value& json);
			RunePages parseRunePages(const Value& json);
			std::map<long long, RunePages> parseRunePagesById(const Value& json);
			RuneSlot parseRuneSlot(const Value& json);
			RuneSlotted parseRuneSlotted(const Value& json);
			Skin parseSkin(const Value& json);
			SpellVars parseSpellVars(const Value& json);
			Stats parseStats(const Value& json);
			Summoner parseSummoner(const Value& json);
			std::map<long long, std::string> parseSummonerNamesById(const Value& json);
			std::map<long long, Summoner> parseSummonersById(const Value& json);
			std::map<std::string, Summoner> parseSummonersByName(const Value& json);
			SummonerSpell parseSummonerSpell(const Value& json);
			SummonerSpellList parseSummonerSpellList(const Value& json);
			Talent parseTalent(const Value& json);
			Team parseTeam(const Value& json);
			std::vector<Team> parseTeamList(const Value& json);
			std::map<std::string, Team> parseTeamsById(const Value& json);
			TeamMemberInfo parseTeamMemberInfo(const Value& json);
			TeamStatDetail parseTeamStatDetail(const Value& json);
			TeamStatSummary parseTeamStatSummary(const Value& json);

		// ----------The less glorious wall of helper functions---------- //

			std::vector<char> parseCharVector(const Value& json);
			std::vector<std::string> parseStringVector(const Value& json);
			std::vector<double> parseDoubleVector(const Value& json);
			std::vector<int> parseIntVector(const Value& json);
			std::vector<std::vector<int>> parse2DIntVector(const Value& json);
			std::map<std::string, std::string> parseStringByStringMap(const Value& json);
	}
}

#endif // DATA_PARSER_HPP