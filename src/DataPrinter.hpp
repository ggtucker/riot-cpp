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

			void printAggregatedStats(const DTOField<AggregatedStats>& dto, std::string indent="");
			void printBasicData(const DTOField<BasicData>& dto, std::string indent="");
			void printBasicDataStats(const DTOField<BasicDataStats>& dto, std::string indent="");
			void printBlock(const DTOField<Block>& dto, std::string indent="");
			void printBlockItem(const DTOField<BlockItem>& dto, std::string indent="");
			void printChampion(const DTOField<Champion>& dto, std::string indent="");
			void printChampionData(const DTOField<ChampionData>& dto, std::string indent="");
			void printChampionDataList(const DTOField<ChampionDataList>& dto, std::string indent="");
			void printChampionList(const DTOField<ChampionList>& dto, std::string indent="");
			void printChampionSpell(const DTOField<ChampionSpell>& dto, std::string indent="");
			void printChampionStats(const DTOField<ChampionStats>& dto, std::string indent="");
			void printGame(const DTOField<Game>& dto, std::string indent="");
			void printGold(const DTOField<Gold>& dto, std::string indent="");
			void printGroup(const DTOField<Group>& dto, std::string indent="");
			void printImage(const DTOField<Image>& dto, std::string indent="");
			void printInfo(const DTOField<Info>& dto, std::string indent="");
			void printItem(const DTOField<Item>& dto, std::string indent="");
			void printItemList(const DTOField<ItemList>& dto, std::string indent="");
			void printItemTree(const DTOField<ItemTree>& dto, std::string indent="");
			void printLeague(const DTOField<League>& dto, std::string indent="");
			void printLeagueItem(const DTOField<LeagueItem>& dto, std::string indent="");
			void printLevelTip(const DTOField<LevelTip>& dto, std::string indent="");
			void printMastery(const DTOField<Mastery>& dto, std::string indent="");
			void printMasteryList(const DTOField<MasteryList>& dto, std::string indent="");
			void printMasteryPage(const DTOField<MasteryPage>& dto, std::string indent="");
			void printMasteryPages(const DTOField<MasteryPages>& dto, std::string indent="");
			void printMasteryTree(const DTOField<MasteryTree>& dto, std::string indent="");
			void printMasteryTreeItem(const DTOField<MasteryTreeItem>& dto, std::string indent="");
			void printMasteryTreeList(const DTOField<MasteryTreeList>& dto, std::string indent="");
			void printMatchHistorySummary(const DTOField<MatchHistorySummary>& dto, std::string indent="");
			void printMessageOfDay(const DTOField<MessageOfDay>& dto, std::string indent="");
			void printMetaData(const DTOField<MetaData>& dto, std::string indent="");
			void printMiniSeries(const DTOField<MiniSeries>& dto, std::string indent="");
			void printPassive(const DTOField<Passive>& dto, std::string indent="");
			void printPlayer(const DTOField<Player>& dto, std::string indent="");
			void printPlayerStatsSummary(const DTOField<PlayerStatsSummary>& dto, std::string indent="");
			void printPlayerStatsSummaryList(const DTOField<PlayerStatsSummaryList>& dto, std::string indent="");
			void printRankedStats(const DTOField<RankedStats>& dto, std::string indent="");
			void printRawStats(const DTOField<RawStats>& dto, std::string indent="");
			void printRealm(const DTOField<Realm>& dto, std::string indent="");
			void printRecentGames(const DTOField<RecentGames>& dto, std::string indent="");
			void printRecommended(const DTOField<Recommended>& dto, std::string indent="");
			void printRoster(const DTOField<Roster>& dto, std::string indent="");
			void printRune(const DTOField<Rune>& dto, std::string indent="");
			void printRuneList(const DTOField<RuneList>& dto, std::string indent="");
			void printRunePage(const DTOField<RunePage>& dto, std::string indent="");
			void printRunePages(const DTOField<RunePages>& dto, std::string indent="");
			void printRuneSlot(const DTOField<RuneSlot>& dto, std::string indent="");
			void printRuneSlotted(const DTOField<RuneSlotted>& dto, std::string indent="");
			void printSkin(const DTOField<Skin>& dto, std::string indent="");
			void printSpellVars(const DTOField<SpellVars>& dto, std::string indent="");
			void printStats(const DTOField<Stats>& dto, std::string indent="");
			void printSummoner(const DTOField<Summoner>& dto, std::string indent="");
			void printSummonerSpell(const DTOField<SummonerSpell>& dto, std::string indent="");
			void printSummonerSpellList(const DTOField<SummonerSpellList>& dto, std::string indent="");
			void printTalent(const DTOField<Talent>& dto, std::string indent="");
			void printTeam(const DTOField<Team>& dto, std::string indent="");
			void printTeamMemberInfo(const DTOField<TeamMemberInfo>& dto, std::string indent="");
			void printTeamStatDetail(const DTOField<TeamStatDetail>& dto, std::string indent="");
			void printTeamStatSummary(const DTOField<TeamStatSummary>& dto, std::string indent="");

		// ----------The less glorious wall of helper functions---------- //

			template<typename T>
			void printDTOVector(std::string label, const DTOField<std::vector<T>>& vectorField)
			{
				if(vectorField.isValid())
				{
					const std::vector<T>& vector = vectorField.data();
					std::cout << label << "[";
					for(unsigned i = 0; i < vector.size(); i++)
					{
						std::cout << vector[i];

						if(i != vector.size()-1)
							std::cout << ",";
					}
					std::cout << "]" << std::endl;
				}
			}

			void printDTOMap(std::string label, const DTOField<std::map<std::string, bool>>& mapField);
			void printDTOMap(std::string label, const DTOField<std::map<std::string, std::string>>& mapField);
	}
}

#endif // DATA_PRINTER_HPP