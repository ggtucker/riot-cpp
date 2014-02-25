#include <RiotCPP/Parser/RiotParser.hpp>
#include <iostream>
namespace Riot
{
	namespace RiotParser
	{
		AggregatedStats parseAggregatedStats(const Value& json)
		{
			AggregatedStats aggregatedStats = {};
			
			if(json.IsObject())
			{
				assignValue(aggregatedStats.averageAssists, json["averageAssists"]);
				assignValue(aggregatedStats.averageChampionsKilled, json["averageChampionsKilled"]);
				assignValue(aggregatedStats.averageCombatPlayerScore, json["averageCombatPlayerScore"]);
				assignValue(aggregatedStats.averageNodeCapture, json["averageNodeCapture"]);
				assignValue(aggregatedStats.averageNodeCaptureAssist, json["averageNodeCaptureAssist"]);
				assignValue(aggregatedStats.averageNodeNeutralize, json["averageNodeNeutralize"]);
				assignValue(aggregatedStats.averageNodeNeutralizeAssist, json["averageNodeNeutralizeAssist"]);
				assignValue(aggregatedStats.averageNumDeaths, json["averageNumDeaths"]);
				assignValue(aggregatedStats.averageObjectivePlayerScore, json["averageObjectivePlayerScore"]);
				assignValue(aggregatedStats.averageTeamObjective, json["averageTeamObjective"]);
				assignValue(aggregatedStats.averageTotalPlayerScore, json["averageTotalPlayerScore"]);
				assignValue(aggregatedStats.botGamesPlayed, json["botGamesPlayed"]);
				assignValue(aggregatedStats.killingSpree, json["killingSpree"]);
				assignValue(aggregatedStats.maxAssists, json["maxAssists"]);
				assignValue(aggregatedStats.maxChampionsKilled, json["maxChampionsKilled"]);
				assignValue(aggregatedStats.maxCombatPlayerScore, json["maxCombatPlayerScore"]);
				assignValue(aggregatedStats.maxLargestCriticalStrike, json["maxLargestCriticalStrike"]);
				assignValue(aggregatedStats.maxLargestKillingSpree, json["maxLargestKillingSpree"]);
				assignValue(aggregatedStats.maxNodeCapture, json["maxNodeCapture"]);
				assignValue(aggregatedStats.maxNodeCaptureAssist, json["maxNodeCaptureAssist"]);
				assignValue(aggregatedStats.maxNodeNeutralize, json["maxNodeNeutralize"]);
				assignValue(aggregatedStats.maxNodeNeutralizeAssist, json["maxNodeNeutralizeAssist"]);
				assignValue(aggregatedStats.maxNumDeaths, json["maxNumDeaths"]);
				assignValue(aggregatedStats.maxObjectivePlayerScore, json["maxObjectivePlayerScore"]);
				assignValue(aggregatedStats.maxTeamObjective, json["maxTeamObjective"]);
				assignValue(aggregatedStats.maxTimePlayed, json["maxTimePlayed"]);
				assignValue(aggregatedStats.maxTimeSpentLiving, json["maxTimeSpentLiving"]);
				assignValue(aggregatedStats.maxTotalPlayerScore, json["maxTotalPlayerScore"]);
				assignValue(aggregatedStats.mostChampionKillsPerSession, json["mostChampionKillsPerSession"]);
				assignValue(aggregatedStats.mostSpellsCast, json["mostSpellsCast"]);
				assignValue(aggregatedStats.normalGamesPlayed, json["normalGamesPlayed"]);
				assignValue(aggregatedStats.rankedPremadeGamesPlayed, json["rankedPremadeGamesPlayed"]);
				assignValue(aggregatedStats.rankedSoloGamesPlayed, json["rankedSoloGamesPlayed"]);
				assignValue(aggregatedStats.totalAssists, json["totalAssists"]);
				assignValue(aggregatedStats.totalChampionKills, json["totalChampionKills"]);
				assignValue(aggregatedStats.totalDamageDealt, json["totalDamageDealt"]);
				assignValue(aggregatedStats.totalDamageTaken, json["totalDamageTaken"]);
				assignValue(aggregatedStats.totalDeathsPerSession, json["totalDeathsPerSession"]);
				assignValue(aggregatedStats.totalDoubleKills, json["totalDoubleKills"]);
				assignValue(aggregatedStats.totalFirstBlood, json["totalFirstBlood"]);
				assignValue(aggregatedStats.totalGoldEarned, json["totalGoldEarned"]);
				assignValue(aggregatedStats.totalHeal, json["totalHeal"]);
				assignValue(aggregatedStats.totalMagicDamageDealt, json["totalMagicDamageDealt"]);
				assignValue(aggregatedStats.totalMinionKills, json["totalMinionKills"]);
				assignValue(aggregatedStats.totalNeutralMinionsKilled, json["totalNeutralMinionsKilled"]);
				assignValue(aggregatedStats.totalNodeCapture, json["totalNodeCapture"]);
				assignValue(aggregatedStats.totalNodeNeutralize, json["totalNodeNeutralize"]);
				assignValue(aggregatedStats.totalPentaKills, json["totalPentaKills"]);
				assignValue(aggregatedStats.totalPhysicalDamageDealt, json["totalPhysicalDamageDealt"]);
				assignValue(aggregatedStats.totalQuadraKills, json["totalQuadraKills"]);
				assignValue(aggregatedStats.totalSessionsLost, json["totalSessionsLost"]);
				assignValue(aggregatedStats.totalSessionsPlayed, json["totalSessionsPlayed"]);
				assignValue(aggregatedStats.totalSessionsWon, json["totalSessionsWon"]);
				assignValue(aggregatedStats.totalTripleKills, json["totalTripleKills"]);
				assignValue(aggregatedStats.totalTurretsKilled, json["totalTurretsKilled"]);
				assignValue(aggregatedStats.totalUnrealKills, json["totalUnrealKills"]);
			}

			return aggregatedStats;
		}

		BasicData parseBasicData(const Value& json)
		{
			BasicData basicData = {};

			if(json.IsObject())
			{
				assignValue(basicData.colloq, json["colloq"]);
				assignValue(basicData.consumeOnFull, json["consumeOnFull"]);
				assignValue(basicData.consumed, json["consumed"]);
				assignValue(basicData.depth, json["depth"]);
				assignValue(basicData.description, json["description"]);
				basicData.from = parseStringVector(json["from"]);
				basicData.gold = parseGold(json["gold"]);
				assignValue(basicData.group, json["group"]);
				assignValue(basicData.hideFromAll, json["hideFromAll"]);
				basicData.image = parseImage(json["image"]);
				assignValue(basicData.inStore, json["inStore"]);
				basicData.into = parseStringVector(json["into"]);
				basicData.maps = parseBoolByStringMap(json["maps"]);
				assignValue(basicData.name, json["name"]);
				assignValue(basicData.plaintext, json["plaintext"]);
				assignValue(basicData.requiredChampion, json["requiredChampion"]);
				basicData.rune = parseMetaData(json["rune"]);
				assignValue(basicData.specialRecipe, json["specialRecipe"]);
				assignValue(basicData.stacks, json["stacks"]);
				basicData.stats = parseBasicDataStats(json["stats"]);
				basicData.tags = parseStringVector(json["tags"]);
			}

			return basicData;
		}

