#ifndef DATA_PRINTER_HPP
#define DATA_PRINTER_HPP

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

namespace Riot
{
	namespace DataPrinter
	{
		void printAggregatedStats(const AggregatedStats& dto);
		void printBasicData(const BasicData& dto);
		void printBasicDataStats(const BasicDataStats& dto);
		void printBlock(const Block& dto);
		void printBlockItem(const BlockItem& dto);
		void printChampion(const Champion& dto);
		void printChampionData(const ChampionData& dto);
		void printChampionDataList(const ChampionDataList& dto);
		void printChampionList(const ChampionList& dto);
		void printChampionSpell(const ChampionSpell& dto);
		void printChampionStats(const ChampionStats& dto);
		void printGame(const Game& dto);
		void printGold(const Gold& dto);
		void printGroup(const Group& dto);
		void printImage(const Image& dto);
		void printInfo(const Info& dto);
		void printItem(const Item& dto);
		void printItemList(const ItemList& dto);
		void printItemTree(const ItemTree& dto);
		void printLeague(const League& dto);
		void printLeagueItem(const LeagueItem& dto);
		void printLevelTip(const LevelTip& dto);
		void printMastery(const Mastery& dto);
		void printMasteryList(const MasteryList& dto);
		void printMasteryPage(const MasteryPage& dto);
		void printMasteryPages(const MasteryPages& dto);
		void printMasteryTree(const MasteryTree& dto);
		void printMasteryTreeItem(const MasteryTreeItem& dto);
		void printMasteryTreeList(const MasteryTreeList& dto);
		void printMatchHistorySummary(const MatchHistorySummary& dto);
		void printMessageOfDay(const MessageOfDay& dto);
		void printMetaData(const MetaData& dto);
		void printMiniSeries(const MiniSeries& dto);
		void printPassive(const Passive& dto);
		void printPlayer(const Player& dto);
		void printPlayerStatsSummary(const PlayerStatsSummary& dto);
		void printPlayerStatsSummaryList(const PlayerStatsSummaryList& dto);
		void printRankedStats(const RankedStats& dto);
		void printRawStats(const RawStats& dto);
		void printRealm(const Realm& dto);
		void printRecentGames(const RecentGames& dto);
		void printRecommended(const Recommended& dto);
		void printRoster(const Roster& dto);
		void printRune(const Rune& dto);
		void printRuneList(const RuneList& dto);
		void printRunePage(const RunePage& dto);
		void printRunePages(const RunePages& dto);
		void printRuneSlot(const RuneSlot& dto);
		void printRuneSlotted(const RuneSlotted& dto);
		void printSkin(const Skin& dto);
		void printSpellVars(const SpellVars& dto);
		void printStats(const Stats& dto);
		void printSummoner(const Summoner& dto);
		void printSummonerSpell(const SummonerSpell& dto);
		void printSummonerSpellList(const SummonerSpellList& dto);
		void printTalent(const Talent& dto);
		void printTeam(const Team& dto);
		void printTeamMemberInfo(const TeamMemberInfo& dto);
		void printTeamStatDetail(const TeamStatDetail& dto);
		void printTeamStatSummary(const TeamStatSummary& dto);
	}
}

#endif // DATA_PRINTER_HPP