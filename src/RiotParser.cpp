#include <RiotCPP/Parser/RiotParser.hpp>

namespace Riot
{
	namespace RiotParser
	{
		AggregatedStats parseAggregatedStats(const Value& json)
		{
			AggregatedStats aggregatedStats;
			
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

			return aggregatedStats;
		}

		BasicData parseBasicData(const Value& json)
		{
			BasicData basicData;

			return basicData;
		}

		BasicDataStats parseBasicDataStats(const Value& json)
		{
			BasicDataStats basicDataStats;

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

			return basicDataStats;
		}

		Block parseBlock(const Value& json)
		{
			Block block;

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

			return block;
		}

		BlockItem parseBlockItem(const Value& json)
		{
			BlockItem blockItem;

			assignValue(blockItem.count, json["count"]);
			assignValue(blockItem.id, json["id"]);

			return blockItem;
		}

		Champion parseChampion(const Value& json)
		{
			Champion champion;

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

			return champion;
		}

		ChampionData parseChampionData(const Value& json)
		{
			ChampionData championData;

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

			return championData;
		}

		ChampionDataList parseChampionDataList(const Value& json)
		{
			ChampionDataList championDataList;

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

			return championDataList;
		}

		ChampionList parseChampionList(const Value& json)
		{
			ChampionList championList;

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
			ChampionSpell championSpell;

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

			return championSpell;
		}

		ChampionStats parseChampionStats(const Value& json)
		{
			ChampionStats championStats;

			return championStats;
		}

		Game parseGame(const Value& json)
		{
			Game game;

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

			return game;
		}

		Gold parseGold(const Value& json)
		{
			Gold gold;

			assignValue(gold.base, json["base"]);
			assignValue(gold.purchasable, json["purchasable"]);
			assignValue(gold.sell, json["sell"]);
			assignValue(gold.total, json["total"]);

			return gold;
		}

		Group parseGroup(const Value& json)
		{
			Group group;

			return group;
		}

		Image parseImage(const Value& json)
		{
			Image image;

			assignValue(image.full, json["full"]);
			assignValue(image.group, json["group"]);
			assignValue(image.h, json["h"]);
			assignValue(image.sprite, json["sprite"]);
			assignValue(image.w, json["w"]);
			assignValue(image.x, json["x"]);
			assignValue(image.y, json["y"]);

			return image;
		}

		Info parseInfo(const Value& json)
		{
			Info info;

			assignValue(info.attack, json["attack"]);
			assignValue(info.defense, json["defense"]);
			assignValue(info.difficulty, json["difficulty"]);
			assignValue(info.magic, json["magic"]);

			return info;
		}

		Item parseItem(const Value& json)
		{
			Item item;

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

			return item;
		}

		ItemList parseItemList(const Value& json)
		{
			ItemList itemList;

			return itemList;
		}

		ItemTree parseItemTree(const Value& json)
		{
			ItemTree itemTree;

			return itemTree;
		}

		League parseLeague(const Value& json)
		{
			League league;

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

			return league;
		}

		std::vector<League> parseLeagueList(const Value& json)
		{
			std::vector<League> leagueList;

			for (SizeType i = 0; i < json.Size(); i++)
			{
				leagueList.push_back(parseLeague(json[i]));
			}

			return leagueList;
		}

		LeagueItem parseLeagueItem(const Value& json)
		{
			LeagueItem leagueItem;
			leagueItem.miniSeries = parseMiniSeries(json["miniSeries"]);

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

			return leagueItem;
		}

		std::vector<LeagueItem> parseLeagueItemList(const Value& json)
		{
			std::vector<LeagueItem> leagueItemList;

			for (SizeType i = 0; i < json.Size(); i++)
			{
				leagueItemList.push_back(parseLeagueItem(json[i]));
			}

			return leagueItemList;
		}

		LevelTip parseLevelTip(const Value& json)
		{
			LevelTip levelTip;

			levelTip.effect = parseStringVector(json["effect"]);
			levelTip.label = parseStringVector(json["label"]);

			return levelTip;
		}

		Mastery parseMastery(const Value& json)
		{
			Mastery mastery;

			return mastery;
		}

		MasteryList parseMasteryList(const Value& json)
		{
			MasteryList masteryList;

			return masteryList;
		}

		MasteryPage parseMasteryPage(const Value& json)
		{
			MasteryPage masteryPage;

			return masteryPage;
		}

		MasteryPages parseMasteryPages(const Value& json)
		{
			MasteryPages masteryPages;

			return masteryPages;
		}

		std::map<long long, MasteryPages> parseMasteryPagesMap(const Value& json)
		{
			std::map<long long, MasteryPages> masteryPagesMap;

			return masteryPagesMap;
		}

		MasteryTree parseMasteryTree(const Value& json)
		{
			MasteryTree masteryTree;

			return masteryTree;
		}

		MasteryTreeItem parseMasteryTreeItem(const Value& json)
		{
			MasteryTreeItem masteryTreeItem;

			return masteryTreeItem;
		}

		MasteryTreeList parseMasteryTreeList(const Value& json)
		{
			MasteryTreeList masteryTreeList;

			return masteryTreeList;
		}

		MatchHistorySummary parseMatchHistorySummary(const Value& json)
		{
			MatchHistorySummary matchHistorySummary;

			return matchHistorySummary;
		}