		BasicDataStats parseBasicDataStats(const Value& json)
		{
			BasicDataStats basicDataStats = {};

			if(json.IsObject())
			{
				assignValue(basicDataStats.FlatArmorMod, json["FlatArmorMod"]);
				assignValue(basicDataStats.FlatAttackSpeedMod, json["FlatAttackSpeedMod"]);
				assignValue(basicDataStats.FlatBlockMod, json["FlatBlockMod"]);
				assignValue(basicDataStats.FlatCritChanceMod, json["FlatCritChanceMod"]);
				assignValue(basicDataStats.FlatCritDamageMod, json["FlatCritDamageMod"]);
				assignValue(basicDataStats.FlatEXPBonus, json["FlatEXPBonus"]);
				assignValue(basicDataStats.FlapEnergyPoolMod, json["FlapEnergyPoolMod"]);
				assignValue(basicDataStats.FlatEnergyRegenMod, json["FlatEnergyRegenMod"]);
				assignValue(basicDataStats.FlatHPPoolMod, json["FlatHPPoolMod"]);
				assignValue(basicDataStats.FlatHPRegenMod, json["FlatHPRegenMod"]);
				assignValue(basicDataStats.FlatMPPoolMod, json["FlatMPPoolMod"]);
				assignValue(basicDataStats.FlatMPRegenMod, json["FlatMPRegenMod"]);
				assignValue(basicDataStats.FlatMagicDamageMod, json["FlatMagicDamageMod"]);
				assignValue(basicDataStats.FlatMovementSpeedMod, json["FlatMovementSpeedMod"]);
				assignValue(basicDataStats.FlatPhysicalDamageMod, json["FlatPhysicalDamageMod"]);
				assignValue(basicDataStats.FlatSpellBlockMod, json["FlatSpellBlockMod"]);
				assignValue(basicDataStats.PercentArmorMod, json["PercentArmorMod"]);
				assignValue(basicDataStats.PercentAttackSpeedMod, json["PercentAttackSpeedMod"]);
				assignValue(basicDataStats.PercentBlockMod, json["PercentBlockMod"]);
				assignValue(basicDataStats.PercentCritChanceMod, json["PercentCritChanceMod"]);
				assignValue(basicDataStats.PercentCritDamageMod, json["PercentCritDamageMod"]);
				assignValue(basicDataStats.PercentDodgeMod, json["PercentDodgeMod"]);
				assignValue(basicDataStats.PercentEXPBonus, json["PercentEXPBonus"]);
				assignValue(basicDataStats.PercentHPPoolMod, json["PercentHPPoolMod"]);
				assignValue(basicDataStats.PercentHPRegenMod, json["PercentHPRegenMod"]);
				assignValue(basicDataStats.PercentLifeStealMod, json["PercentLifeStealMod"]);
				assignValue(basicDataStats.PercentMPPoolMod, json["PercentMPPoolMod"]);
				assignValue(basicDataStats.PercentMPRegenMod, json["PercentMPRegenMod"]);
				assignValue(basicDataStats.PercentMagicDamageMod, json["PercentMagicDamageMod"]);
				assignValue(basicDataStats.PercentMovementSpeedMod, json["PercentMovementSpeedMod"]);
				assignValue(basicDataStats.PercentPhysicalDamageMod, json["PercentPhysicalDamageMod"]);
				assignValue(basicDataStats.PercentSpellBlockMod, json["PercentSpellBlockMod"]);
				assignValue(basicDataStats.PercentSpellVampMod, json["PercentSpellVampMod"]);
				assignValue(basicDataStats.rFlatArmorModPerLevel, json["rFlatArmorModPerLevel"]);
				assignValue(basicDataStats.rFlatArmorPenetrationMod, json["rFlatArmorPenetrationMod"]);
				assignValue(basicDataStats.rFlatArmorPenetrationModPerLevel, json["rFlatArmorPenetrationModPerLevel"]);
				assignValue(basicDataStats.rFlatCritChanceModPerLevel, json["rFlatCritChanceModPerLevel"]);
				assignValue(basicDataStats.rFlatCritDamageModPerLevel, json["rFlatCritDamageModPerLevel"]);
				assignValue(basicDataStats.rFlatDodgeMod, json["rFlatDodgeMod"]);
				assignValue(basicDataStats.rFlatDodgeModPerLevel, json["rFlatDodgeModPerLevel"]);
				assignValue(basicDataStats.rFlatEnergyModPerLevel, json["rFlatEnergyModPerLevel"]);
				assignValue(basicDataStats.rFlatEnergyRegenModPerLevel, json["rFlatEnergyRegenModPerLevel"]);
				assignValue(basicDataStats.rFlatGoldPer10Mod, json["rFlatGoldPer10Mod"]);
				assignValue(basicDataStats.rFlatHPModPerLevel, json["rFlatHPModPerLevel"]);
				assignValue(basicDataStats.rFlatHPRegenModPerLevel, json["rFlatHPRegenModPerLevel"]);
				assignValue(basicDataStats.rFlatMPModPerLevel, json["rFlatMPModPerLevel"]);
				assignValue(basicDataStats.rFlatMPRegenModPerLevel, json["rFlatMPRegenModPerLevel"]);
				assignValue(basicDataStats.rFlatMagicDamageModPerLevel, json["rFlatMagicDamageModPerLevel"]);
				assignValue(basicDataStats.rFlatMagicPenetrationMod, json["rFlatMagicPenetrationMod"]);
				assignValue(basicDataStats.rFlatMagicPenetrationModPerLevel, json["rFlatMagicPenetrationModPerLevel"]);
				assignValue(basicDataStats.rFlatMovementSpeedModPerLevel, json["rFlatMovementSpeedModPerLevel"]);
				assignValue(basicDataStats.rFlatPhysicalDamageModPerLevel, json["rFlatPhysicalDamageModPerLevel"]);
				assignValue(basicDataStats.rFlatSpellBlockModPerLevel, json["rFlatSpellBlockModPerLevel"]);
				assignValue(basicDataStats.rFlatTimeDeadMod, json["rFlatTimeDeadMod"]);
				assignValue(basicDataStats.rFlatTimeDeadModPerLevel, json["rFlatTimeDeadModPerLevel"]);
				assignValue(basicDataStats.rPercentArmorPenetrationMod, json["rPercentArmorPenetrationMod"]);
				assignValue(basicDataStats.rPercentArmorPenetrationModPerLevel, json["rPercentArmorPenetrationModPerLevel"]);
				assignValue(basicDataStats.rPercentAttackSpeedModPerLevel, json["rPercentAttackSpeedModPerLevel"]);
				assignValue(basicDataStats.rPercentCooldownMod, json["rPercentCooldownMod"]);
				assignValue(basicDataStats.rPercentCooldownModPerLevel, json["rPercentCooldownModPerLevel"]);
				assignValue(basicDataStats.rPercentMagicPenetrationMod, json["rPercentMagicPenetrationMod"]);
				assignValue(basicDataStats.rPercentMagicPenetrationModPerLevel, json["rPercentMagicPenetrationModPerLevel"]);
				assignValue(basicDataStats.rPercentMovementSpeedModPerLevel, json["rPercentMovementSpeedModPerLevel"]);
				assignValue(basicDataStats.rPercentTimeDeadMod, json["rPercentTimeDeadMod"]);
				assignValue(basicDataStats.rPercentTimeDeadModPerLevel, json["rPercentTimeDeadModPerLevel"]);
			}

			return basicDataStats;
		}

		Block parseBlock(const Value& json)
		{
			Block block = {};

			if(json.IsObject())
			{
				assignValue(block.type, json["type"]);

				if(json.HasMember("items"))
				{
					std::vector<BlockItem> items;
					const Value& blockItemListDto = json["items"];
					for (SizeType i = 0; i < blockItemListDto.Size(); i++)
					{
						items.push_back(parseBlockItem(blockItemListDto[i]));
					}
					block.items = items;
				}
			}

			return block;
		}

		BlockItem parseBlockItem(const Value& json)
		{
			BlockItem blockItem = {};

			if(json.IsObject())
			{
				assignValue(blockItem.count, json["count"]);
				assignValue(blockItem.id, json["id"]);
			}

			return blockItem;
		}

		Champion parseChampion(const Value& json)
		{
			Champion champion = {};

			if(json.IsObject())
			{
				assignValue(champion.active, json["active"]);
				assignValue(champion.attackRank, json["attackRank"]);
				assignValue(champion.botEnabled, json["botEnabled"]);
				assignValue(champion.botMmEnabled, json["botMmEnabled"]);
				assignValue(champion.defenseRank, json["defenseRank"]);
				assignValue(champion.difficultyRank, json["difficultyRank"]);
				assignValue(champion.freeToPlay, json["freeToPlay"]);
				assignValue(champion.id, json["id"]);
				assignValue(champion.magicRank, json["magicRank"]);
				assignValue(champion.name, json["name"]);
				assignValue(champion.rankedPlayEnabled, json["rankedPlayEnabled"]);
			}

			return champion;
		}

