#include "DataPrinter.hpp"

namespace Riot
{
	namespace DataPrinter
	{
		void printAggregatedStats(const AggregatedStats& dto)
		{
			std::cout << ": " << dto.averageAssists << std::endl;
			std::cout << ": " << dto.averageChampionsKilled << std::endl;
			std::cout << ": " << dto.averageCombatPlayerScore << std::endl;
			std::cout << ": " << dto.averageNodeCapture << std::endl;
			std::cout << ": " << dto.averageNodeCaptureAssist << std::endl;
			std::cout << ": " << dto.averageNodeNeutralize << std::endl;
			std::cout << ": " << dto.averageNodeNeutralizeAssist << std::endl;
			std::cout << ": " << dto.averageNumDeaths << std::endl;
			std::cout << ": " << dto.averageObjectivePlayerScore << std::endl;
			std::cout << ": " << dto.averageTeamObjective << std::endl;
			std::cout << ": " << dto.averageTotalPlayerScore << std::endl;
			std::cout << ": " << dto.botGamesPlayed << std::endl;
			std::cout << ": " << dto.killingSpree << std::endl;
			std::cout << ": " << dto.maxAssists << std::endl;
			std::cout << ": " << dto.maxChampionsKilled << std::endl;
			std::cout << ": " << dto.maxCombatPlayerScore << std::endl;
			std::cout << ": " << dto.maxLargestCriticalStrike << std::endl;
			std::cout << ": " << dto.maxLargestKillingSpree << std::endl;
			std::cout << ": " << dto.maxNodeCapture << std::endl;
			std::cout << ": " << dto.maxNodeCaptureAssist << std::endl;
			std::cout << ": " << dto.maxNodeNeutralize << std::endl;
			std::cout << ": " << dto.maxNodeNeutralizeAssist << std::endl;
			std::cout << ": " << dto.maxNumDeaths << std::endl;
			std::cout << ": " << dto.maxObjectivePlayerScore << std::endl;
			std::cout << ": " << dto.maxTeamObjective << std::endl;
			std::cout << ": " << dto.maxTimePlayed << std::endl;
			std::cout << ": " << dto.maxTimeSpentLiving << std::endl;
			std::cout << ": " << dto.maxTotalPlayerScore << std::endl;
			std::cout << ": " << dto.mostChampionKillsPerSession << std::endl;
			std::cout << ": " << dto.mostSpellsCast << std::endl;
			std::cout << ": " << dto.normalGamesPlayed << std::endl;
			std::cout << ": " << dto.rankedPremadeGamesPlayed << std::endl;
			std::cout << ": " << dto.rankedSoloGamesPlayed << std::endl;
			std::cout << ": " << dto.totalAssists << std::endl;
			std::cout << ": " << dto.totalChampionKills << std::endl;
			std::cout << ": " << dto.totalDamageDealt << std::endl;
			std::cout << ": " << dto.totalDamageTaken << std::endl;
			std::cout << ": " << dto.totalDeathsPerSession << std::endl;
			std::cout << ": " << dto.totalDoubleKills << std::endl;
			std::cout << ": " << dto.totalFirstBlood << std::endl;
			std::cout << ": " << dto.totalGoldEarned << std::endl;
			std::cout << ": " << dto.totalHeal << std::endl;
			std::cout << ": " << dto.totalMagicDamageDealt << std::endl;
			std::cout << ": " << dto.totalMinionKills << std::endl;
			std::cout << ": " << dto.totalNeutralMinionsKilled << std::endl;
			std::cout << ": " << dto.totalNodeCapture << std::endl;
			std::cout << ": " << dto.totalNodeNeutralize << std::endl;
			std::cout << ": " << dto.totalPentaKills << std::endl;
			std::cout << ": " << dto.totalPhysicalDamageDealt << std::endl;
			std::cout << ": " << dto.totalQuadraKills << std::endl;
			std::cout << ": " << dto.totalSessionsLost << std::endl;
			std::cout << ": " << dto.totalSessionsPlayed << std::endl;
			std::cout << ": " << dto.totalSessionsWon << std::endl;
			std::cout << ": " << dto.totalTripleKills << std::endl;
			std::cout << ": " << dto.totalTurretsKilled << std::endl;
			std::cout << ": " << dto.totalUnrealKills << std::endl;
		}

		void printBasicData(const BasicData& dto)
		{

		}

		void printBasicDataStats(const BasicDataStats& dto)
		{
			
		}

		void printBlock(const Block& dto)
		{
			
		}

		void printBlockItem(const BlockItem& dto)
		{
			
		}

