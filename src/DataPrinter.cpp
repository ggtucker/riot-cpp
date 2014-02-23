#include "DataPrinter.hpp"

namespace Riot
{
	namespace DataPrinter
	{
		namespace
		{
			const std::string INDENT = "  ";
		}

		void printAggregatedStats(const DTOField<AggregatedStats>& dto, std::string indent)
		{
			std::cout << indent << "AGGREGATED STATS:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const AggregatedStats& data = dto.data();
				std::cout << indent << "AVERAGE ASSISTS: " << data.averageAssists << std::endl;
				std::cout << indent << "AVERAGE CHAMPIONS KILLED: " << data.averageChampionsKilled << std::endl;
				std::cout << indent << "AVERAGE COMBAT PLAYER SCORE: " << data.averageCombatPlayerScore << std::endl;
				std::cout << indent << "AVERAGE NODE CAPTURE: " << data.averageNodeCapture << std::endl;
				std::cout << indent << "AVERAGE NODE CAPTURE ASSIST: " << data.averageNodeCaptureAssist << std::endl;
				std::cout << indent << "AVERAGE NODE NEUTRALIZE: " << data.averageNodeNeutralize << std::endl;
				std::cout << indent << "AVERAGE NODE NEUTRALIZE ASSIST: " << data.averageNodeNeutralizeAssist << std::endl;
				std::cout << indent << "AVERAGE NUM DEATHS: " << data.averageNumDeaths << std::endl;
				std::cout << indent << "AVERAGE OBJECTIVE PLAYER SCORE: " << data.averageObjectivePlayerScore << std::endl;
				std::cout << indent << "AVERAGE TEAM OBJECTIVE: " << data.averageTeamObjective << std::endl;
				std::cout << indent << "AVERAGE TOTAL PLAYER SCORE: " << data.averageTotalPlayerScore << std::endl;
				std::cout << indent << "BOT GAMES PLAYED: " << data.botGamesPlayed << std::endl;
				std::cout << indent << "KILLING SPREE: " << data.killingSpree << std::endl;
				std::cout << indent << "MAX ASSISTS: " << data.maxAssists << std::endl;
				std::cout << indent << "MAX CHAMPIONS KILLED: " << data.maxChampionsKilled << std::endl;
				std::cout << indent << "MAX COMBAT PLAYER SCORE: " << data.maxCombatPlayerScore << std::endl;
				std::cout << indent << "MAX LARGEST CRITICAL STRIKE: " << data.maxLargestCriticalStrike << std::endl;
				std::cout << indent << "MAX LARGEST KILLING SPREE: " << data.maxLargestKillingSpree << std::endl;
				std::cout << indent << "MAX NODE CAPTURE: " << data.maxNodeCapture << std::endl;
				std::cout << indent << "MAX NODE CAPTURE ASSIST: " << data.maxNodeCaptureAssist << std::endl;
				std::cout << indent << "MAX NODE NEUTRALIZE: " << data.maxNodeNeutralize << std::endl;
				std::cout << indent << "MAX NODE NEUTRALIZE ASSIST: " << data.maxNodeNeutralizeAssist << std::endl;
				std::cout << indent << "MAX NUM DEATHS: " << data.maxNumDeaths << std::endl;
				std::cout << indent << "MAX OBJECTIVE PLAYER SCORE: " << data.maxObjectivePlayerScore << std::endl;
				std::cout << indent << "MAX TEAM OBJECTIVE: " << data.maxTeamObjective << std::endl;
				std::cout << indent << "MAX TIME PLAYED: " << data.maxTimePlayed << std::endl;
				std::cout << indent << "MAX TIME SPENT LIVING: " << data.maxTimeSpentLiving << std::endl;
				std::cout << indent << "MAX TOTAL PLAYER SCORE: " << data.maxTotalPlayerScore << std::endl;
				std::cout << indent << "MOST CHAMPION KILLS PER SESSION: " << data.mostChampionKillsPerSession << std::endl;
				std::cout << indent << "MOST SPELLS CAST: " << data.mostSpellsCast << std::endl;
				std::cout << indent << "NORMAL GAMES PLAYED: " << data.normalGamesPlayed << std::endl;
				std::cout << indent << "RANKED PREMADE GAMES PLAYED: " << data.rankedPremadeGamesPlayed << std::endl;
				std::cout << indent << "RANKED SOLO GAMES PLAYED: " << data.rankedSoloGamesPlayed << std::endl;
				std::cout << indent << "TOTAL ASSISTS: " << data.totalAssists << std::endl;
				std::cout << indent << "TOTAL CHAMPION KILLS: " << data.totalChampionKills << std::endl;
				std::cout << indent << "TOTAL DAMAGE DEALT: " << data.totalDamageDealt << std::endl;
				std::cout << indent << "TOTAL DAMAGE TAKEN: " << data.totalDamageTaken << std::endl;
				std::cout << indent << "TOTAL DEATHS PER SESSION: " << data.totalDeathsPerSession << std::endl;
				std::cout << indent << "TOTAL DOUBLE KILLS: " << data.totalDoubleKills << std::endl;
				std::cout << indent << "TOTAL FIRST BLOOD: " << data.totalFirstBlood << std::endl;
				std::cout << indent << "TOTAL GOLD EARNED: " << data.totalGoldEarned << std::endl;
				std::cout << indent << "TOTAL HEAL: " << data.totalHeal << std::endl;
				std::cout << indent << "TOTAL MAGIC DAMAGE DEALT: " << data.totalMagicDamageDealt << std::endl;
				std::cout << indent << "TOTAL MINION KILLS: " << data.totalMinionKills << std::endl;
				std::cout << indent << "TOTAL NEUTRAL MINIONS KILLED: " << data.totalNeutralMinionsKilled << std::endl;
				std::cout << indent << "TOTAL NODE CAPTURE: " << data.totalNodeCapture << std::endl;
				std::cout << indent << "TOTAL NODE NEUTRALIZE: " << data.totalNodeNeutralize << std::endl;
				std::cout << indent << "TOTAL PENTA KILLS: " << data.totalPentaKills << std::endl;
				std::cout << indent << "TOTAL PHYSICAL DAMAGE DEALT: " << data.totalPhysicalDamageDealt << std::endl;
				std::cout << indent << "TOTAL QUADRA KILLS: " << data.totalQuadraKills << std::endl;
				std::cout << indent << "TOTAL SESSIONS LOST: " << data.totalSessionsLost << std::endl;
				std::cout << indent << "TOTAL SESSIONS PLAYED: " << data.totalSessionsPlayed << std::endl;
				std::cout << indent << "TOTAL SESSIONS WON: " << data.totalSessionsWon << std::endl;
				std::cout << indent << "TOTAL TRIPLE KILLS: " << data.totalTripleKills << std::endl;
				std::cout << indent << "TOTAL TURRETS KILLED: " << data.totalTurretsKilled << std::endl;
				std::cout << indent << "TOTAL UNREAL KILLS: " << data.totalUnrealKills << std::endl;
			}
		}