		ChampionData parseChampionData(const Value& json)
		{
			ChampionData championData = {};

			if(json.IsObject())
			{
				championData.allytips = parseStringVector(json["allytips"]);
				assignValue(championData.blurb, json["blurb"]);
				championData.enemytips = parseStringVector(json["enemytips"]);
				assignValue(championData.id, json["id"]);
				championData.image = parseImage(json["image"]);
				championData.info = parseInfo(json["info"]);
				assignValue(championData.key, json["key"]);
				assignValue(championData.lore, json["lore"]);
				assignValue(championData.name, json["name"]);
				assignValue(championData.partype, json["partype"]);
				championData.passive = parsePassive(json["passive"]);
				championData.stats = parseStats(json["stats"]);
				championData.tags = parseStringVector(json["tags"]);
				assignValue(championData.title, json["title"]);

				if(json.HasMember("recommended"))
				{
					std::vector<Recommended> recommended;
					const Value& recommendedListDto = json["recommended"];
					for (SizeType i = 0; i < recommendedListDto.Size(); i++)
					{
						recommended.push_back(parseRecommended(recommendedListDto[i]));
					}
					championData.recommended = recommended;
				}
				if(json.HasMember("skins"))
				{
					std::vector<Skin> skins;
					const Value& skinListDto = json["skins"];
					for (SizeType i = 0; i < skinListDto.Size(); i++)
					{
						skins.push_back(parseSkin(skinListDto[i]));
					}
					championData.skins = skins;
				}
				if(json.HasMember("spells"))
				{
					std::vector<ChampionSpell> spells;
					const Value& spellListDto = json["spells"];
					for (SizeType i = 0; i < spellListDto.Size(); i++)
					{
						spells.push_back(parseChampionSpell(spellListDto[i]));
					}
					championData.spells = spells;
				}
			}

			return championData;
		}

		ChampionDataList parseChampionDataList(const Value& json)
		{
			ChampionDataList championDataList = {};

			if(json.IsObject())
			{
				assignValue(championDataList.format, json["format"]);
				assignValue(championDataList.type, json["type"]);
				assignValue(championDataList.version, json["version"]);
				championDataList.keys = parseStringByStringMap(json["keys"]);

				if(json.HasMember("data"))
				{
					std::map<std::string, ChampionData> data;
					if(json["data"].IsObject())
					{
						for (rapidjson::Value::ConstMemberIterator itr = json["data"].MemberBegin(); itr != json["data"].MemberEnd(); ++itr)
						{
							data[itr->name.GetString()] = parseChampionData(itr->value);
						}
					}
					championDataList.data = data;
				}
			}

			return championDataList;
		}

		ChampionList parseChampionList(const Value& json)
		{
			ChampionList championList = {};

			if(json.HasMember("champions"))
			{
				std::vector<Champion> champions;
				const Value& championListDto = json["champions"];
				for (SizeType i = 0; i < championListDto.Size(); i++)
				{
					champions.push_back(parseChampion(championListDto[i]));
				}
				championList.champions = champions;
			}

			return championList;
		}

		ChampionSpell parseChampionSpell(const Value& json)
		{
			ChampionSpell championSpell = {};

			if(json.IsObject())
			{
				championSpell.cooldown = parseIntVector(json["cooldown"]);
				assignValue(championSpell.cooldownBurn, json["cooldownBurn"]);
				championSpell.cost = parseIntVector(json["cost"]);
				assignValue(championSpell.costBurn, json["costBurn"]);
				assignValue(championSpell.costType, json["costType"]);
				assignValue(championSpell.description, json["description"]);
				championSpell.effect = parse2DIntVector(json["effect"]);
				championSpell.effectBurn = parseStringVector(json["effectBurn"]);
				assignValue(championSpell.id, json["id"]);
				championSpell.image = parseImage(json["image"]);
				championSpell.leveltip = parseLevelTip(json["leveltip"]);
				assignValue(championSpell.maxrank, json["maxrank"]);
				assignValue(championSpell.name, json["name"]);
				championSpell.range = parseIntVector(json["range"]);
				assignValue(championSpell.rangeBurn, json["rangeBurn"]);
				assignValue(championSpell.resource, json["resource"]);
				assignValue(championSpell.tooltip, json["tooltip"]);

				if(json.HasMember("vars"))
				{
					std::vector<SpellVars> vars;
					const Value& varsListDto = json["vars"];
					for (SizeType i = 0; i < varsListDto.Size(); i++)
					{
						vars.push_back(parseSpellVars(varsListDto[i]));
					}
					championSpell.vars = vars;
				}
			}

			return championSpell;
		}

		ChampionStats parseChampionStats(const Value& json)
		{
			ChampionStats championStats = {};

			if(json.IsObject())
			{
				assignValue(championStats.id, json["id"]);
				assignValue(championStats.name, json["name"]);
				championStats.stats = parseAggregatedStats(json["stats"]);
			}

			return championStats;
		}

		Game parseGame(const Value& json)
		{
			Game game = {};

			if(json.IsObject())
			{
				assignValue(game.championId, json["championId"]);
				assignValue(game.createDate, json["createDate"]);
				assignValue(game.gameId, json["gameId"]);
				assignValue(game.gameMode, json["gameMode"]);
				assignValue(game.gameType, json["gameType"]);
				assignValue(game.invalid, json["invalid"]);
				assignValue(game.level, json["level"]);
				assignValue(game.mapId, json["mapId"]);
				assignValue(game.spell1, json["spell1"]);
				assignValue(game.spell2, json["spell2"]);
				game.stats = parseRawStats(json["stats"]);
				assignValue(game.subType, json["subType"]);
				assignValue(game.teamId, json["teamId"]);

				if(json.HasMember("fellowPlayers"))
				{
					std::vector<Player> fellowPlayers;
					const Value& playerListDto = json["fellowPlayers"];
					for (SizeType i = 0; i < playerListDto.Size(); i++)
					{
						fellowPlayers.push_back(parsePlayer(playerListDto[i]));
					}
					game.fellowPlayers = fellowPlayers;
				}
			}

			return game;
		}

		Gold parseGold(const Value& json)
		{
			Gold gold = {};

			if(json.IsObject())
			{
				assignValue(gold.base, json["base"]);
				assignValue(gold.purchasable, json["purchasable"]);
				assignValue(gold.sell, json["sell"]);
				assignValue(gold.total, json["total"]);
			}

			return gold;
		}

		Group parseGroup(const Value& json)
		{
			Group group = {};

			if(json.IsObject())
			{
				assignValue(group.MaxGroupOwnable, json["MaxGroupOwnable"]);
				assignValue(group.id, json["id"]);
			}

			return group;
		}

		Image parseImage(const Value& json)
		{
			Image image = {};

			if(json.IsObject())
			{
				assignValue(image.full, json["full"]);
				assignValue(image.group, json["group"]);
				assignValue(image.h, json["h"]);
				assignValue(image.sprite, json["sprite"]);
				assignValue(image.w, json["w"]);
				assignValue(image.x, json["x"]);
				assignValue(image.y, json["y"]);
			}

			return image;
		}

		Info parseInfo(const Value& json)
		{
			Info info = {};

			if(json.IsObject())
			{
				assignValue(info.attack, json["attack"]);
				assignValue(info.defense, json["defense"]);
				assignValue(info.difficulty, json["difficulty"]);
				assignValue(info.magic, json["magic"]);
			}

			return info;
		}

		Item parseItem(const Value& json)
		{
			Item item = {};

			if(json.IsObject())
			{
				assignValue(item.colloq, json["colloq"]);
				assignValue(item.consumeOnFull, json["consumeOnFull"]);
				assignValue(item.consumed, json["consumed"]);
				assignValue(item.depth, json["depth"]);
				assignValue(item.description, json["description"]);
				item.from = parseStringVector(json["from"]);
				item.gold = parseGold(json["gold"]);
				assignValue(item.group, json["group"]);
				assignValue(item.hideFromAll, json["hideFromAll"]);
				item.image = parseImage(json["image"]);
				assignValue(item.inStore, json["inStore"]);
				item.into = parseStringVector(json["into"]);
				item.maps = parseBoolByStringMap(json["maps"]);
				assignValue(item.name, json["name"]);
				assignValue(item.plaintext, json["plaintext"]);
				assignValue(item.requiredChampion, json["requiredChampion"]);
				item.rune = parseMetaData(json["rune"]);
				assignValue(item.specialRecipe, json["specialRecipe"]);
				assignValue(item.stacks, json["stacks"]);
				item.stats = parseBasicDataStats(json["stats"]);
				item.tags = parseStringVector(json["tags"]);
			}

			return item;
		}