		void printChampion(const Champion& dto)
		{
			std::cout << "ACTIVE: " << dto.active << std::endl;
			std::cout << "ATTACK RANK: " << dto.attackRank << std::endl;
			std::cout << "BOT ENABLED: "<<  dto.botEnabled << std::endl;
			std::cout << "BOT MM ENABLED: " << dto.botMmEnabled << std::endl;
			std::cout << "DEFENSE RANK: " << dto.defenseRank << std::endl;
			std::cout << "DIFFICULTY RANK: " << dto.difficultyRank << std::endl;
			std::cout << "FREE TO PLAY: " << dto.freeToPlay << std::endl;
			std::cout << "ID: " << dto.id << std::endl;
			std::cout << "MAGIC RANK: " << dto.magicRank << std::endl;
			std::cout << "NAME: " << dto.name << std::endl;
			std::cout << "RANKED PLAY ENABLED: " << dto.rankedPlayEnabled << std::endl;
		}

		void printChampionData(const ChampionData& dto)
		{
			
		}

		void printChampionDataList(const ChampionDataList& dto)
		{
			
		}

		void printChampionList(const ChampionList& dto)
		{
			for(const Champion& c : dto.champions)
			{
				std::cout << "{" << std::endl;
				printChampion(c);
				std::cout << "}" << std::endl;
			}
		}

		void printChampionSpell(const ChampionSpell& dto)
		{
			
		}

		void printChampionStats(const ChampionStats& dto)
		{
			
		}

		void printGame(const Game& dto)
		{
			
		}

		void printGold(const Gold& dto)
		{
			
		}

		void printGroup(const Group& dto)
		{
			
		}

		void printImage(const Image& dto)
		{
			
		}

		void printInfo(const Info& dto)
		{
			
		}

		void printItem(const Item& dto)
		{
			
		}

		void printItemList(const ItemList& dto)
		{
			
		}

		void printItemTree(const ItemTree& dto)
		{
			
		}

		void printLeague(const League& dto)
		{
			
		}

		void printLeagueItem(const LeagueItem& dto)
		{
			
		}

		void printLevelTip(const LevelTip& dto)
		{
			
		}

		void printMastery(const Mastery& dto)
		{
			
		}

		void printMasteryList(const MasteryList& dto)
		{
			
		}

		void printMasteryPage(const MasteryPage& dto)
		{
			
		}

		void printMasteryPages(const MasteryPages& dto)
		{
			
		}

		void printMasteryTree(const MasteryTree& dto)
		{
			
		}

		void printMasteryTreeItem(const MasteryTreeItem& dto)
		{
			
		}

		void printMasteryTreeList(const MasteryTreeList& dto)
		{
			
		}

		void printMatchHistorySummary(const MatchHistorySummary& dto)
		{
			
		}

		void printMessageOfDay(const MessageOfDay& dto)
		{
			
		}

		void printMetaData(const MetaData& dto)
		{
			
		}

		void printMiniSeries(const MiniSeries& dto)
		{
			
		}

		void printPassive(const Passive& dto)
		{
			
		}

		void printPlayer(const Player& dto)
		{
			
		}

		void printPlayerStatsSummary(const PlayerStatsSummary& dto)
		{
			
		}

		void printPlayerStatsSummaryList(const PlayerStatsSummaryList& dto)
		{
			
		}

		void printRankedStats(const RankedStats& dto)
		{
			
		}

		void printRawStats(const RawStats& dto)
		{
			
		}

		void printRealm(const Realm& dto)
		{
			
		}

		void printRecentGames(const RecentGames& dto)
		{
			
		}

		void printRecommended(const Recommended& dto)
		{
			
		}

		void printRoster(const Roster& dto)
		{
			
		}

		void printRune(const Rune& dto)
		{
			
		}

		void printRuneList(const RuneList& dto)
		{
			
		}

		void printRunePage(const RunePage& dto)
		{
			
		}

		void printRunePages(const RunePages& dto)
		{
			
		}

		void printRuneSlot(const RuneSlot& dto)
		{
			
		}

		void printRuneSlotted(const RuneSlotted& dto)
		{
			
		}

		void printSkin(const Skin& dto)
		{
			
		}

		void printSpellVars(const SpellVars& dto)
		{
			
		}

		void printStats(const Stats& dto)
		{
			
		}

		void printSummoner(const Summoner& dto)
		{
			
		}

		void printSummonerSpell(const SummonerSpell& dto)
		{
			
		}

		void printSummonerSpellList(const SummonerSpellList& dto)
		{
			
		}

		void printTalent(const Talent& dto)
		{
			
		}

		void printTeam(const Team& dto)
		{
			
		}

		void printTeamMemberInfo(const TeamMemberInfo& dto)
		{

		}

		void printTeamStatDetail(const TeamStatDetail& dto)
		{

		}

		void printTeamStatSummary(const TeamStatSummary& dto)
		{

		}
	}
}