		void printBasicData(const DTOField<BasicData>& dto, std::string indent)
		{
			std::cout << indent << "BASIC DATA:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const BasicData& data = dto.data();
				std::cout << indent << "COLLOQ: " << data.colloq << std::endl;
				std::cout << indent << "CONSUME ON FULL: " << data.consumeOnFull << std::endl;
				std::cout << indent << "CONSUMED: " << data.consumed << std::endl;
				std::cout << indent << "DEPTH: " << data.depth << std::endl;
				std::cout << indent << "DESCRIPTION: " << data.description << std::endl;
				printDTOVector<std::string>(indent + "FROM: ", data.from);
				printGold(data.gold, indent);
				std::cout << indent << "GROUP: " << data.group << std::endl;
				std::cout << indent << "HIDE FROM ALL: " << data.hideFromAll << std::endl;
				printImage(data.image, indent);
				std::cout << indent << "IN STORE: " << data.inStore << std::endl;
				printDTOVector(indent + "INTO: ", data.into);
				printDTOMap(indent + "MAPS: ", data.maps);
				std::cout << indent << "NAME: " << data.name << std::endl;
				std::cout << indent << "PLAINTEXT: " << data.plaintext << std::endl;
				std::cout << indent << "REQUIRED CHAMPION: " << data.requiredChampion << std::endl;
				printMetaData(data.rune, indent);
				std::cout << indent << "SPECIAL RECIPE: " << data.specialRecipe << std::endl;
				std::cout << indent << "STACKS: " << data.stacks << std::endl;
				printBasicDataStats(data.stats, indent);
				printDTOVector<std::string>(indent + "TAGS: ", data.tags);
			}
		}

		void printBasicDataStats(const DTOField<BasicDataStats>& dto, std::string indent)
		{
			std::cout << indent << "BASIC DATA STATS:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const BasicDataStats& data = dto.data();
				std::cout << indent << "FLAT ARMOR MOD: " << data.FlatArmorMod << std::endl;
				std::cout << indent << "FLAT ATTACK SPEED MOD: " << data.FlatAttackSpeedMod << std::endl;
				std::cout << indent << "FLAT BLOCK MOD: " << data.FlatBlockMod << std::endl;
				std::cout << indent << "FLAT CRIT CHANCE MOD: " << data.FlatCritChanceMod << std::endl;
				std::cout << indent << "FLAT CRIT DAMAGE MOD: " << data.FlatCritDamageMod << std::endl;
				std::cout << indent << "FLAT EXP BONUS: " << data.FlatEXPBonus << std::endl;
				std::cout << indent << "FLAT ENERGY POOL MOD: " << data.FlapEnergyPoolMod << std::endl;
				std::cout << indent << "FLAT ENERGY REGEN MOD: " << data.FlatEnergyRegenMod << std::endl;
				std::cout << indent << "FLAT HP POOL MOD: " << data.FlatHPPoolMod << std::endl;
				std::cout << indent << "FLAT HP REGEN MOD: " << data.FlatHPRegenMod << std::endl;
				std::cout << indent << "FLAT MP POOL MOD: " << data.FlatMPPoolMod << std::endl;
				std::cout << indent << "FLAT MP REGEN MOD: " << data.FlatMPRegenMod << std::endl;
				std::cout << indent << "FLAT MAGIC DAMAGE MOD: " << data.FlatMagicDamageMod << std::endl;
				std::cout << indent << "FLAT MOVEMENT SPEED MOD: " << data.FlatMovementSpeedMod << std::endl;
				std::cout << indent << "FLAT PHYSICAL DAMAGE MOD: " << data.FlatPhysicalDamageMod << std::endl;
				std::cout << indent << "FLAT SPELL BLOCK MOD: " << data.FlatSpellBlockMod << std::endl;
				std::cout << indent << "PERCENT ARMOR MOD: " << data.PercentArmorMod << std::endl;
				std::cout << indent << "PERCENT ATTACK SPEED MOD: " << data.PercentAttackSpeedMod << std::endl;
				std::cout << indent << "PERCENT BLOCK MOD: " << data.PercentBlockMod << std::endl;
				std::cout << indent << "PERCENT CRIT CHANCE MOD: " << data.PercentCritChanceMod << std::endl;
				std::cout << indent << "PERCENT CRIT DAMAGE MOD: " << data.PercentCritDamageMod << std::endl;
				std::cout << indent << "PERCENT DODGE MOD: " << data.PercentDodgeMod << std::endl;
				std::cout << indent << "PERCENT EXP BONUS: " << data.PercentEXPBonus << std::endl;
				std::cout << indent << "PERCENT HP POOL MOD: " << data.PercentHPPoolMod << std::endl;
				std::cout << indent << "PERCENT HP REGEN MOD: " << data.PercentHPRegenMod << std::endl;
				std::cout << indent << "PERCENT LIFE STEAL MOD: " << data.PercentLifeStealMod << std::endl;
				std::cout << indent << "PERCENT MP POOL MOD: " << data.PercentMPPoolMod << std::endl;
				std::cout << indent << "PERCENT MP REGEN MOD: " << data.PercentMPRegenMod << std::endl;
				std::cout << indent << "PERCENT MAGIC DAMAGE MOD: " << data.PercentMagicDamageMod << std::endl;
				std::cout << indent << "PERCENT MOVEMENT SPEED MOD: " << data.PercentMovementSpeedMod << std::endl;
				std::cout << indent << "PERCENT PHYSICAL DAMAGE MOD: " << data.PercentPhysicalDamageMod << std::endl;
				std::cout << indent << "PERCENT SPELL BLOCK MOD: " << data.PercentSpellBlockMod << std::endl;
				std::cout << indent << "PERCENT SPELL VAMP MOD: " << data.PercentSpellVampMod << std::endl;
				std::cout << indent << "(RATE) FLAT ARMOR MOD PER LEVEL: " << data.rFlatArmorModPerLevel << std::endl;
				std::cout << indent << "(RATE) FLAT ARMOR PENETRATION MOD: " << data.rFlatArmorPenetrationMod << std::endl;
				std::cout << indent << "(RATE) FLAT ARMOR PENETRATION MOD PER LEVEL: " << data.rFlatArmorPenetrationModPerLevel << std::endl;
				std::cout << indent << "(RATE) FLAT CRIT CHANCE MOD PER LEVEL: " << data.rFlatCritChanceModPerLevel << std::endl;
				std::cout << indent << "(RATE) FLAT CRIT DAMAGE MOD PER LEVEL: " << data.rFlatCritDamageModPerLevel << std::endl;
				std::cout << indent << "(RATE) FLAT DODGE MOD: " << data.rFlatDodgeMod << std::endl;
				std::cout << indent << "(RATE) FLAT DODGE MOD PER LEVEL: " << data.rFlatDodgeModPerLevel << std::endl;
				std::cout << indent << "(RATE) FLAT ENERGY MOD PER LEVEL: " << data.rFlatEnergyModPerLevel << std::endl;
				std::cout << indent << "(RATE) FLAT ENERGY REGEN MOD PER LEVEL: " << data.rFlatEnergyRegenModPerLevel << std::endl;
				std::cout << indent << "(RATE) FLAT GOLD PER 10 MOD: " << data.rFlatGoldPer10Mod << std::endl;
				std::cout << indent << "(RATE) FLAT HP MOD PER LEVEL: " << data.rFlatHPModPerLevel << std::endl;
				std::cout << indent << "(RATE) FLAT HP REGEN MOD PER LEVEL: " << data.rFlatHPRegenModPerLevel << std::endl;
				std::cout << indent << "(RATE) FLAT MP MOD PER LEVEL: " << data.rFlatMPModPerLevel << std::endl;
				std::cout << indent << "(RATE) FLAT MP REGEN MOD PER LEVEL: " << data.rFlatMPRegenModPerLevel << std::endl;
				std::cout << indent << "(RATE) FLAT MAGIC DAMAGE MOD PER LEVEL: " << data.rFlatMagicDamageModPerLevel << std::endl;
				std::cout << indent << "(RATE) FLAT MAGIC PENETRATION MOD: " << data.rFlatMagicPenetrationMod << std::endl;
				std::cout << indent << "(RATE) FLAT MAGIC PENETRATION MOD PER LEVEL: " << data.rFlatMagicPenetrationModPerLevel << std::endl;
				std::cout << indent << "(RATE) FLAT MOVEMENT SPEED MOD PER LEVEL: " << data.rFlatMovementSpeedModPerLevel << std::endl;
				std::cout << indent << "(RATE) FLAT PHYSICAL DAMAGE MOD PER LEVEL: " << data.rFlatPhysicalDamageModPerLevel << std::endl;
				std::cout << indent << "(RATE) FLAT SPELL BLOCK MOD PER LEVEL: " << data.rFlatSpellBlockModPerLevel << std::endl;
				std::cout << indent << "(RATE) FLAT TIME DEAD MOD: " << data.rFlatTimeDeadMod << std::endl;
				std::cout << indent << "(RATE) FLAT TIME DEAD MOD PER LEVEL: " << data.rFlatTimeDeadModPerLevel << std::endl;
				std::cout << indent << "(RATE) PERCENT ARMOR PENETRATION MOD: " << data.rPercentArmorPenetrationMod << std::endl;
				std::cout << indent << "(RATE) PERCENT ARMOR PENETRATION MOD PER LEVEL: " << data.rPercentArmorPenetrationModPerLevel << std::endl;
				std::cout << indent << "(RATE) PERCENT ATTACK SPEED MOD PER LEVEL: " << data.rPercentAttackSpeedModPerLevel << std::endl;
				std::cout << indent << "(RATE) PERCENT COOLDOWN MOD: " << data.rPercentCooldownMod << std::endl;
				std::cout << indent << "(RATE) PERCENT COOLDOWN MOD PER LEVEL: " << data.rPercentCooldownModPerLevel << std::endl;
				std::cout << indent << "(RATE) PERCENT MAGIC PENETRATION MOD: " << data.rPercentMagicPenetrationMod << std::endl;
				std::cout << indent << "(RATE) PERCENT MAGIC PENETRATION MOD PER LEVEL: " << data.rPercentMagicPenetrationModPerLevel << std::endl;
				std::cout << indent << "(RATE) PERCENT MOVEMENT SPEED MOD PER LEVEL: " << data.rPercentMovementSpeedModPerLevel << std::endl;
				std::cout << indent << "(RATE) PERCENT TIME DEAD MOD: " << data.rPercentTimeDeadMod << std::endl;
				std::cout << indent << "(RATE) PERCENT TIME DEAD MOD PER LEVEL: " << data.rPercentTimeDeadModPerLevel << std::endl;
			}
		}

		void printBlock(const DTOField<Block>& dto, std::string indent)
		{
			
		}

		void printBlockItem(const DTOField<BlockItem>& dto, std::string indent)
		{
			
		}

		void printChampion(const DTOField<Champion>& dto, std::string indent)
		{
			std::cout << indent << "CHAMPION:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const Champion& data = dto.data();
				std::cout << indent << "ACTIVE: " << data.active << std::endl;
				std::cout << indent << "ATTACK RANK: " << data.attackRank << std::endl;
				std::cout << indent << "BOT ENABLED: "<<  data.botEnabled << std::endl;
				std::cout << indent << "BOT MM ENABLED: " << data.botMmEnabled << std::endl;
				std::cout << indent << "DEFENSE RANK: " << data.defenseRank << std::endl;
				std::cout << indent << "DIFFICULTY RANK: " << data.difficultyRank << std::endl;
				std::cout << indent << "FREE TO PLAY: " << data.freeToPlay << std::endl;
				std::cout << indent << "ID: " << data.id << std::endl;
				std::cout << indent << "MAGIC RANK: " << data.magicRank << std::endl;
				std::cout << indent << "NAME: " << data.name << std::endl;
				std::cout << indent << "RANKED PLAY ENABLED: " << data.rankedPlayEnabled << std::endl;
			}
		}

		void printChampionData(const DTOField<ChampionData>& dto, std::string indent)
		{
			
		}

		void printChampionDataList(const DTOField<ChampionDataList>& dto, std::string indent)
		{
			
		}

		void printChampionList(const DTOField<ChampionList>& dto, std::string indent)
		{
			std::cout << indent << "CHAMPION LIST:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const ChampionList& data = dto.data();
				if(data.champions.isValid())
				{
					for(const Champion& c : data.champions.data())
					{
						printChampion(c, indent);
					}
				}
			}
		}

		void printChampionSpell(const DTOField<ChampionSpell>& dto, std::string indent)
		{
			
		}

		void printChampionStats(const DTOField<ChampionStats>& dto, std::string indent)
		{
			
		}

		void printGame(const DTOField<Game>& dto, std::string indent)
		{
			
		}

		void printGold(const DTOField<Gold>& dto, std::string indent)
		{
			
		}

		void printGroup(const DTOField<Group>& dto, std::string indent)
		{
			
		}

		void printImage(const DTOField<Image>& dto, std::string indent)
		{
			
		}

		void printInfo(const DTOField<Info>& dto, std::string indent)
		{
			
		}

		void printItem(const DTOField<Item>& dto, std::string indent)
		{
			
		}

		void printItemList(const DTOField<ItemList>& dto, std::string indent)
		{
			
		}

		void printItemTree(const DTOField<ItemTree>& dto, std::string indent)
		{
			
		}

		void printLeague(const DTOField<League>& dto, std::string indent)
		{
			
		}

		void printLeagueItem(const DTOField<LeagueItem>& dto, std::string indent)
		{
			
		}

		void printLevelTip(const DTOField<LevelTip>& dto, std::string indent)
		{
			
		}

		void printMastery(const DTOField<Mastery>& dto, std::string indent)
		{
			
		}

		void printMasteryList(const DTOField<MasteryList>& dto, std::string indent)
		{
			
		}

		void printMasteryPage(const DTOField<MasteryPage>& dto, std::string indent)
		{
			
		}

		void printMasteryPages(const DTOField<MasteryPages>& dto, std::string indent)
		{
			
		}

		void printMasteryTree(const DTOField<MasteryTree>& dto, std::string indent)
		{
			
		}

		void printMasteryTreeItem(const DTOField<MasteryTreeItem>& dto, std::string indent)
		{
			
		}

		void printMasteryTreeList(const DTOField<MasteryTreeList>& dto, std::string indent)
		{
			
		}

		void printMatchHistorySummary(const DTOField<MatchHistorySummary>& dto, std::string indent)
		{
			
		}

		void printMessageOfDay(const DTOField<MessageOfDay>& dto, std::string indent)
		{
			
		}

		void printMetaData(const DTOField<MetaData>& dto, std::string indent)
		{
			
		}

		void printMiniSeries(const DTOField<MiniSeries>& dto, std::string indent)
		{
			
		}

		void printPassive(const DTOField<Passive>& dto, std::string indent)
		{
			
		}

		void printPlayer(const DTOField<Player>& dto, std::string indent)
		{
			
		}

		void printPlayerStatsSummary(const DTOField<PlayerStatsSummary>& dto, std::string indent)
		{
			
		}

		void printPlayerStatsSummaryList(const DTOField<PlayerStatsSummaryList>& dto, std::string indent)
		{
			
		}

		void printRankedStats(const DTOField<RankedStats>& dto, std::string indent)
		{
			
		}

		void printRawStats(const DTOField<RawStats>& dto, std::string indent)
		{
			
		}

		void printRealm(const DTOField<Realm>& dto, std::string indent)
		{
			
		}

		void printRecentGames(const DTOField<RecentGames>& dto, std::string indent)
		{
			
		}

		void printRecommended(const DTOField<Recommended>& dto, std::string indent)
		{
			
		}

		void printRoster(const DTOField<Roster>& dto, std::string indent)
		{
			
		}

		void printRune(const DTOField<Rune>& dto, std::string indent)
		{
			
		}

		void printRuneList(const DTOField<RuneList>& dto, std::string indent)
		{
			
		}

		void printRunePage(const DTOField<RunePage>& dto, std::string indent)
		{
			
		}

		void printRunePages(const DTOField<RunePages>& dto, std::string indent)
		{
			
		}

		void printRuneSlot(const DTOField<RuneSlot>& dto, std::string indent)
		{
			
		}

		void printRuneSlotted(const DTOField<RuneSlotted>& dto, std::string indent)
		{
			
		}

		void printSkin(const DTOField<Skin>& dto, std::string indent)
		{
			
		}

		void printSpellVars(const DTOField<SpellVars>& dto, std::string indent)
		{
			
		}

		void printStats(const DTOField<Stats>& dto, std::string indent)
		{
			
		}

		void printSummoner(const DTOField<Summoner>& dto, std::string indent)
		{
			
		}

		void printSummonerSpell(const DTOField<SummonerSpell>& dto, std::string indent)
		{
			
		}

		void printSummonerSpellList(const DTOField<SummonerSpellList>& dto, std::string indent)
		{
			
		}

		void printTalent(const DTOField<Talent>& dto, std::string indent)
		{
			
		}

		void printTeam(const DTOField<Team>& dto, std::string indent)
		{
			
		}

		void printTeamMemberInfo(const DTOField<TeamMemberInfo>& dto, std::string indent)
		{

		}

		void printTeamStatDetail(const DTOField<TeamStatDetail>& dto, std::string indent)
		{

		}

		void printTeamStatSummary(const DTOField<TeamStatSummary>& dto, std::string indent)
		{

		}

		// ----------Helper functions (Printing Maps)---------- //

		void printDTOMap(std::string label, const DTOField<std::map<std::string, bool>>& mapField)
		{
			if(mapField.isValid())
			{
				const std::map<std::string, bool>& map = mapField.data();
				std::cout << label << "[";
				for(auto it = map.begin(); it != map.end(); ++it)
				{
					if(it != map.begin())
						std::cout << ",";

					std::cout << it->first << "->" << it->second;
				}
				std::cout << "]" << std::endl;
			}
		}
	}
}