		ItemList parseItemList(const Value& json)
		{
			ItemList itemList = {};

			if(json.IsObject())
			{
				itemList.basic = parseBasicData(json["basic"]);
				assignValue(itemList.type, json["type"]);
				assignValue(itemList.version, json["version"]);

				if(json.HasMember("data"))
				{
					std::map<std::string, Item> data;
					if(json["data"].IsObject())
					{
						for (rapidjson::Value::ConstMemberIterator itr = json["data"].MemberBegin(); itr != json["data"].MemberEnd(); ++itr)
						{
							data[itr->name.GetString()] = parseItem(itr->value);
						}
					}
					itemList.data = data;
				}
				if(json.HasMember("groups"))
				{
					std::vector<Group> groups;
					const Value& groupListDto = json["groups"];
					for (SizeType i = 0; i < groupListDto.Size(); i++)
					{
						groups.push_back(parseGroup(groupListDto[i]));
					}
					itemList.groups = groups;
				}
				if(json.HasMember("tree"))
				{
					std::vector<ItemTree> tree;
					const Value& itemTreeListDto = json["tree"];
					for (SizeType i = 0; i < itemTreeListDto.Size(); i++)
					{
						tree.push_back(parseItemTree(itemTreeListDto[i]));
					}
					itemList.tree = tree;
				}
			}

			return itemList;
		}

		ItemTree parseItemTree(const Value& json)
		{
			ItemTree itemTree = {};

			if(json.IsObject())
			{
				assignValue(itemTree.header, json["header"]);
				itemTree.tags = parseStringVector(json["tags"]);
			}

			return itemTree;
		}

		League parseLeague(const Value& json)
		{
			League league = {};

			if(json.IsObject())
			{
				assignValue(league.name, json["name"]);
				assignValue(league.participantId, json["participantId"]);
				assignValue(league.queue, json["queue"]);
				assignValue(league.tier, json["tier"]);

				if(json.HasMember("entries"))
				{
					std::vector<LeagueItem> entries;
					const Value& leagueItemListDto = json["entries"];
					for (SizeType i = 0; i < leagueItemListDto.Size(); i++)
					{
						entries.push_back(parseLeagueItem(leagueItemListDto[i]));
					}
					league.entries = entries;
				}
			}

			return league;
		}

		std::vector<League> parseLeagueList(const Value& json)
		{
			std::vector<League> leagueList;

			if(json.IsArray())
			{
				for (SizeType i = 0; i < json.Size(); i++)
				{
					leagueList.push_back(parseLeague(json[i]));
				}
			}

			return leagueList;
		}

		LeagueItem parseLeagueItem(const Value& json)
		{
			LeagueItem leagueItem = {};

			if(json.IsObject())
			{
				assignValue(leagueItem.isFreshBlood, json["isFreshBlood"]);
				assignValue(leagueItem.isHotStreak, json["isHotStreak"]);
				assignValue(leagueItem.isInactive, json["isInactive"]);
				assignValue(leagueItem.isVeteran, json["isVeteran"]);
				assignValue(leagueItem.lastPlayed, json["lastPlayed"]);
				assignValue(leagueItem.leagueName, json["leagueName"]);
				assignValue(leagueItem.leaguePoints, json["leaguePoints"]);
				leagueItem.miniSeries = parseMiniSeries(json["miniSeries"]);
				assignValue(leagueItem.playerOrTeamId, json["playerOrTeamId"]);
				assignValue(leagueItem.playerOrTeamName, json["playerOrTeamName"]);
				assignValue(leagueItem.queueType, json["queueType"]);
				assignValue(leagueItem.rank, json["rank"]);
				assignValue(leagueItem.tier, json["tier"]);
				assignValue(leagueItem.wins, json["wins"]);
			}

			return leagueItem;
		}

		std::vector<LeagueItem> parseLeagueItemList(const Value& json)
		{
			std::vector<LeagueItem> leagueItemList;

			if(json.IsArray())
			{
				for (SizeType i = 0; i < json.Size(); i++)
				{
					leagueItemList.push_back(parseLeagueItem(json[i]));
				}
			}

			return leagueItemList;
		}

		LevelTip parseLevelTip(const Value& json)
		{
			LevelTip levelTip = {};

			if(json.IsObject())
			{
				levelTip.effect = parseStringVector(json["effect"]);
				levelTip.label = parseStringVector(json["label"]);
			}

			return levelTip;
		}

		Mastery parseMastery(const Value& json)
		{
			Mastery mastery = {};
			
			if(json.IsObject())
			{
				mastery.description = parseStringVector(json["description"]);
				assignValue(mastery.id, json["id"]);
				mastery.image = parseImage(json["image"]);
				assignValue(mastery.name, json["name"]);
				assignValue(mastery.prereq, json["prereq"]);
				assignValue(mastery.ranks, json["ranks"]);
			}

			return mastery;
		}

		MasteryList parseMasteryList(const Value& json)
		{
			MasteryList masteryList = {};
			
			if(json.IsObject())
			{
				masteryList.tree = parseMasteryTree(json["tree"]);
				assignValue(masteryList.type, json["type"]);
				assignValue(masteryList.version, json["version"]);

				if(json.HasMember("data"))
				{
					std::map<std::string, Mastery> data;
					if(json["data"].IsObject())
					{
						for (rapidjson::Value::ConstMemberIterator itr = json["data"].MemberBegin(); itr != json["data"].MemberEnd(); ++itr)
						{
							data[itr->name.GetString()] = parseMastery(itr->value);
						}
					}
					masteryList.data = data;
				}
			}

			return masteryList;
		}

		MasteryPage parseMasteryPage(const Value& json)
		{
			MasteryPage masteryPage = {};
			
			if(json.IsObject())
			{
				assignValue(masteryPage.current, json["current"]);
				assignValue(masteryPage.id, json["id"]);
				assignValue(masteryPage.name, json["name"]);

				if(json.HasMember("talents"))
				{
					std::vector<Talent> talents;
					const Value& talentListDto = json["talents"];
					for (SizeType i = 0; i < talentListDto.Size(); i++)
					{
						talents.push_back(parseTalent(talentListDto[i]));
					}
					masteryPage.talents = talents;
				}
			}

			return masteryPage;
		}

		MasteryPages parseMasteryPages(const Value& json)
		{
			MasteryPages masteryPages = {};
			
			if(json.IsObject())
			{
				assignValue(masteryPages.summonerId, json["summonerId"]);

				if(json.HasMember("pages"))
				{
					std::vector<MasteryPage> pages;
					const Value& masteryPageListDto = json["pages"];
					for (SizeType i = 0; i < masteryPageListDto.Size(); i++)
					{
						pages.push_back(parseMasteryPage(masteryPageListDto[i]));
					}
					masteryPages.pages = pages;
				}
			}

			return masteryPages;
		}

		std::map<long long, MasteryPages> parseMasteryPagesById(const Value& json)
		{
			std::map<long long, MasteryPages> masteryPagesById;
			
			if(json.IsObject())
			{
				for (rapidjson::Value::ConstMemberIterator itr = json.MemberBegin(); itr != json.MemberEnd(); ++itr)
				{
					masteryPagesById[itr->name.GetInt64()] = parseMasteryPages(itr->value);
				}
			}

			return masteryPagesById;
		}

		MasteryTree parseMasteryTree(const Value& json)
		{
			MasteryTree masteryTree = {};
			
			if(json.IsObject())
			{
				if(json.HasMember("Defense"))
				{
					std::vector<MasteryTreeList> defenseTree;
					const Value& defenseTreeDto = json["Defense"];
					for (SizeType i = 0; i < defenseTreeDto.Size(); i++)
					{
						defenseTree.push_back(parseMasteryTreeList(defenseTreeDto[i]));
					}
					masteryTree.Defense = defenseTree;
				}
				if(json.HasMember("Offense"))
				{
					std::vector<MasteryTreeList> offenseTree;
					const Value& offenseTreeDto = json["Offense"];
					for (SizeType i = 0; i < offenseTreeDto.Size(); i++)
					{
						offenseTree.push_back(parseMasteryTreeList(offenseTreeDto[i]));
					}
					masteryTree.Offense = offenseTree;
				}
				if(json.HasMember("Utility"))
				{
					std::vector<MasteryTreeList> utilityTree;
					const Value& utilityTreeDto = json["Utility"];
					for (SizeType i = 0; i < utilityTreeDto.Size(); i++)
					{
						utilityTree.push_back(parseMasteryTreeList(utilityTreeDto[i]));
					}
					masteryTree.Utility = utilityTree;
				}
			}

			return masteryTree;
		}

