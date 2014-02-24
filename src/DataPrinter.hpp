#ifndef DATA_PRINTER_HPP
#define DATA_PRINTER_HPP

#include <iostream>
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
		// ----------The glorious wall of print functions---------- //

			void printAggregatedStats(const AggregatedStats& data, std::string indent="");
			void printBasicData(const BasicData& data, std::string indent="");
			void printBasicDataStats(const BasicDataStats& data, std::string indent="");
			void printBlock(const Block& data, std::string indent="");
			void printBlockItem(const BlockItem& data, std::string indent="");
			void printChampion(const Champion& data, std::string indent="");
			void printChampionData(const ChampionData& data, std::string indent="");
			void printChampionDataList(const ChampionDataList& data, std::string indent="");
			void printChampionList(const ChampionList& data, std::string indent="");
			void printChampionSpell(const ChampionSpell& data, std::string indent="");
			void printChampionStats(const ChampionStats& data, std::string indent="");
			void printGame(const Game& data, std::string indent="");
			void printGold(const Gold& data, std::string indent="");
			void printGroup(const Group& data, std::string indent="");
			void printImage(const Image& data, std::string indent="");
			void printInfo(const Info& data, std::string indent="");
			void printItem(const Item& data, std::string indent="");
			void printItemList(const ItemList& data, std::string indent="");
			void printItemTree(const ItemTree& data, std::string indent="");
			void printLeague(const League& data, std::string indent="");
			void printLeagueItem(const LeagueItem& data, std::string indent="");
			void printLevelTip(const LevelTip& data, std::string indent="");
			void printMastery(const Mastery& data, std::string indent="");
			void printMasteryList(const MasteryList& data, std::string indent="");
			void printMasteryPage(const MasteryPage& data, std::string indent="");
			void printMasteryPages(const MasteryPages& data, std::string indent="");
			void printMasteryTree(const MasteryTree& data, std::string indent="");
			void printMasteryTreeItem(const MasteryTreeItem& data, std::string indent="");
			void printMasteryTreeList(const MasteryTreeList& data, std::string indent="");
			void printMatchHistorySummary(const MatchHistorySummary& data, std::string indent="");
			void printMessageOfDay(const MessageOfDay& data, std::string indent="");
			void printMetaData(const MetaData& data, std::string indent="");
			void printMiniSeries(const MiniSeries& data, std::string indent="");
			void printPassive(const Passive& data, std::string indent="");
			void printPlayer(const Player& data, std::string indent="");
			void printPlayerStatsSummary(const PlayerStatsSummary& data, std::string indent="");
			void printPlayerStatsSummaryList(const PlayerStatsSummaryList& data, std::string indent="");
			void printRankedStats(const RankedStats& data, std::string indent="");
			void printRawStats(const RawStats& data, std::string indent="");
			void printRealm(const Realm& data, std::string indent="");
			void printRecentGames(const RecentGames& data, std::string indent="");
			void printRecommended(const Recommended& data, std::string indent="");
			void printRoster(const Roster& data, std::string indent="");
			void printRune(const Rune& data, std::string indent="");
			void printRuneList(const RuneList& data, std::string indent="");
			void printRunePage(const RunePage& data, std::string indent="");
			void printRunePages(const RunePages& data, std::string indent="");
			void printRuneSlot(const RuneSlot& data, std::string indent="");
			void printRuneSlotted(const RuneSlotted& data, std::string indent="");
			void printSkin(const Skin& data, std::string indent="");
			void printSpellVars(const SpellVars& data, std::string indent="");
			void printStats(const Stats& data, std::string indent="");
			void printSummoner(const Summoner& data, std::string indent="");
			void printSummonerSpell(const SummonerSpell& data, std::string indent="");
			void printSummonerSpellList(const SummonerSpellList& data, std::string indent="");
			void printTalent(const Talent& data, std::string indent="");
			void printTeam(const Team& data, std::string indent="");
			void printTeamMemberInfo(const TeamMemberInfo& data, std::string indent="");
			void printTeamStatDetail(const TeamStatDetail& data, std::string indent="");
			void printTeamStatSummary(const TeamStatSummary& data, std::string indent="");

		// ----------The less glorious wall of helper functions---------- //

			template<typename T>
			void printVector(std::string label, const std::vector<T>& vector)
			{
				std::cout << label << "[";
				for(unsigned i = 0; i < vector.size(); i++)
				{
					std::cout << vector[i];

					if(i != vector.size()-1)
						std::cout << ",";
				}
				std::cout << "]" << std::endl;
			}

			template<typename T>
			void print2DVector(std::string indent, std::string indentIncrement, std::string label, const std::vector<std::vector<T>>& vector)
			{
				std::cout << indent << label << std::endl;
				std::cout << indent << "[" << std::endl;
				for(unsigned i = 0; i < vector.size(); i++)
				{
					printVector<T>(indent + indentIncrement, vector[i]);
				}
				std::cout << indent << "]" << std::endl;
			}

			void printMap(std::string label, const std::map<std::string, bool>& map);
			void printMap(std::string label, const std::map<std::string, std::string>& map);
	}
}

#endif // DATA_PRINTER_HPP