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
				printDTOVector<std::string>(indent + "INTO: ", data.into);
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
			std::cout << indent << "BLOCK:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const Block& data = dto.data();
				if(data.items.isValid())
				{
					std::cout << indent << "ITEMS:" << std::endl;
					for(const BlockItem& i : data.items.data())
					{
						printBlockItem(i, indent + INDENT);
					}
				}
				std::cout << indent << "TYPE: " << data.type << std::endl;
			}
		}

		void printBlockItem(const DTOField<BlockItem>& dto, std::string indent)
		{
			std::cout << indent << "BLOCK ITEM:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const BlockItem& data = dto.data();
				std::cout << indent << "COUNT: " << data.count << std::endl;
				std::cout << indent << "ID: " << data.id << std::endl;
			}
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
			std::cout << indent << "CHAMPION DATA:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const ChampionData& data = dto.data();
				printDTOVector<std::string>(indent + "ALLY TIPS: ", data.allytips);
				std::cout << indent << "BLURB: " << data.blurb << std::endl;
				printDTOVector<std::string>(indent + "ENEMY TIPS: ", data.enemytips);
				std::cout << indent << "ID: " << data.id << std::endl;
				printImage(data.image, indent);
				printInfo(data.info, indent);
				std::cout << indent << "KEY: " << data.key << std::endl;
				std::cout << indent << "LORE: " << data.lore << std::endl;
				std::cout << indent << "NAME: " << data.name << std::endl;
				std::cout << indent << "PAR TYPE: " << data.partype << std::endl;
				printPassive(data.passive, indent);
				if(data.recommended.isValid())
				{
					std::cout << indent << "RECOMMENDED:" << std::endl;
					for(const Recommended& r : data.recommended.data())
					{
						printRecommended(r, indent + INDENT);
					}
				}
				if(data.skins.isValid())
				{
					std::cout << indent << "SKINS:" << std::endl;
					for(const Skin& s : data.skins.data())
					{
						printSkin(s, indent + INDENT);
					}
				}
				if(data.spells.isValid())
				{
					std::cout << indent << "SPELLS:" << std::endl;
					for(const ChampionSpell& s : data.spells.data())
					{
						printChampionSpell(s, indent + INDENT);
					}
				}
				printStats(data.stats, indent);
				printDTOVector<std::string>(indent + "TAGS: ", data.tags);
				std::cout << indent << "TITLE: " << data.title << std::endl;
			}
		}

		void printChampionDataList(const DTOField<ChampionDataList>& dto, std::string indent)
		{
			std::cout << indent << "CHAMPION DATA LIST:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const ChampionDataList& data = dto.data();
				if(data.data.isValid())
				{
					std::cout << indent << "DATA:" << std::endl;
					for(auto it = data.data.data().begin(); it != data.data.data().end(); ++it)
					{
						std::cout << indent + INDENT << "\"" << it->first << "\"->" << std::endl;
						printChampionData(it->second, indent + INDENT);
					}
				}
				std::cout << indent << "FORMAT: " << data.format << std::endl;
				printDTOMap(indent + "KEYS: ", data.keys);
				std::cout << indent << "TYPE: " << data.type << std::endl;
				std::cout << indent << "VERSION: " << data.version << std::endl;
			}
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
					std::cout << indent << "CHAMPIONS:" << std::endl;
					for(const Champion& c : data.champions.data())
					{
						printChampion(c, indent + INDENT);
					}
				}
			}
		}

		void printChampionSpell(const DTOField<ChampionSpell>& dto, std::string indent)
		{
			std::cout << indent << "CHAMPION SPELL:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const ChampionSpell& data = dto.data();
				printDTOVector<int>(indent + "COOLDOWN: ", data.cooldown);
				std::cout << indent << "COOLDOWN BURN: " << data.cooldownBurn << std::endl;
				printDTOVector<int>(indent + "COST: ", data.cost);
				std::cout << indent << "COOLDOWN BURN: " << data.cooldownBurn << std::endl;
				std::cout << indent << "COST TYPE: " << data.costType << std::endl;
				std::cout << indent << "DESCRIPTION: " << data.description << std::endl;
				if(data.effect.isValid())
				{
					std::cout << indent << "EFFECT:" << std::endl;
					std::cout << indent << "[" << std::endl;
					for(unsigned i = 0; i < data.effect.data().size(); i++)
					{
						printDTOVector<int>(indent + INDENT, data.effect.data()[i]);
					}
					std::cout << indent << "]" << std::endl;
				}
				printDTOVector<std::string>(indent + "EFFECT BURN: ", data.effectBurn);
				std::cout << indent << "ID: " << data.id << std::endl;
				printImage(data.image);
				printLevelTip(data.leveltip);
				std::cout << indent << "MAX RANK: " << data.maxrank << std::endl;
				std::cout << indent << "NAME: " << data.name << std::endl;
				printDTOVector<int>(indent + "RANGE: ", data.range);
				std::cout << indent << "RANGE BURN: " << data.rangeBurn << std::endl;
				std::cout << indent << "RESOURCE: " << data.resource << std::endl;
				std::cout << indent << "TOOL TIP: " << data.tooltip << std::endl;
				if(data.vars.isValid())
				{
					std::cout << indent << "VARS:" << std::endl;
					for(const SpellVars& v : data.vars.data())
					{
						printSpellVars(v, indent + INDENT);
					}
				}
			}
		}

		void printChampionStats(const DTOField<ChampionStats>& dto, std::string indent)
		{
			std::cout << indent << "CHAMPION STATS:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const ChampionStats& data = dto.data();
				std::cout << indent << "ID: " << data.id << std::endl;
				std::cout << indent << "NAME: " << data.name << std::endl;
				printAggregatedStats(data.stats, indent);
			}
		}

		void printGame(const DTOField<Game>& dto, std::string indent)
		{
			std::cout << indent << "GAME:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const Game& data = dto.data();
				std::cout << indent << "CHAMPION ID: " << data.championId << std::endl;
				std::cout << indent << "CREATE DATE: " << data.createDate << std::endl;
				if(data.fellowPlayers.isValid())
				{
					std::cout << indent << "FELLOW PLAYERS:" << std::endl;
					for(const Player& p : data.fellowPlayers.data())
					{
						printPlayer(p, indent + INDENT);
					}
				}
				std::cout << indent << "GAME ID: " << data.gameId << std::endl;
				std::cout << indent << "GAME MODE: " << data.gameMode << std::endl;
				std::cout << indent << "GAME TYPE: " << data.gameType << std::endl;
				std::cout << indent << "INVALID: " << data.invalid << std::endl;
				std::cout << indent << "LEVEL: " << data.level << std::endl;
				std::cout << indent << "MAP ID: " << data.mapId << std::endl;
				std::cout << indent << "SPELL 1: " << data.spell1 << std::endl;
				std::cout << indent << "SPELL 2: " << data.spell2 << std::endl;
				printRawStats(data.stats, indent);
				std::cout << indent << "SUB TYPE: " << data.subType << std::endl;
				std::cout << indent << "TEAM ID: " << data.teamId << std::endl;
			}
		}

		void printGold(const DTOField<Gold>& dto, std::string indent)
		{
			std::cout << indent << "GOLD:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const Gold& data = dto.data();
				std::cout << indent << "BASE: " << data.base << std::endl;
				std::cout << indent << "PURCHASABLE: " << data.purchasable << std::endl;
				std::cout << indent << "SELL: " << data.sell << std::endl;
				std::cout << indent << "TOTAL: " << data.total << std::endl;
			}
		}

		void printGroup(const DTOField<Group>& dto, std::string indent)
		{
			std::cout << indent << "GROUP:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const Group& data = dto.data();
				std::cout << indent << "MAX GROUP OWNABLE: " << data.MaxGroupOwnable << std::endl;
				std::cout << indent << "ID: " << data.id << std::endl;
			}
		}

		void printImage(const DTOField<Image>& dto, std::string indent)
		{
			std::cout << indent << "IMAGE:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const Image& data = dto.data();
				std::cout << indent << "FULL: " << data.full << std::endl;
				std::cout << indent << "GROUP: " << data.group << std::endl;
				std::cout << indent << "H: " << data.h << std::endl;
				std::cout << indent << "SPRITE: " << data.sprite << std::endl;
				std::cout << indent << "W: " << data.w << std::endl;
				std::cout << indent << "X: " << data.x << std::endl;
				std::cout << indent << "Y: " << data.y << std::endl;
			}
		}

		void printInfo(const DTOField<Info>& dto, std::string indent)
		{
			std::cout << indent << "INFO:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const Info& data = dto.data();
				std::cout << indent << "ATTACK: " << data.attack << std::endl;
				std::cout << indent << "DEFENSE: " << data.defense << std::endl;
				std::cout << indent << "DIFFICULTY: " << data.difficulty << std::endl;
				std::cout << indent << "MAGIC: " << data.magic << std::endl;
			}
		}

		void printItem(const DTOField<Item>& dto, std::string indent)
		{
			std::cout << indent << "ITEM:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const Item& data = dto.data();
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
				printDTOVector<std::string>(indent + "INTO: ", data.into);
				printDTOMap(indent + "MAPS: ", data.maps);
				std::cout << indent << "NAME: " << data.name << std::endl;
				std::cout << indent << "PLAIN TEXT: " << data.plaintext << std::endl;
				std::cout << indent << "REQUIRED CHAMPION: " << data.requiredChampion << std::endl;
				printMetaData(data.rune, indent);
				std::cout << indent << "SPECIAL RECIPE: " << data.specialRecipe << std::endl;
				std::cout << indent << "STACKS: " << data.stacks << std::endl;
				printBasicDataStats(data.stats, indent);
				printDTOVector<std::string>(indent + "TAGS: ", data.tags);
			}
		}

		void printItemList(const DTOField<ItemList>& dto, std::string indent)
		{
			std::cout << indent << "ITEM LIST:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const ItemList& data = dto.data();
				printBasicData(data.basic, indent);
				if(data.data.isValid())
				{
					std::cout << indent << "DATA:" << std::endl;
					for(auto it = data.data.data().begin(); it != data.data.data().end(); ++it)
					{
						std::cout << indent + INDENT << "\"" << it->first << "\"->" << std::endl;
						printItem(it->second, indent + INDENT);
					}
				}
				if(data.groups.isValid())
				{
					std::cout << indent << "GROUPS:" << std::endl;
					for(const Group& g : data.groups.data())
					{
						printGroup(g, indent + INDENT);
					}
				}
				if(data.tree.isValid())
				{
					std::cout << indent << "TREE:" << std::endl;
					for(const ItemTree& t : data.tree.data())
					{
						printItemTree(t, indent + INDENT);
					}
				}
				std::cout << indent << "TYPE: " << data.type << std::endl;
				std::cout << indent << "VERSION: " << data.version << std::endl;
			}
		}

		void printItemTree(const DTOField<ItemTree>& dto, std::string indent)
		{
			std::cout << indent << "ITEM TREE:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const ItemTree& data = dto.data();
				std::cout << indent << "HEADER: " << data.header << std::endl;
				printDTOVector<std::string>(indent + "TAGS: ", data.tags);
			}
		}

		void printLeague(const DTOField<League>& dto, std::string indent)
		{
			std::cout << indent << "LEAGUE:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const League& data = dto.data();
				if(data.entries.isValid())
				{
					std::cout << indent << "ENTRIES:" << std::endl;
					for(const LeagueItem& i : data.entries.data())
					{
						printLeagueItem(i, indent + INDENT);
					}
				}
				std::cout << indent << "NAME: " << data.name << std::endl;
				std::cout << indent << "PARTICIPANT ID: " << data.participantId << std::endl;
				std::cout << indent << "QUEUE: " << data.queue << std::endl;
				std::cout << indent << "TIER: " << data.tier << std::endl;
			}
		}

		void printLeagueItem(const DTOField<LeagueItem>& dto, std::string indent)
		{
			std::cout << indent << "LEAGUE ITEM:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const LeagueItem& data = dto.data();
				std::cout << indent << "IS FRESH BLOOD: " << data.isFreshBlood << std::endl;
				std::cout << indent << "IS HOT STREAK: " << data.isHotStreak << std::endl;
				std::cout << indent << "IS INACTIVE: " << data.isInactive << std::endl;
				std::cout << indent << "IS VETERAN: " << data.isVeteran << std::endl;
				std::cout << indent << "LAST PLAYED: " << data.lastPlayed << std::endl;
				std::cout << indent << "LEAGUE NAME: " << data.leagueName << std::endl;
				std::cout << indent << "LEAGUE POINTS: " << data.leaguePoints << std::endl;
				printMiniSeries(data.miniSeries, indent);
				std::cout << indent << "PLAYER OR TEAM ID: " << data.playerOrTeamId << std::endl;
				std::cout << indent << "PLAYER OR TEAM NAME: " << data.playerOrTeamName << std::endl;
				std::cout << indent << "QUEUE TYPE: " << data.queueType << std::endl;
				std::cout << indent << "RANK: " << data.rank << std::endl;
				std::cout << indent << "TIER: " << data.tier << std::endl;
				std::cout << indent << "WINS: " << data.wins << std::endl;
			}
		}

		void printLevelTip(const DTOField<LevelTip>& dto, std::string indent)
		{
			std::cout << indent << "LEVEL TIP:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const LevelTip& data = dto.data();
				printDTOVector<std::string>(indent + "EFFECT: ", data.effect);
				printDTOVector<std::string>(indent + "LABEL: ", data.label);
			}
		}

		void printMastery(const DTOField<Mastery>& dto, std::string indent)
		{
			std::cout << indent << "MASTERY:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const Mastery& data = dto.data();
				printDTOVector<std::string>(indent + "DESCRIPTION: ", data.description);
				std::cout << indent << "ID: " << data.id << std::endl;
				printImage(data.image, indent);
				std::cout << indent << "NAME: " << data.name << std::endl;
				std::cout << indent << "PREREQ: " << data.prereq << std::endl;
				std::cout << indent << "RANKS: " << data.ranks << std::endl;
			}
		}

		void printMasteryList(const DTOField<MasteryList>& dto, std::string indent)
		{
			std::cout << indent << "MASTERY LIST:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const MasteryList& data = dto.data();
				if(data.data.isValid())
				{
					std::cout << indent << "DATA:" << std::endl;
					for(auto it = data.data.data().begin(); it != data.data.data().end(); ++it)
					{
						std::cout << indent + INDENT << "\"" << it->first << "\"->" << std::endl;
						printMastery(it->second, indent + INDENT);
					}
				}
				printMasteryTree(data.tree, indent);
				std::cout << indent << "TYPE: " << data.type << std::endl;
				std::cout << indent << "VERSION: " << data.version << std::endl;
			}
		}

		void printMasteryPage(const DTOField<MasteryPage>& dto, std::string indent)
		{
			std::cout << indent << "MASTERY PAGE:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const MasteryPage& data = dto.data();
				std::cout << indent << "CURRENT: " << data.current << std::endl;
				std::cout << indent << "ID: " << data.id << std::endl;
				std::cout << indent << "NAME: " << data.name << std::endl;
				if(data.talents.isValid())
				{
					std::cout << indent << "TALENTS:" << std::endl;
					for(const Talent& t : data.talents.data())
					{
						printTalent(t, indent + INDENT);
					}
				}
			}
		}

		void printMasteryPages(const DTOField<MasteryPages>& dto, std::string indent)
		{
			std::cout << indent << "MASTERY PAGES:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const MasteryPages& data = dto.data();
				if(data.pages.isValid())
				{
					std::cout << indent << "PAGES:" << std::endl;
					for(const MasteryPage& p : data.pages.data())
					{
						printMasteryPage(p, indent + INDENT);
					}
				}
				std::cout << indent << "SUMMONER ID: " << data.summonerId << std::endl;
			}
		}

		void printMasteryTree(const DTOField<MasteryTree>& dto, std::string indent)
		{
			std::cout << indent << "MASTERY TREE:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const MasteryTree& data = dto.data();
				if(data.Defense.isValid())
				{
					std::cout << indent << "DEFENSE:" << std::endl;
					for(const MasteryTreeList& l : data.Defense.data())
					{
						printMasteryTreeList(l, indent + INDENT);
					}
				}
				if(data.Offense.isValid())
				{
					std::cout << indent << "OFFENSE:" << std::endl;
					for(const MasteryTreeList& l : data.Offense.data())
					{
						printMasteryTreeList(l, indent + INDENT);
					}
				}
				if(data.Utility.isValid())
				{
					std::cout << indent << "UTILITY:" << std::endl;
					for(const MasteryTreeList& l : data.Utility.data())
					{
						printMasteryTreeList(l, indent + INDENT);
					}
				}
			}
		}

		void printMasteryTreeItem(const DTOField<MasteryTreeItem>& dto, std::string indent)
		{
			std::cout << indent << "MASTERY TREE ITEM:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const MasteryTreeItem& data = dto.data();
				std::cout << indent << "MASTERY ID: " << data.masteryId << std::endl;
				std::cout << indent << "PREREQ: " << data.prereq << std::endl;
			}
		}

		void printMasteryTreeList(const DTOField<MasteryTreeList>& dto, std::string indent)
		{
			std::cout << indent << "MASTERY TREE LIST:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const MasteryTreeList& data = dto.data();
				if(data.masteryTreeItems.isValid())
				{
					std::cout << indent << "MASTERY TREE ITEMS:" << std::endl;
					for(const MasteryTreeItem& i : data.masteryTreeItems.data())
					{
						printMasteryTreeItem(i, indent + INDENT);
					}
				}
			}
		}

		void printMatchHistorySummary(const DTOField<MatchHistorySummary>& dto, std::string indent)
		{
			std::cout << indent << "MATCH HISTORY SUMMARY:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const MatchHistorySummary& data = dto.data();
				std::cout << indent << "ASSISTS: " << data.assists << std::endl;
				std::cout << indent << "DATE: " << data.date << std::endl;
				std::cout << indent << "DEATHS: " << data.deaths << std::endl;
				std::cout << indent << "GAME ID: " << data.gameId << std::endl;
				std::cout << indent << "GAME MODE: " << data.gameMode << std::endl;
				std::cout << indent << "INVALID: " << data.invalid << std::endl;
				std::cout << indent << "KILLS: " << data.kills << std::endl;
				std::cout << indent << "MAP ID: " << data.mapId << std::endl;
				std::cout << indent << "OPPOSING TEAM KILLS: " << data.opposingTeamKills << std::endl;
				std::cout << indent << "OPPOSING TEAM NAME: " << data.opposingTeamName << std::endl;
				std::cout << indent << "WIN: " << data.win << std::endl;
			}
		}

		void printMessageOfDay(const DTOField<MessageOfDay>& dto, std::string indent)
		{
			std::cout << indent << "MESSAGE OF DAY:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const MessageOfDay& data = dto.data();
				std::cout << indent << "CREATE DATE: " << data.createDate << std::endl;
				std::cout << indent << "MESSAGE: " << data.message << std::endl;
				std::cout << indent << "VERSION: " << data.version << std::endl;
			}
		}

		void printMetaData(const DTOField<MetaData>& dto, std::string indent)
		{
			std::cout << indent << "META DATA:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const MetaData& data = dto.data();
				std::cout << indent << "IS RUNE: " << data.isRune << std::endl;
				std::cout << indent << "TIER: " << data.tier << std::endl;
				std::cout << indent << "TYPE: " << data.type << std::endl;
			}
		}

		void printMiniSeries(const DTOField<MiniSeries>& dto, std::string indent)
		{
			std::cout << indent << "MINI SERIES:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const MiniSeries& data = dto.data();
				std::cout << indent << "LOSSES: " << data.losses << std::endl;
				printDTOVector<char>(indent + "PROGRESS: ", data.progress);
				std::cout << indent << "TARGET: " << data.target << std::endl;
				std::cout << indent << "TIME LEFT TO PLAY (MILLIS): " << data.timeLeftToPlayMillis << std::endl;
				std::cout << indent << "WINS: " << data.wins << std::endl;
			}
		}

		void printPassive(const DTOField<Passive>& dto, std::string indent)
		{
			std::cout << indent << "PASSIVE:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const Passive& data = dto.data();
				std::cout << indent << "DESCRIPTION: " << data.description << std::endl;
				printImage(data.image, indent);
				std::cout << indent << "NAME: " << data.name << std::endl;
			}
		}

		void printPlayer(const DTOField<Player>& dto, std::string indent)
		{
			std::cout << indent << "PLAYER:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const Player& data = dto.data();
				std::cout << indent << "CHAMPION ID: " << data.championId << std::endl;
				std::cout << indent << "SUMMONER ID: " << data.summonerId << std::endl;
				std::cout << indent << "TEAM ID: " << data.teamId << std::endl;
			}
		}

		void printPlayerStatsSummary(const DTOField<PlayerStatsSummary>& dto, std::string indent)
		{
			std::cout << indent << "PLAYER STATS SUMMARY:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const PlayerStatsSummary& data = dto.data();
				printAggregatedStats(data.aggregatedStats, indent);
				std::cout << indent << "LOSSES: " << data.losses << std::endl;
				std::cout << indent << "MODIFY DATE: " << data.modifyDate << std::endl;
				std::cout << indent << "PLAYER STAT SUMMARY TYPE: " << data.playerStatSummaryType << std::endl;
				std::cout << indent << "WINS: " << data.wins << std::endl;
			}
		}

		void printPlayerStatsSummaryList(const DTOField<PlayerStatsSummaryList>& dto, std::string indent)
		{
			std::cout << indent << "PLAYER STATS SUMMARY LIST:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const PlayerStatsSummaryList& data = dto.data();
				if(data.playerStatSummaries.isValid())
				{
					std::cout << indent << "PLAYER STAT SUMMARIES:" << std::endl;
					for(const PlayerStatsSummary& s : data.playerStatSummaries.data())
					{
						printPlayerStatsSummary(s, indent + INDENT);
					}
				}
				std::cout << indent << "SUMMONER ID: " << data.summonerId << std::endl;
			}
		}

		void printRankedStats(const DTOField<RankedStats>& dto, std::string indent)
		{
			std::cout << indent << "RANKED STATS:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const RankedStats& data = dto.data();
				if(data.champions.isValid())
				{
					std::cout << indent << "CHAMPIONS:" << std::endl;
					for(const ChampionStats& s : data.champions.data())
					{
						printChampionStats(s, indent + INDENT);
					}
				}
				std::cout << indent << "MODIFY DATE: " << data.modifyDate << std::endl;
				std::cout << indent << "SUMMONER ID: " << data.summonerId << std::endl;
			}
		}

		void printRawStats(const DTOField<RawStats>& dto, std::string indent)
		{
			std::cout << indent << "RAW STATS:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const RawStats& data = dto.data();
				std::cout << indent << "ASSISTS: " << data.assists << std::endl;
				std::cout << indent << "BARRACKS KILLED: " << data.barracksKilled << std::endl;
				std::cout << indent << "CHAMPIONS KILLED: " << data.championsKilled << std::endl;
				std::cout << indent << "COMBAT PLAYER SCORE: " << data.combatPlayerScore << std::endl;
				std::cout << indent << "CONSUMABLES PURCHASED: " << data.consumablesPurchased << std::endl;
				std::cout << indent << "DAMAGE DEALT PLAYER: " << data.damageDealtPlayer << std::endl;
				std::cout << indent << "DOUBLE KILLS: " << data.doubleKills << std::endl;
				std::cout << indent << "FIRST BLOOD: " << data.firstBlood << std::endl;
				std::cout << indent << "GOLD: " << data.gold << std::endl;
				std::cout << indent << "GOLD EARNED: " << data.goldEarned << std::endl;
				std::cout << indent << "GOLD SPENT: " << data.goldSpent << std::endl;
				std::cout << indent << "ITEM 0: " << data.item0 << std::endl;
				std::cout << indent << "ITEM 1: " << data.item1 << std::endl;
				std::cout << indent << "ITEM 2: " << data.item2 << std::endl;
				std::cout << indent << "ITEM 3: " << data.item3 << std::endl;
				std::cout << indent << "ITEM 4: " << data.item4 << std::endl;
				std::cout << indent << "ITEM 5: " << data.item5 << std::endl;
				std::cout << indent << "ITEM 6: " << data.item6 << std::endl;
				std::cout << indent << "ITEMS PURCHASED: " << data.itemsPurchased << std::endl;
				std::cout << indent << "KILLING SPREES: " << data.killingSprees << std::endl;
				std::cout << indent << "LARGEST CRITICAL STRIKE: " << data.largestCriticalStrike << std::endl;
				std::cout << indent << "LARGEST KILLING SPREE: " << data.largestKillingSpree << std::endl;
				std::cout << indent << "LARGEST MULTI KILL: " << data.largestMultiKill << std::endl;
				std::cout << indent << "LEGENDARY ITEMS CREATED: " << data.legendaryItemsCreated << std::endl;
				std::cout << indent << "LEVEL: " << data.level << std::endl;
				std::cout << indent << "MAGIC DAMAGE DEALT PLAYER: " << data.magicDamageDealtPlayer << std::endl;
				std::cout << indent << "MAGIC DAMAGE DEALT TO CHAMPIONS: " << data.magicDamageDealtToChampions << std::endl;
				std::cout << indent << "MAGIC DAMAGE TAKEN: " << data.magicDamageTaken << std::endl;
				std::cout << indent << "MINIONS DENIED: " << data.minionsDenied << std::endl;
				std::cout << indent << "MINIONS KILLED: " << data.minionsKilled << std::endl;
				std::cout << indent << "NEUTRAL MINIONS KILLED: " << data.neutralMinionsKilled << std::endl;
				std::cout << indent << "NEUTRAL MINIONS KILLED ENEMY JUNGLE: " << data.neutralMinionsKilledEnemyJungle << std::endl;
				std::cout << indent << "NEUTRAL MINIONS KILLED YOUR JUNGLE: " << data.neutralMinionsKilledYourJungle << std::endl;
				std::cout << indent << "NEXUS KILLED: " << data.nexusKilled << std::endl;
				std::cout << indent << "NODE CAPTURE: " << data.nodeCapture << std::endl;
				std::cout << indent << "NODE CAPTURE ASSIST: " << data.nodeCaptureAssist << std::endl;
				std::cout << indent << "NODE NEUTRALIZE: " << data.nodeNeutralize << std::endl;
				std::cout << indent << "NODE NEUTRALIZE ASSIST: " << data.nodeNeutralizeAssist << std::endl;
				std::cout << indent << "NUM DEATHS: " << data.numDeaths << std::endl;
				std::cout << indent << "NUM ITEMS BOUGHT: " << data.numItemsBought << std::endl;
				std::cout << indent << "OBJECTIVE PLAYER SCORE: " << data.objectivePlayerScore << std::endl;
				std::cout << indent << "PENTA KILLS: " << data.pentaKills << std::endl;
				std::cout << indent << "PHYSICAL DAMAGE DEALT PLAYER: " << data.physicalDamageDealtPlayer << std::endl;
				std::cout << indent << "PHYSICAL DAMAGE DEALT TO CHAMPIONS: " << data.physicalDamageDealtToChampions << std::endl;
				std::cout << indent << "PHYSICAL DAMAGE TAKEN: " << data.physicalDamageTaken << std::endl;
				std::cout << indent << "QUADRA KILLS: " << data.quadraKills << std::endl;
				std::cout << indent << "SIGHT WARDS BOUGHT: " << data.sightWardsBought << std::endl;
				std::cout << indent << "SPELL 1 CAST: " << data.spell1Cast << std::endl;
				std::cout << indent << "SPELL 2 CAST: " << data.spell2Cast << std::endl;
				std::cout << indent << "SPELL 3 CAST: " << data.spell3Cast << std::endl;
				std::cout << indent << "SPELL 4 CAST: " << data.spell4Cast << std::endl;
				std::cout << indent << "SUMMON SPELL 1 CAST: " << data.summonSpell1Cast << std::endl;
				std::cout << indent << "SUMMON SPELL 2 CAST: " << data.summonSpell2Cast << std::endl;
				std::cout << indent << "SUPER MONSTER KILLED: " << data.superMonsterKilled << std::endl;
				std::cout << indent << "TEAM: " << data.team << std::endl;
				std::cout << indent << "TEAM OBJECTIVE: " << data.teamObjective << std::endl;
				std::cout << indent << "TIME PLAYED: " << data.timePlayed << std::endl;
				std::cout << indent << "TOTAL DAMAGE DEALT: " << data.totalDamageDealt << std::endl;
				std::cout << indent << "TOTAL DAMAGE DEALT TO CHAMPIONS: " << data.totalDamageDealtToChampions << std::endl;
				std::cout << indent << "TOTAL DAMAGE TAKEN: " << data.totalDamageTaken << std::endl;
				std::cout << indent << "TOTAL HEAL: " << data.totalHeal << std::endl;
				std::cout << indent << "TOTAL PLAYER SCORE: " << data.totalPlayerScore << std::endl;
				std::cout << indent << "TOTAL SCORE RANK: " << data.totalScoreRank << std::endl;
				std::cout << indent << "TOTAL TIME CROWD CONTROL DEALT: " << data.totalTimeCrowdControlDealt << std::endl;
				std::cout << indent << "TOTAL UNITS HEALED: " << data.totalUnitsHealed << std::endl;
				std::cout << indent << "TRIPLE KILLS: " << data.tripleKills << std::endl;
				std::cout << indent << "TRUE DAMAGE DEALT PLAYER: " << data.trueDamageDealtPlayer << std::endl;
				std::cout << indent << "TRUE DAMAGE DEALT TO CHAMPIONS: " << data.trueDamageDealtToChampions << std::endl;
				std::cout << indent << "TRUE DAMAGE TAKEN: " << data.trueDamageTaken << std::endl;
				std::cout << indent << "TURRETS KILLED: " << data.turretsKilled << std::endl;
				std::cout << indent << "UNREAL KILLS: " << data.unrealKills << std::endl;
				std::cout << indent << "VICTORY POINTS TOTAL: " << data.victoryPointTotal << std::endl;
				std::cout << indent << "VISION WARDS BOUGHT: " << data.visionWardsBought << std::endl;
				std::cout << indent << "WARD KILLED: " << data.wardKilled << std::endl;
				std::cout << indent << "WARD PLACED: " << data.wardPlaced << std::endl;
				std::cout << indent << "WIN: " << data.win << std::endl;
			}
		}

		void printRealm(const DTOField<Realm>& dto, std::string indent)
		{
			std::cout << indent << "REALM:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const Realm& data = dto.data();
				std::cout << indent << "CDN: " << data.cdn << std::endl;
				std::cout << indent << "CSS: " << data.css << std::endl;
				std::cout << indent << "DD: " << data.dd << std::endl;
				std::cout << indent << "L: " << data.l << std::endl;
				std::cout << indent << "LG: " << data.lg << std::endl;
				printDTOMap("N: ", data.n);
				std::cout << indent << "PROFILE ICON MAX: " << data.profileiconmax << std::endl;
				std::cout << indent << "STORE: " << data.store << std::endl;
				std::cout << indent << "V: " << data.v << std::endl;
			}
		}

		void printRecentGames(const DTOField<RecentGames>& dto, std::string indent)
		{
			std::cout << indent << "RECENT GAMES:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const RecentGames& data = dto.data();
				if(data.games.isValid())
				{
					std::cout << indent << "GAMES:" << std::endl;
					for(const Game& g : data.games.data())
					{
						printGame(g, indent + INDENT);
					}
				}
				std::cout << indent << "SUMMONER ID: " << data.summonerId << std::endl;
			}
		}

		void printRecommended(const DTOField<Recommended>& dto, std::string indent)
		{
			std::cout << indent << "RECOMMENDED:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const Recommended& data = dto.data();
				if(data.blocks.isValid())
				{
					std::cout << indent << "BLOCKS:" << std::endl;
					for(const Block& b : data.blocks.data())
					{
						printBlock(b, indent + INDENT);
					}
				}
				std::cout << indent << "CHAMPION: " << data.champion << std::endl;
				std::cout << indent << "MAP: " << data.map << std::endl;
				std::cout << indent << "MODE: " << data.mode << std::endl;
				std::cout << indent << "PRIORITY: " << data.priority << std::endl;
				std::cout << indent << "TITLE: " << data.title << std::endl;
				std::cout << indent << "TYPE: " << data.type << std::endl;
			}
		}

		void printRoster(const DTOField<Roster>& dto, std::string indent)
		{
			std::cout << indent << "ROSTER:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const Roster& data = dto.data();
				if(data.memberList.isValid())
				{
					std::cout << indent << "MEMBER LIST:" << std::endl;
					for(const TeamMemberInfo& i : data.memberList.data())
					{
						printTeamMemberInfo(i, indent + INDENT);
					}
				}
				std::cout << indent << "OWNER ID: " << data.ownerId << std::endl;
			}
		}

		void printRune(const DTOField<Rune>& dto, std::string indent)
		{
			std::cout << indent << "RUNE:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const Rune& data = dto.data();
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
				printDTOVector<std::string>(indent + "INTO: ", data.into);
				printDTOMap(indent + "MAPS: ", data.maps);
				std::cout << indent << "NAME: " << data.name << std::endl;
				std::cout << indent << "PLAIN TEXT: " << data.plaintext << std::endl;
				std::cout << indent << "REQUIRED CHAMPION: " << data.requiredChampion << std::endl;
				printMetaData(data.rune, indent);
				std::cout << indent << "SPECIAL RECIPE: " << data.specialRecipe << std::endl;
				std::cout << indent << "STACKS: " << data.stacks << std::endl;
				printBasicDataStats(data.stats, indent);
				printDTOVector<std::string>(indent + "TAGS: ", data.tags);
			}
		}

		void printRuneList(const DTOField<RuneList>& dto, std::string indent)
		{
			std::cout << indent << "RUNE LIST:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const RuneList& data = dto.data();
				printBasicData(data.basic, indent);
				if(data.data.isValid())
				{
					std::cout << indent << "DATA:" << std::endl;
					for(auto it = data.data.data().begin(); it != data.data.data().end(); ++it)
					{
						std::cout << indent + INDENT << "\"" << it->first << "\"->" << std::endl;
						printRune(it->second, indent + INDENT);
					}
				}
				std::cout << indent << "TYPE: " << data.type << std::endl;
				std::cout << indent << "VERSION: " << data.version << std::endl;
			}
		}

		void printRunePage(const DTOField<RunePage>& dto, std::string indent)
		{
			std::cout << indent << "RUNE PAGE:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const RunePage& data = dto.data();
				std::cout << indent << "CURRENT: " << data.current << std::endl;
				std::cout << indent << "ID: " << data.id << std::endl;
				std::cout << indent << "NAME: " << data.name << std::endl;
				if(data.slots.isValid())
				{
					std::cout << indent << "SLOTS:" << std::endl;
					for(const RuneSlot& s : data.slots.data())
					{
						printRuneSlot(s, indent + INDENT);
					}
				}
			}
		}

		void printRunePages(const DTOField<RunePages>& dto, std::string indent)
		{
			std::cout << indent << "RUNE PAGES:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const RunePages& data = dto.data();
				if(data.pages.isValid())
				{
					std::cout << indent << "PAGES:" << std::endl;
					for(const RunePage& p : data.pages.data())
					{
						printRunePage(p, indent + INDENT);
					}
				}
				std::cout << indent << "SUMMONER ID: " << data.summonerId << std::endl;
			}
		}

		void printRuneSlot(const DTOField<RuneSlot>& dto, std::string indent)
		{
			std::cout << indent << "RUNE SLOT:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const RuneSlot& data = dto.data();
				printRuneSlotted(data.rune, indent);
				std::cout << indent << "RUNE SLOT ID: " << data.runeSlotId << std::endl;
			}
		}

		void printRuneSlotted(const DTOField<RuneSlotted>& dto, std::string indent)
		{
			std::cout << indent << "RUNE SLOTTED:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const RuneSlotted& data = dto.data();
				std::cout << indent << "DESCRIPTION: " << data.description << std::endl;
				std::cout << indent << "ID: " << data.id << std::endl;
				std::cout << indent << "NAME: " << data.name << std::endl;
				std::cout << indent << "TIER: " << data.tier << std::endl;
			}
		}

		void printSkin(const DTOField<Skin>& dto, std::string indent)
		{
			std::cout << indent << "SKIN:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const Skin& data = dto.data();
				std::cout << indent << "ID: " << data.id << std::endl;
				std::cout << indent << "NAME: " << data.name << std::endl;
				std::cout << indent << "NUM: " << data.num << std::endl;
			}
		}

		void printSpellVars(const DTOField<SpellVars>& dto, std::string indent)
		{
			std::cout << indent << "SPELL VARS:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const SpellVars& data = dto.data();
				std::cout << indent << "LINK: " << data.link << std::endl;
				std::cout << indent << "COEFF: " << data.coeff << std::endl;
				std::cout << indent << "KEY: " << data.key << std::endl;
			}
		}

		void printStats(const DTOField<Stats>& dto, std::string indent)
		{
			std::cout << indent << "STATS:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const Stats& data = dto.data();
				std::cout << indent << "ARMOR: " << data.armor << std::endl;
				std::cout << indent << "ARMOR PER LEVEL: " << data.armorperlevel << std::endl;
				std::cout << indent << "ATTACK DAMAGE: " << data.attackdamage << std::endl;
				std::cout << indent << "ATTACK DAMAGE PER LEVEL: " << data.attackdamageperlevel << std::endl;
				std::cout << indent << "ATTACK RANGE: " << data.attackrange << std::endl;
				std::cout << indent << "ATTACK SPEED OFFSET: " << data.attackspeedoffset << std::endl;
				std::cout << indent << "ATTACK SPEED PER LEVEL: " << data.attackspeedperlevel << std::endl;
				std::cout << indent << "CRIT: " << data.crit << std::endl;
				std::cout << indent << "CRIT PER LEVEL: " << data.critperlevel << std::endl;
				std::cout << indent << "HP: " << data.hp << std::endl;
				std::cout << indent << "HP PER LEVEL: " << data.hpperlevel << std::endl;
				std::cout << indent << "HP REGEN: " << data.hpregen << std::endl;
				std::cout << indent << "HP REGEN PER LEVEL: " << data.hpregenperlevel << std::endl;
				std::cout << indent << "MOVE SPEED: " << data.movespeed << std::endl;
				std::cout << indent << "MP: " << data.mp << std::endl;
				std::cout << indent << "MP PER LEVEL: " << data.mpperlevel << std::endl;
				std::cout << indent << "MP REGEN: " << data.mpregen << std::endl;
				std::cout << indent << "MP REGEN PER LEVEL: " << data.mpregenperlevel << std::endl;
				std::cout << indent << "SPELL BLOCK: " << data.spellblock << std::endl;
				std::cout << indent << "SPELL BLOCK PER LEVEL: " << data.spellblockperlevel << std::endl;
			}
		}

		void printSummoner(const DTOField<Summoner>& dto, std::string indent)
		{
			std::cout << indent << "SUMMONER:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const Summoner& data = dto.data();
				std::cout << indent << "ID: " << data.id << std::endl;
				std::cout << indent << "NAME: " << data.name << std::endl;
				std::cout << indent << "PROFILE ICON ID: " << data.profileIconId << std::endl;
				std::cout << indent << "REVISION DATE: " << data.revisionDate << std::endl;
				std::cout << indent << "SUMMONER LEVEL: " << data.summonerLevel << std::endl;
			}
		}

		void printSummonerSpell(const DTOField<SummonerSpell>& dto, std::string indent)
		{
			std::cout << indent << "SUMMONER SPELL:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const SummonerSpell& data = dto.data();
				printDTOVector<int>("COOLDOWN: ", data.cooldown);
				std::cout << indent << "COOLDOWN BURN: " << data.cooldownBurn << std::endl;
				printDTOVector<int>("COST: ", data.cost);
				std::cout << indent << "COST BURN: " << data.costBurn << std::endl;
				std::cout << indent << "COST TYPE: " << data.costType << std::endl;
				std::cout << indent << "DESCRIPTION: " << data.description << std::endl;
				if(data.effect.isValid())
				{
					std::cout << indent << "EFFECT:" << std::endl;
					std::cout << indent << "[" << std::endl;
					for(unsigned i = 0; i < data.effect.data().size(); i++)
					{
						printDTOVector<int>(indent + INDENT, data.effect.data()[i]);
					}
					std::cout << indent << "]" << std::endl;
				}
				printDTOVector<std::string>("EFFECT BURN: ", data.effectBurn);
				std::cout << indent << "ID: " << data.id << std::endl;
				printImage(data.image, indent);
				std::cout << indent << "KEY: " << data.key << std::endl;
				printLevelTip(data.leveltip, indent);
				std::cout << indent << "MAX RANK: " << data.maxrank << std::endl;
				printDTOVector<std::string>(indent + "MODES: ", data.modes);
				std::cout << indent << "NAME: " << data.name << std::endl;
				printDTOVector<int>(indent + "RANGE: ", data.range);
				std::cout << indent << "RANGE BURN: " << data.rangeBurn << std::endl;
				std::cout << indent << "RESOURCE: " << data.resource << std::endl;
				std::cout << indent << "SUMMONER LEVEL: " << data.summonerLevel << std::endl;
				std::cout << indent << "TOOL TIP: " << data.tooltip << std::endl;
				if(data.vars.isValid())
				{
					std::cout << indent << "VARS:" << std::endl;
					for(const SpellVars& v : data.vars.data())
					{
						printSpellVars(v, indent + INDENT);
					}
				}
			}
		}

		void printSummonerSpellList(const DTOField<SummonerSpellList>& dto, std::string indent)
		{
			std::cout << indent << "SUMMONER SPELL LIST:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const SummonerSpellList& data = dto.data();
				if(data.data.isValid())
				{
					std::cout << indent << "DATA:" << std::endl;
					for(auto it = data.data.data().begin(); it != data.data.data().end(); ++it)
					{
						std::cout << indent + INDENT << "\"" << it->first << "\"->" << std::endl;
						printSummonerSpell(it->second, indent + INDENT);
					}
				}
				std::cout << indent << "TYPE: " << data.type << std::endl;
				std::cout << indent << "VERSION: " << data.version << std::endl;
			}
		}

		void printTalent(const DTOField<Talent>& dto, std::string indent)
		{
			std::cout << indent << "TALENT:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const Talent& data = dto.data();
				std::cout << indent << "ID: " << data.id << std::endl;
				std::cout << indent << "NAME: " << data.name << std::endl;
				std::cout << indent << "RANK: " << data.rank << std::endl;
			}
		}

		void printTeam(const DTOField<Team>& dto, std::string indent)
		{
			std::cout << indent << "TEAM:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const Team& data = dto.data();
				std::cout << indent << "CREATE DATE: " << data.createDate << std::endl;
				std::cout << indent << "FULL ID: " << data.fullId << std::endl;
				std::cout << indent << "LAST GAME DATE: " << data.lastGameDate << std::endl;
				std::cout << indent << "LAST JOIN DATE: " << data.lastJoinDate << std::endl;
				std::cout << indent << "LAST JOINED RANKED TEAM QUEUE DATE: " << data.lastJoinedRankedTeamQueueDate << std::endl;
				if(data.matchHistory.isValid())
				{
					std::cout << indent << "CHAMPIONS:" << std::endl;
					for(const MatchHistorySummary& s : data.matchHistory.data())
					{
						printMatchHistorySummary(s, indent + INDENT);
					}
				}
				printMessageOfDay(data.messageOfDay, indent);
				std::cout << indent << "MODIFY DATE: " << data.modifyDate << std::endl;
				std::cout << indent << "NAME: " << data.name << std::endl;
				printRoster(data.roster, indent);
				std::cout << indent << "SECOND LAST JOIN DATE: " << data.secondLastJoinDate << std::endl;
				std::cout << indent << "STATUS: " << data.status << std::endl;
				std::cout << indent << "TAG: " << data.tag << std::endl;
				printTeamStatSummary(data.teamStatSummary, indent);
				std::cout << indent << "THIRD LAST JOIN DATE: " << data.thirdLastJoinDate << std::endl;
			}
		}

		void printTeamMemberInfo(const DTOField<TeamMemberInfo>& dto, std::string indent)
		{
			std::cout << indent << "TEAM MEMBER INFO:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const TeamMemberInfo& data = dto.data();
				std::cout << indent << "INVITE DATE: " << data.inviteDate << std::endl;
				std::cout << indent << "JOIN DATE: " << data.joinDate << std::endl;
				std::cout << indent << "PLAYER ID: " << data.playerId << std::endl;
				std::cout << indent << "STATUS: " << data.status << std::endl;
			}
		}

		void printTeamStatDetail(const DTOField<TeamStatDetail>& dto, std::string indent)
		{
			std::cout << indent << "TEAM STAT DETAIL:" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const TeamStatDetail& data = dto.data();
				std::cout << indent << "AVERAGE GAMES PLAYED: " << data.averageGamesPlayed << std::endl;
				std::cout << indent << "FULL ID: " << data.fullId << std::endl;
				std::cout << indent << "LOSSES: " << data.losses << std::endl;
				std::cout << indent << "TEAM STAT TYPE: " << data.teamStatType << std::endl;
				std::cout << indent << "WINS: " << data.wins << std::endl;
			}
		}

		void printTeamStatSummary(const DTOField<TeamStatSummary>& dto, std::string indent)
		{
			std::cout << indent << "TEAM STAT SUMMARY" << std::endl;
			indent += INDENT;
			if(dto.isValid())
			{
				const TeamStatSummary& data = dto.data();
				std::cout << indent << "FULL ID: " << data.fullId << std::endl;
				if(data.teamStatDetails.isValid())
				{
					std::cout << indent << "TEAM STAT DETAILS:" << std::endl;
					for(const TeamStatDetail& s : data.teamStatDetails.data())
					{
						printTeamStatDetail(s, indent + INDENT);
					}
				}
			}
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

		void printDTOMap(std::string label, const DTOField<std::map<std::string, std::string>>& mapField)
		{
			if(mapField.isValid())
			{
				const std::map<std::string, std::string>& map = mapField.data();
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