		MasteryTreeItem parseMasteryTreeItem(const Value& json)
		{
			MasteryTreeItem masteryTreeItem = {};
			
			if(json.IsObject())
			{
				assignValue(masteryTreeItem.masteryId, json["masteryId"]);
				assignValue(masteryTreeItem.prereq, json["prereq"]);
			}

			return masteryTreeItem;
		}

		MasteryTreeList parseMasteryTreeList(const Value& json)
		{
			MasteryTreeList masteryTreeList = {};
			
			if(json.IsObject())
			{
				if(json.HasMember("masteryTreeItems"))
				{
					std::vector<MasteryTreeItem> masteryTreeItems;
					const Value& masteryTreeItemsDto = json["masteryTreeItems"];
					for (SizeType i = 0; i < masteryTreeItemsDto.Size(); i++)
					{
						masteryTreeItems.push_back(parseMasteryTreeItem(masteryTreeItemsDto[i]));
					}
					masteryTreeList.masteryTreeItems = masteryTreeItems;
				}
			}

			return masteryTreeList;
		}

		MatchHistorySummary parseMatchHistorySummary(const Value& json)
		{
			MatchHistorySummary matchHistorySummary = {};
			
			if(json.IsObject())
			{
				assignValue(matchHistorySummary.assists, json["assists"]);
				assignValue(matchHistorySummary.date, json["date"]);
				assignValue(matchHistorySummary.deaths, json["deaths"]);
				assignValue(matchHistorySummary.gameId, json["gameId"]);
				assignValue(matchHistorySummary.gameMode, json["gameMode"]);
				assignValue(matchHistorySummary.invalid, json["invalid"]);
				assignValue(matchHistorySummary.kills, json["kills"]);
				assignValue(matchHistorySummary.mapId, json["mapId"]);
				assignValue(matchHistorySummary.opposingTeamKills, json["opposingTeamKills"]);
				assignValue(matchHistorySummary.opposingTeamName, json["opposingTeamName"]);
				assignValue(matchHistorySummary.win, json["win"]);
			}

			return matchHistorySummary;
		}

		MessageOfDay parseMessageOfDay(const Value& json)
		{
			MessageOfDay messageOfDay = {};
			
			if(json.IsObject())
			{
				assignValue(messageOfDay.createDate, json["createDate"]);
				assignValue(messageOfDay.message, json["message"]);
				assignValue(messageOfDay.version, json["version"]);
			}

			return messageOfDay;
		}

		MetaData parseMetaData(const Value& json)
		{
			MetaData metaData = {};
			
			if(json.IsObject())
			{
				assignValue(metaData.isRune, json["isRune"]);
				assignValue(metaData.tier, json["tier"]);
				assignValue(metaData.type, json["type"]);
			}

			return metaData;
		}

		MiniSeries parseMiniSeries(const Value& json)
		{
			MiniSeries miniSeries = {};
			
			if(json.IsObject())
			{
				assignValue(miniSeries.losses, json["losses"]);
				assignValue(miniSeries.target, json["target"]);
				assignValue(miniSeries.timeLeftToPlayMillis, json["timeLeftToPlayMillis"]);
				assignValue(miniSeries.wins, json["wins"]);
				miniSeries.progress = parseCharVector(json["progress"]);
			}

			return miniSeries;
		}

		Passive parsePassive(const Value& json)
		{
			Passive passive = {};

			if(json.IsObject())
			{
				assignValue(passive.description, json["description"]);
				passive.image = parseImage(json["image"]);
				assignValue(passive.name, json["name"]);
			}

			return passive;
		}

		Player parsePlayer(const Value& json)
		{
			Player player = {};

			if(json.IsObject())
			{
				assignValue(player.championId, json["championId"]);
				assignValue(player.summonerId, json["summonerId"]);
				assignValue(player.teamId, json["teamId"]);
			}

			return player;
		}

		PlayerStatsSummary parsePlayerStatsSummary(const Value& json)
		{
			PlayerStatsSummary playerStatsSummary = {};
			
			if(json.IsObject())
			{
				playerStatsSummary.aggregatedStats = parseAggregatedStats(json["aggregatedStats"]);
				assignValue(playerStatsSummary.losses, json["losses"]);
				assignValue(playerStatsSummary.modifyDate, json["modifyDate"]);
				assignValue(playerStatsSummary.playerStatSummaryType, json["playerStatSummaryType"]);
				assignValue(playerStatsSummary.wins, json["wins"]);
			}

			return playerStatsSummary;
		}

		PlayerStatsSummaryList parsePlayerStatsSummaryList(const Value& json)
		{
			PlayerStatsSummaryList playerStatsSummaryList = {};
			
			if(json.IsObject())
			{
				assignValue(playerStatsSummaryList.summonerId, json["summonerId"]);

				if(json.HasMember("playerStatSummaries"))
				{
					std::vector<PlayerStatsSummary> playerStatSummaries;
					const Value& championListDto = json["playerStatSummaries"];
					for (SizeType i = 0; i < championListDto.Size(); i++)
					{
						playerStatSummaries.push_back(parsePlayerStatsSummary(championListDto[i]));
					}
					playerStatsSummaryList.playerStatSummaries = playerStatSummaries;
				}
			}

			return playerStatsSummaryList;
		}

		RankedStats parseRankedStats(const Value& json)
		{
			RankedStats rankedStats = {};
			
			if(json.IsObject())
			{
				assignValue(rankedStats.modifyDate, json["modifyDate"]);
				assignValue(rankedStats.summonerId, json["summonerId"]);

				if(json.HasMember("champions"))
				{
					std::vector<ChampionStats> champions;
					const Value& championListDto = json["champions"];
					for (SizeType i = 0; i < championListDto.Size(); i++)
					{
						champions.push_back(parseChampionStats(championListDto[i]));
					}
					rankedStats.champions = champions;
				}
			}

			return rankedStats;
		}