		MessageOfDay parseMessageOfDay(const Value& json)
		{
			MessageOfDay messageOfDay;

			return messageOfDay;
		}

		MetaData parseMetaData(const Value& json)
		{
			MetaData metaData;

			return metaData;
		}

		MiniSeries parseMiniSeries(const Value& json)
		{
			MiniSeries miniSeries;
			
			assignValue(miniSeries.losses, json["losses"]);
			assignValue(miniSeries.target, json["target"]);
			assignValue(miniSeries.timeLeftToPlayMillis, json["timeLeftToPlayMillis"]);
			assignValue(miniSeries.wins, json["wins"]);
			miniSeries.progress = parseCharVector(json["progress"]);

			return miniSeries;
		}

		Passive parsePassive(const Value& json)
		{
			Passive passive;

			assignValue(passive.description, json["description"]);
			passive.image = parseImage(json["image"]);
			assignValue(passive.name, json["name"]);

			return passive;
		}

		Player parsePlayer(const Value& json)
		{
			Player player;

			assignValue(player.championId, json["championId"]);
			assignValue(player.summonerId, json["summonerId"]);
			assignValue(player.teamId, json["teamId"]);

			return player;
		}

		PlayerStatsSummary parsePlayerStatsSummary(const Value& json)
		{
			PlayerStatsSummary playerStatsSummary;

			return playerStatsSummary;
		}

		PlayerStatsSummaryList parsePlayerStatsSummaryList(const Value& json)
		{
			PlayerStatsSummaryList playerStatsSummaryList;

			return playerStatsSummaryList;
		}

		RankedStats parseRankedStats(const Value& json)
		{
			RankedStats rankedStats;

			return rankedStats;
		}

		RawStats parseRawStats(const Value& json)
		{
			RawStats rawStats;

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

			return rawStats;
		}

		Realm parseRealm(const Value& json)
		{
			Realm realm;

			return realm;
		}

		RecentGames parseRecentGames(const Value& json)
		{
			RecentGames recentGames;

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

			return recentGames;
		}

		Recommended parseRecommended(const Value& json)
		{
			Recommended recommended;

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

			return recommended;
		}

		Roster parseRoster(const Value& json)
		{
			Roster roster;

			return roster;
		}

		Rune parseRune(const Value& json)
		{
			Rune rune;

			return rune;
		}

		RuneList parseRuneList(const Value& json)
		{
			RuneList runeList;

			return runeList;
		}

		RunePage parseRunePage(const Value& json)
		{
			RunePage runePage;

			return runePage;
		}

		RunePages parseRunePages(const Value& json)
		{
			RunePages runePages;

			return runePages;
		}

		std::map<long long, RunePages> parseRunePagesById(const Value& json)
		{
			std::map<long long, RunePages> runePagesById;

			return runePagesById;
		}

		RuneSlot parseRuneSlot(const Value& json)
		{
			RuneSlot runeSlot;

			return runeSlot;
		}

		RuneSlotted parseRuneSlotted(const Value& json)
		{
			RuneSlotted runeSlotted;

			return runeSlotted;
		}

		Skin parseSkin(const Value& json)
		{
			Skin skin;

			assignValue(skin.id, json["id"]);
			assignValue(skin.name, json["name"]);
			assignValue(skin.num, json["num"]);

			return skin;
		}

		SpellVars parseSpellVars(const Value& json)
		{
			SpellVars spellVars;

			assignValue(spellVars.link, json["link"]);
			spellVars.coeff = parseDoubleVector(json["coeff"]);
			assignValue(spellVars.key, json["key"]);

			return spellVars;
		}

		Stats parseStats(const Value& json)
		{
			Stats stats;

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

			return stats;
		}

		Summoner parseSummoner(const Value& json)
		{
			Summoner summoner;

			return summoner;
		}

		std::map<long long, std::string> parseSummonerNamesById(const Value& json)
		{
			std::map<long long, std::string> summonerNamesById;

			return summonerNamesById;
		}

		std::map<long long, Summoner> parseSummonersById(const Value& json)
		{
			std::map<long long, Summoner> summonersById;

			return summonersById;
		}

		std::map<std::string, Summoner> parseSummonersByName(const Value& json)
		{
			std::map<std::string, Summoner> summonersByName;

			return summonersByName;
		}

		SummonerSpell parseSummonerSpell(const Value& json)
		{
			SummonerSpell summonerSpell;

			return summonerSpell;
		}

		SummonerSpellList parseSummonerSpellList(const Value& json)
		{
			SummonerSpellList summonerSpellList;

			return summonerSpellList;
		}

		Talent parseTalent(const Value& json)
		{
			Talent talent;

			return talent;
		}

		Team parseTeam(const Value& json)
		{
			Team team;

			return team;
		}

		std::vector<Team> parseTeamList(const Value& json)
		{
			std::vector<Team> teamList;

			return teamList;
		}

		std::map<std::string, Team> parseTeamsById(const Value& json)
		{
			std::map<std::string, Team> teamsById;

			return teamsById;
		}

		TeamMemberInfo parseTeamMemberInfo(const Value& json)
		{
			TeamMemberInfo teamMemberInfo;

			return teamMemberInfo;
		}

		TeamStatDetail parseTeamStatDetail(const Value& json)
		{
			TeamStatDetail teamStatDetail;

			return teamStatDetail;
		}

		TeamStatSummary parseTeamStatSummary(const Value& json)
		{
			TeamStatSummary teamStatSummary;

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