		RawStats parseRawStats(const Value& json)
		{
			RawStats rawStats = {};

			if(json.IsObject())
			{
				assignValue(rawStats.assists, json["assists"]);
				assignValue(rawStats.barracksKilled, json["barracksKilled"]);
				assignValue(rawStats.championsKilled, json["championsKilled"]);
				assignValue(rawStats.combatPlayerScore, json["combatPlayerScore"]);
				assignValue(rawStats.consumablesPurchased, json["consumablesPurchased"]);
				assignValue(rawStats.damageDealtPlayer, json["damageDealtPlayer"]);
				assignValue(rawStats.doubleKills, json["doubleKills"]);
				assignValue(rawStats.firstBlood, json["firstBlood"]);
				assignValue(rawStats.gold, json["gold"]);
				assignValue(rawStats.goldEarned, json["goldEarned"]);
				assignValue(rawStats.goldSpent, json["goldSpent"]);
				assignValue(rawStats.item0, json["item0"]);
				assignValue(rawStats.item1, json["item1"]);
				assignValue(rawStats.item2, json["item2"]);
				assignValue(rawStats.item3, json["item3"]);
				assignValue(rawStats.item4, json["item4"]);
				assignValue(rawStats.item5, json["item5"]);
				assignValue(rawStats.item6, json["item6"]);
				assignValue(rawStats.itemsPurchased, json["itemsPurchased"]);
				assignValue(rawStats.killingSprees, json["killingSprees"]);
				assignValue(rawStats.largestCriticalStrike, json["largestCriticalStrike"]);
				assignValue(rawStats.largestKillingSpree, json["largestKillingSpree"]);
				assignValue(rawStats.largestMultiKill, json["largestMultiKill"]);
				assignValue(rawStats.legendaryItemsCreated, json["legendaryItemsCreated"]);
				assignValue(rawStats.level, json["level"]);
				assignValue(rawStats.magicDamageDealtPlayer, json["magicDamageDealtPlayer"]);
				assignValue(rawStats.magicDamageDealtToChampions, json["magicDamageDealtToChampions"]);
				assignValue(rawStats.magicDamageTaken, json["magicDamageTaken"]);
				assignValue(rawStats.minionsDenied, json["minionsDenied"]);
				assignValue(rawStats.minionsKilled, json["minionsKilled"]);
				assignValue(rawStats.neutralMinionsKilled, json["neutralMinionsKilled"]);
				assignValue(rawStats.neutralMinionsKilledEnemyJungle, json["neutralMinionsKilledEnemyJungle"]);
				assignValue(rawStats.neutralMinionsKilledYourJungle, json["neutralMinionsKilledYourJungle"]);
				assignValue(rawStats.nexusKilled, json["nexusKilled"]);
				assignValue(rawStats.nodeCapture, json["nodeCapture"]);
				assignValue(rawStats.nodeCaptureAssist, json["nodeCaptureAssist"]);
				assignValue(rawStats.nodeNeutralize, json["nodeNeutralize"]);
				assignValue(rawStats.nodeNeutralizeAssist, json["nodeNeutralizeAssist"]);
				assignValue(rawStats.numDeaths, json["numDeaths"]);
				assignValue(rawStats.numItemsBought, json["numItemsBought"]);
				assignValue(rawStats.objectivePlayerScore, json["objectivePlayerScore"]);
				assignValue(rawStats.pentaKills, json["pentaKills"]);
				assignValue(rawStats.physicalDamageDealtPlayer, json["physicalDamageDealtPlayer"]);
				assignValue(rawStats.physicalDamageDealtToChampions, json["physicalDamageDealtToChampions"]);
				assignValue(rawStats.physicalDamageTaken, json["physicalDamageTaken"]);
				assignValue(rawStats.quadraKills, json["quadraKills"]);
				assignValue(rawStats.sightWardsBought, json["sightWardsBought"]);
				assignValue(rawStats.spell1Cast, json["spell1Cast"]);
				assignValue(rawStats.spell2Cast, json["spell2Cast"]);
				assignValue(rawStats.spell3Cast, json["spell3Cast"]);
				assignValue(rawStats.spell4Cast, json["spell4Cast"]);
				assignValue(rawStats.summonSpell1Cast, json["summonSpell1Cast"]);
				assignValue(rawStats.summonSpell2Cast, json["summonSpell2Cast"]);
				assignValue(rawStats.superMonsterKilled, json["superMonsterKilled"]);
				assignValue(rawStats.team, json["team"]);
				assignValue(rawStats.teamObjective, json["teamObjective"]);
				assignValue(rawStats.timePlayed, json["timePlayed"]);
				assignValue(rawStats.totalDamageDealt, json["totalDamageDealt"]);
				assignValue(rawStats.totalDamageDealtToChampions, json["totalDamageDealtToChampions"]);
				assignValue(rawStats.totalDamageTaken, json["totalDamageTaken"]);
				assignValue(rawStats.totalHeal, json["totalHeal"]);
				assignValue(rawStats.totalPlayerScore, json["totalPlayerScore"]);
				assignValue(rawStats.totalScoreRank, json["totalScoreRank"]);
				assignValue(rawStats.totalTimeCrowdControlDealt, json["totalTimeCrowdControlDealt"]);
				assignValue(rawStats.totalUnitsHealed, json["totalUnitsHealed"]);
				assignValue(rawStats.tripleKills, json["tripleKills"]);
				assignValue(rawStats.trueDamageDealtPlayer, json["trueDamageDealtPlayer"]);
				assignValue(rawStats.trueDamageDealtToChampions, json["trueDamageDealtToChampions"]);
				assignValue(rawStats.trueDamageTaken, json["trueDamageTaken"]);
				assignValue(rawStats.turretsKilled, json["turretsKilled"]);
				assignValue(rawStats.unrealKills, json["unrealKills"]);
				assignValue(rawStats.victoryPointTotal, json["victoryPointTotal"]);
				assignValue(rawStats.visionWardsBought, json["visionWardsBought"]);
				assignValue(rawStats.wardKilled, json["wardKilled"]);
				assignValue(rawStats.wardPlaced, json["wardPlaced"]);
				assignValue(rawStats.win, json["win"]);
			}

			return rawStats;
		}

		Realm parseRealm(const Value& json)
		{
			Realm realm = {};
			
			if(json.IsObject())
			{
				assignValue(realm.cdn, json["cdn"]);
				assignValue(realm.css, json["css"]);
				assignValue(realm.dd, json["dd"]);
				assignValue(realm.l, json["l"]);
				assignValue(realm.lg, json["lg"]);
				realm.n = parseStringByStringMap(json["n"]);
				assignValue(realm.profileiconmax, json["profileiconmax"]);
				assignValue(realm.store, json["store"]);
				assignValue(realm.v, json["v"]);
			}

			return realm;
		}

		RecentGames parseRecentGames(const Value& json)
		{
			RecentGames recentGames;

			if(json.IsObject())
			{
				assignValue(recentGames.summonerId, json["summonerId"]);

				if(json.HasMember("games"))
				{
					std::vector<Game> games;
					const Value& gameListDto = json["games"];
					for (SizeType i = 0; i < gameListDto.Size(); i++)
					{
						games.push_back(parseGame(gameListDto[i]));
					}
					recentGames.games = games;
				}
			}

			return recentGames;
		}

		Recommended parseRecommended(const Value& json)
		{
			Recommended recommended;

			if(json.IsObject())
			{
				assignValue(recommended.champion, json["champion"]);
				assignValue(recommended.map, json["map"]);
				assignValue(recommended.mode, json["mode"]);
				assignValue(recommended.priority, json["priority"]);
				assignValue(recommended.title, json["title"]);
				assignValue(recommended.type, json["type"]);

				if(json.HasMember("blocks"))
				{
					std::vector<Block> blocks;
					const Value& blockListDto = json["blocks"];
					for (SizeType i = 0; i < blockListDto.Size(); i++)
					{
						blocks.push_back(parseBlock(blockListDto[i]));
					}
					recommended.blocks = blocks;
				}
			}

			return recommended;
		}

		Roster parseRoster(const Value& json)
		{
			Roster roster = {};
			
			if(json.IsObject())
			{
				assignValue(roster.ownerId, json["ownerId"]);

				if(json.HasMember("memberList"))
				{
					std::vector<TeamMemberInfo> memberList;
					const Value& memberListDto = json["memberList"];
					for (SizeType i = 0; i < memberListDto.Size(); i++)
					{
						memberList.push_back(parseTeamMemberInfo(memberListDto[i]));
					}
					roster.memberList = memberList;
				}
			}

			return roster;
		}

		Rune parseRune(const Value& json)
		{
			Rune rune = {};
			
			if(json.IsObject())
			{
				assignValue(rune.colloq, json["colloq"]);
				assignValue(rune.consumeOnFull, json["consumeOnFull"]);
				assignValue(rune.consumed, json["consumed"]);
				assignValue(rune.depth, json["depth"]);
				assignValue(rune.description, json["description"]);
				rune.from = parseStringVector(json["from"]);
				rune.gold = parseGold(json["gold"]);
				assignValue(rune.group, json["group"]);
				assignValue(rune.hideFromAll, json["hideFromAll"]);
				rune.image = parseImage(json["image"]);
				assignValue(rune.inStore, json["inStore"]);
				rune.into = parseStringVector(json["into"]);
				rune.maps = parseBoolByStringMap(json["maps"]);
				assignValue(rune.name, json["name"]);
				assignValue(rune.plaintext, json["plaintext"]);
				assignValue(rune.requiredChampion, json["requiredChampion"]);
				rune.rune = parseMetaData(json["rune"]);
				assignValue(rune.specialRecipe, json["specialRecipe"]);
				assignValue(rune.stacks, json["stacks"]);
				rune.stats = parseBasicDataStats(json["stats"]);
				rune.tags = parseStringVector(json["tags"]);
			}

			return rune;
		}

		RuneList parseRuneList(const Value& json)
		{
			RuneList runeList = {};
			
			if(json.IsObject())
			{
				runeList.basic = parseBasicData(json["basic"]);
				assignValue(runeList.type, json["type"]);
				assignValue(runeList.version, json["version"]);

				if(json.HasMember("data"))
				{
					std::map<std::string, Rune> data;
					if(json["data"].IsObject())
					{
						for (rapidjson::Value::ConstMemberIterator itr = json["data"].MemberBegin(); itr != json["data"].MemberEnd(); ++itr)
						{
							data[itr->name.GetString()] = parseRune(itr->value);
						}
					}
					runeList.data = data;
				}
			}

			return runeList;
		}

		RunePage parseRunePage(const Value& json)
		{
			RunePage runePage = {};
			
			if(json.IsObject())
			{
				assignValue(runePage.current, json["current"]);
				assignValue(runePage.id, json["id"]);
				assignValue(runePage.name, json["name"]);
				
				if(json.HasMember("slots"))
				{
					std::vector<RuneSlot> slots;
					const Value& slotListDto = json["slots"];
					for (SizeType i = 0; i < slotListDto.Size(); i++)
					{
						slots.push_back(parseRuneSlot(slotListDto[i]));
					}
					runePage.slots = slots;
				}
			}

			return runePage;
		}

		RunePages parseRunePages(const Value& json)
		{
			RunePages runePages = {};
			
			if(json.IsObject())
			{
				assignValue(runePages.summonerId, json["summonerId"]);
				
				if(json.HasMember("pages"))
				{
					std::vector<RunePage> pages;
					const Value& runePageListDto = json["pages"];
					for (SizeType i = 0; i < runePageListDto.Size(); i++)
					{
						pages.push_back(parseRunePage(runePageListDto[i]));
					}
					runePages.pages = pages;
				}
			}

			return runePages;
		}

		std::map<long long, RunePages> parseRunePagesById(const Value& json)
		{
			std::map<long long, RunePages> runePagesById;
			
			if(json.IsObject())
			{
				for (rapidjson::Value::ConstMemberIterator itr = json.MemberBegin(); itr != json.MemberEnd(); ++itr)
				{
					runePagesById[itr->name.GetInt64()] = parseRunePages(itr->value);
				}
			}

			return runePagesById;
		}

		RuneSlot parseRuneSlot(const Value& json)
		{
			RuneSlot runeSlot = {};
			
			if(json.IsObject())
			{
				runeSlot.rune = parseRuneSlotted(json["rune"]);
				assignValue(runeSlot.runeSlotId, json["runeSlotId"]);
			}

			return runeSlot;
		}

		RuneSlotted parseRuneSlotted(const Value& json)
		{
			RuneSlotted runeSlotted = {};
			
			if(json.IsObject())
			{
				assignValue(runeSlotted.description, json["description"]);
				assignValue(runeSlotted.id, json["id"]);
				assignValue(runeSlotted.name, json["name"]);
				assignValue(runeSlotted.tier, json["tier"]);
			}

			return runeSlotted;
		}

		Skin parseSkin(const Value& json)
		{
			Skin skin = {};

			if(json.IsObject())
			{
				assignValue(skin.id, json["id"]);
				assignValue(skin.name, json["name"]);
				assignValue(skin.num, json["num"]);
			}

			return skin;
		}

		SpellVars parseSpellVars(const Value& json)
		{
			SpellVars spellVars = {};

			if(json.IsObject())
			{
				assignValue(spellVars.link, json["link"]);
				spellVars.coeff = parseDoubleVector(json["coeff"]);
				assignValue(spellVars.key, json["key"]);
			}

			return spellVars;
		}

		Stats parseStats(const Value& json)
		{
			Stats stats = {};

			if(json.IsObject())
			{
				assignValue(stats.armor, json["armor"]);
				assignValue(stats.armorperlevel, json["armorperlevel"]);
				assignValue(stats.attackdamage, json["attackdamage"]);
				assignValue(stats.attackdamageperlevel, json["attackdamageperlevel"]);
				assignValue(stats.attackrange, json["attackrange"]);
				assignValue(stats.attackspeedoffset, json["attackspeedoffset"]);
				assignValue(stats.attackspeedperlevel, json["attackspeedperlevel"]);
				assignValue(stats.crit, json["crit"]);
				assignValue(stats.critperlevel, json["critperlevel"]);
				assignValue(stats.hp, json["hp"]);
				assignValue(stats.hpperlevel, json["hpperlevel"]);
				assignValue(stats.hpregen, json["hpregen"]);
				assignValue(stats.hpregenperlevel, json["hpregenperlevel"]);
				assignValue(stats.movespeed, json["movespeed"]);
				assignValue(stats.mp, json["mp"]);
				assignValue(stats.mpperlevel, json["mpperlevel"]);
				assignValue(stats.mpregen, json["mpregen"]);
				assignValue(stats.mpregenperlevel, json["mpregenperlevel"]);
				assignValue(stats.spellblock, json["spellblock"]);
				assignValue(stats.spellblockperlevel, json["spellblockperlevel"]);
			}

			return stats;
		}

		Summoner parseSummoner(const Value& json)
		{
			Summoner summoner = {};
			
			if(json.IsObject())
			{
				assignValue(summoner.id, json["id"]);
				assignValue(summoner.name, json["name"]);
				assignValue(summoner.profileIconId, json["profileIconId"]);
				assignValue(summoner.revisionDate, json["revisionDate"]);
				assignValue(summoner.summonerLevel, json["summonerLevel"]);
			}

			return summoner;
		}

		std::map<long long, std::string> parseSummonerNamesById(const Value& json)
		{
			std::map<long long, std::string> summonerNamesById;
			
			if(json.IsObject())
			{
				for (rapidjson::Value::ConstMemberIterator itr = json.MemberBegin(); itr != json.MemberEnd(); ++itr)
				{
					summonerNamesById[itr->name.GetInt64()] = itr->value.GetString();
				}
			}

			return summonerNamesById;
		}

		std::map<long long, Summoner> parseSummonersById(const Value& json)
		{
			std::map<long long, Summoner> summonersById;
			
			if(json.IsObject())
			{
				for (rapidjson::Value::ConstMemberIterator itr = json.MemberBegin(); itr != json.MemberEnd(); ++itr)
				{
					summonersById[itr->name.GetInt64()] = parseSummoner(itr->value);
				}
			}

			return summonersById;
		}

		std::map<std::string, Summoner> parseSummonersByName(const Value& json)
		{
			std::map<std::string, Summoner> summonersByName;
			
			if(json.IsObject())
			{
				for (rapidjson::Value::ConstMemberIterator itr = json.MemberBegin(); itr != json.MemberEnd(); ++itr)
				{
					summonersByName[itr->name.GetString()] = parseSummoner(itr->value);
				}
			}

			return summonersByName;
		}

		SummonerSpell parseSummonerSpell(const Value& json)
		{
			SummonerSpell summonerSpell = {};
			
			if(json.IsObject())
			{
				summonerSpell.cooldown = parseIntVector(json["cooldown"]);
				assignValue(summonerSpell.cooldownBurn, json["cooldownBurn"]);
				summonerSpell.cost = parseIntVector(json["cost"]);
				assignValue(summonerSpell.costBurn, json["costBurn"]);
				assignValue(summonerSpell.costType, json["costType"]);
				assignValue(summonerSpell.description, json["description"]);
				summonerSpell.effect = parse2DIntVector(json["effect"]);
				summonerSpell.effectBurn = parseStringVector(json["effectBurn"]);
				assignValue(summonerSpell.id, json["id"]);
				summonerSpell.image = parseImage(json["image"]);
				summonerSpell.leveltip = parseLevelTip(json["leveltip"]);
				assignValue(summonerSpell.maxrank, json["maxrank"]);
				summonerSpell.modes = parseStringVector(json["modes"]);
				assignValue(summonerSpell.name, json["name"]);
				summonerSpell.range = parseIntVector(json["range"]);
				assignValue(summonerSpell.rangeBurn, json["rangeBurn"]);
				assignValue(summonerSpell.resource, json["resource"]);
				assignValue(summonerSpell.tooltip, json["tooltip"]);

				if(json.HasMember("vars"))
				{
					std::vector<SpellVars> vars;
					const Value& varsListDto = json["vars"];
					for (SizeType i = 0; i < varsListDto.Size(); i++)
					{
						vars.push_back(parseSpellVars(varsListDto[i]));
					}
					summonerSpell.vars = vars;
				}
			}

			return summonerSpell;
		}

		SummonerSpellList parseSummonerSpellList(const Value& json)
		{
			SummonerSpellList summonerSpellList = {};
			
			if(json.IsObject())
			{
				assignValue(summonerSpellList.type, json["type"]);
				assignValue(summonerSpellList.version, json["version"]);

				if(json.HasMember("data"))
				{
					std::map<std::string, SummonerSpell> data;
					if(json["data"].IsObject())
					{
						for (rapidjson::Value::ConstMemberIterator itr = json["data"].MemberBegin(); itr != json["data"].MemberEnd(); ++itr)
						{
							data[itr->name.GetString()] = parseSummonerSpell(itr->value);
						}
					}
					summonerSpellList.data = data;
				}
			}

			return summonerSpellList;
		}

		Talent parseTalent(const Value& json)
		{
			Talent talent = {};
			
			if(json.IsObject())
			{
				assignValue(talent.id, json["id"]);
				assignValue(talent.name, json["name"]);
				assignValue(talent.rank, json["rank"]);
			}

			return talent;
		}

		Team parseTeam(const Value& json)
		{
			Team team = {};
			
			if(json.IsObject())
			{
				assignValue(team.createDate, json["createDate"]);
				assignValue(team.fullId, json["fullId"]);
				assignValue(team.lastGameDate, json["lastGameDate"]);
				assignValue(team.lastJoinDate, json["lastJoinDate"]);
				assignValue(team.lastJoinedRankedTeamQueueDate, json["lastJoinedRankedTeamQueueDate"]);
				team.messageOfDay = parseMessageOfDay(json["messageOfDay"]);
				assignValue(team.modifyDate, json["modifyDate"]);
				assignValue(team.name, json["name"]);
				team.roster = parseRoster(json["roster"]);
				assignValue(team.secondLastJoinDate, json["secondLastJoinDate"]);
				assignValue(team.status, json["status"]);
				assignValue(team.tag, json["tag"]);
				team.teamStatSummary = parseTeamStatSummary(json["teamStatSummary"]);
				assignValue(team.thirdLastJoinDate, json["thirdLastJoinDate"]);

				if(json.HasMember("matchHistory"))
				{
					std::vector<MatchHistorySummary> matchHistory;
					const Value& matchHistoryListDto = json["matchHistory"];
					for (SizeType i = 0; i < matchHistoryListDto.Size(); i++)
					{
						matchHistory.push_back(parseMatchHistorySummary(matchHistoryListDto[i]));
					}
					team.matchHistory = matchHistory;
				}
			}

			return team;
		}

		std::vector<Team> parseTeamList(const Value& json)
		{
			std::vector<Team> teamList;
			
			if(json.IsArray())
			{
				for (SizeType i = 0; i < json.Size(); i++)
				{
					teamList.push_back(parseTeam(json[i]));
				}
			}

			return teamList;
		}

		std::map<std::string, Team> parseTeamsById(const Value& json)
		{
			std::map<std::string, Team> teamsById;

			if(json.IsObject())
			{
				for (rapidjson::Value::ConstMemberIterator itr = json.MemberBegin(); itr != json.MemberEnd(); ++itr)
				{
					teamsById[itr->name.GetString()] = parseTeam(itr->value);
				}
			}

			return teamsById;
		}

		TeamMemberInfo parseTeamMemberInfo(const Value& json)
		{
			TeamMemberInfo teamMemberInfo = {};
			
			if(json.IsObject())
			{
				assignValue(teamMemberInfo.inviteDate, json["inviteDate"]);
				assignValue(teamMemberInfo.joinDate, json["joinDate"]);
				assignValue(teamMemberInfo.playerId, json["playerId"]);
				assignValue(teamMemberInfo.status, json["status"]);
			}

			return teamMemberInfo;
		}

		TeamStatDetail parseTeamStatDetail(const Value& json)
		{
			TeamStatDetail teamStatDetail = {};
			
			if(json.IsObject())
			{
				assignValue(teamStatDetail.averageGamesPlayed, json["averageGamesPlayed"]);
				assignValue(teamStatDetail.fullId, json["fullId"]);
				assignValue(teamStatDetail.losses, json["losses"]);
				assignValue(teamStatDetail.teamStatType, json["teamStatType"]);
				assignValue(teamStatDetail.wins, json["wins"]);
			}

			return teamStatDetail;
		}

		TeamStatSummary parseTeamStatSummary(const Value& json)
		{
			TeamStatSummary teamStatSummary = {};
			
			if(json.IsObject())
			{
				assignValue(teamStatSummary.fullId, json["fullId"]);

				if(json.HasMember("teamStatDetails"))
				{
					std::vector<TeamStatDetail> teamStatDetails;
					const Value& teamStatDetailListDto = json["teamStatDetails"];
					for (SizeType i = 0; i < teamStatDetailListDto.Size(); i++)
					{
						teamStatDetails.push_back(parseTeamStatDetail(teamStatDetailListDto[i]));
					}
					teamStatSummary.teamStatDetails = teamStatDetails;
				}
			}

			return teamStatSummary;
		}

		// Helper functions

		void assignValue(bool& var, const Value& json)
		{
			if(json.IsBool())
				var = json.GetBool();
		}

		void assignValue(int& var, const Value& json)
		{
			if(json.IsInt())
				var = json.GetInt();
		}

		void assignValue(long long& var, const Value& json)
		{
			if(json.IsInt64())
				var = json.GetInt64();
		}

		void assignValue(double& var, const Value& json)
		{
			if(json.IsDouble())
				var = json.GetDouble();
		}

		void assignValue(std::string& var, const Value& json)
		{
			if(json.IsString())
				var = json.GetString();
		}

		std::vector<char> parseCharVector(const Value& json)
		{
			std::vector<char> charVector;
			if(json.IsArray())
			{
				for (SizeType i = 0; i < json.Size(); i++)
				{
					charVector.push_back(json[i].GetString()[0]);
				}
			}
			else if(json.IsString())
			{
				charVector.push_back(json.GetString()[0]);
			}
			return charVector;
		}

		std::vector<std::string> parseStringVector(const Value& json)
		{
			std::vector<std::string> stringVector;
			if(json.IsArray())
			{
				for (SizeType i = 0; i < json.Size(); i++)
				{
					stringVector.push_back(json[i].GetString());
				}
			}
			else if(json.IsString())
			{
				stringVector.push_back(json.GetString());
			}
			return stringVector;
		}

		std::vector<double> parseDoubleVector(const Value& json)
		{
			std::vector<double> doubleVector;
			if(json.IsArray())
			{
				for (SizeType i = 0; i < json.Size(); i++)
				{
					doubleVector.push_back(json[i].GetDouble());
				}
			}
			else if(json.IsDouble())
			{
				doubleVector.push_back(json.GetDouble());
			}
			return doubleVector;
		}

		std::vector<int> parseIntVector(const Value& json)
		{
			std::vector<int> intVector;
			if(json.IsArray())
			{
				for (SizeType i = 0; i < json.Size(); i++)
				{
					intVector.push_back(json[i].GetInt());
				}
			}
			else if(json.IsInt())
			{
				intVector.push_back(json.GetInt());
			}
			return intVector;
		}

		std::vector<std::vector<int>> parse2DIntVector(const Value& json)
		{
			std::vector<std::vector<int>> intVector2D;
			if(json.IsArray())
			{
				for (SizeType i = 0; i < json.Size(); i++)
				{
					intVector2D.push_back(parseIntVector(json[i]));
				}
			}
			return intVector2D;
		}

		std::map<std::string, std::string> parseStringByStringMap(const Value& json)
		{
			std::map<std::string, std::string> stringByStringMap;
			if(json.IsObject())
			{
				for (rapidjson::Value::ConstMemberIterator itr = json.MemberBegin(); itr != json.MemberEnd(); ++itr)
				{
					stringByStringMap[itr->name.GetString()] = itr->value.GetString();
				}
			}
			return stringByStringMap;
		}

		std::map<std::string, bool> parseBoolByStringMap(const Value& json)
		{
			std::map<std::string, bool> boolByStringMap;
			if(json.IsObject())
			{
				for (rapidjson::Value::ConstMemberIterator itr = json.MemberBegin(); itr != json.MemberEnd(); ++itr)
				{
					boolByStringMap[itr->name.GetString()] = itr->value.GetBool();
				}
			}
			return boolByStringMap;
		}
	}
}