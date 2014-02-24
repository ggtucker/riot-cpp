#include "DataParser.hpp"

namespace Riot
{
	namespace DataParser
	{
		AggregatedStats parseAggregatedStats(const Value& json)
		{
			AggregatedStats aggregatedStats;
			
			if(json.HasMember("averageAssists"))
				aggregatedStats.averageAssists = json["averageAssists"].GetInt();
			if(json.HasMember("averageChampionsKilled"))
				aggregatedStats.averageChampionsKilled = json["averageChampionsKilled"].GetInt();
			if(json.HasMember("averageCombatPlayerScore"))
				aggregatedStats.averageCombatPlayerScore = json["averageCombatPlayerScore"].GetInt();
			if(json.HasMember("averageNodeCapture"))
				aggregatedStats.averageNodeCapture = json["averageNodeCapture"].GetInt();
			if(json.HasMember("averageNodeCaptureAssist"))
				aggregatedStats.averageNodeCaptureAssist = json["averageNodeCaptureAssist"].GetInt();
			if(json.HasMember("averageNodeNeutralize"))
				aggregatedStats.averageNodeNeutralize = json["averageNodeNeutralize"].GetInt();
			if(json.HasMember("averageNodeNeutralizeAssist"))
				aggregatedStats.averageNodeNeutralizeAssist = json["averageNodeNeutralizeAssist"].GetInt();
			if(json.HasMember("averageNumDeaths"))
				aggregatedStats.averageNumDeaths = json["averageNumDeaths"].GetInt();
			if(json.HasMember("averageObjectivePlayerScore"))
				aggregatedStats.averageObjectivePlayerScore = json["averageObjectivePlayerScore"].GetInt();
			if(json.HasMember("averageTeamObjective"))
				aggregatedStats.averageTeamObjective = json["averageTeamObjective"].GetInt();
			if(json.HasMember("averageTotalPlayerScore"))
				aggregatedStats.averageTotalPlayerScore = json["averageTotalPlayerScore"].GetInt();
			if(json.HasMember("botGamesPlayed"))
				aggregatedStats.botGamesPlayed = json["botGamesPlayed"].GetInt();
			if(json.HasMember("killingSpree"))
				aggregatedStats.killingSpree = json["killingSpree"].GetInt();
			if(json.HasMember("maxAssists"))
				aggregatedStats.maxAssists = json["maxAssists"].GetInt();
			if(json.HasMember("maxChampionsKilled"))
				aggregatedStats.maxChampionsKilled = json["maxChampionsKilled"].GetInt();
			if(json.HasMember("maxCombatPlayerScore"))
				aggregatedStats.maxCombatPlayerScore = json["maxCombatPlayerScore"].GetInt();
			if(json.HasMember("maxLargestCriticalStrike"))
				aggregatedStats.maxLargestCriticalStrike = json["maxLargestCriticalStrike"].GetInt();
			if(json.HasMember("maxLargestKillingSpree"))
				aggregatedStats.maxLargestKillingSpree = json["maxLargestKillingSpree"].GetInt();
			if(json.HasMember("maxNodeCapture"))
				aggregatedStats.maxNodeCapture = json["maxNodeCapture"].GetInt();
			if(json.HasMember("maxNodeCaptureAssist"))
				aggregatedStats.maxNodeCaptureAssist = json["maxNodeCaptureAssist"].GetInt();
			if(json.HasMember("maxNodeNeutralize"))
				aggregatedStats.maxNodeNeutralize = json["maxNodeNeutralize"].GetInt();
			if(json.HasMember("maxNodeNeutralizeAssist"))
				aggregatedStats.maxNodeNeutralizeAssist = json["maxNodeNeutralizeAssist"].GetInt();
			if(json.HasMember("maxNumDeaths"))
				aggregatedStats.maxNumDeaths = json["maxNumDeaths"].GetInt();
			if(json.HasMember("maxObjectivePlayerScore"))
				aggregatedStats.maxObjectivePlayerScore = json["maxObjectivePlayerScore"].GetInt();
			if(json.HasMember("maxTeamObjective"))
				aggregatedStats.maxTeamObjective = json["maxTeamObjective"].GetInt();
			if(json.HasMember("maxTimePlayed"))
				aggregatedStats.maxTimePlayed = json["maxTimePlayed"].GetInt();
			if(json.HasMember("maxTimeSpentLiving"))
				aggregatedStats.maxTimeSpentLiving = json["maxTimeSpentLiving"].GetInt();
			if(json.HasMember("maxTotalPlayerScore"))
				aggregatedStats.maxTotalPlayerScore = json["maxTotalPlayerScore"].GetInt();
			if(json.HasMember("mostChampionKillsPerSession"))
				aggregatedStats.mostChampionKillsPerSession = json["mostChampionKillsPerSession"].GetInt();
			if(json.HasMember("mostSpellsCast"))
				aggregatedStats.mostSpellsCast = json["mostSpellsCast"].GetInt();
			if(json.HasMember("normalGamesPlayed"))
				aggregatedStats.normalGamesPlayed = json["normalGamesPlayed"].GetInt();
			if(json.HasMember("rankedPremadeGamesPlayed"))
				aggregatedStats.rankedPremadeGamesPlayed = json["rankedPremadeGamesPlayed"].GetInt();
			if(json.HasMember("rankedSoloGamesPlayed"))
				aggregatedStats.rankedSoloGamesPlayed = json["rankedSoloGamesPlayed"].GetInt();
			if(json.HasMember("totalAssists"))
				aggregatedStats.totalAssists = json["totalAssists"].GetInt();
			if(json.HasMember("totalChampionKills"))
				aggregatedStats.totalChampionKills = json["totalChampionKills"].GetInt();
			if(json.HasMember("totalDamageDealt"))
				aggregatedStats.totalDamageDealt = json["totalDamageDealt"].GetInt();
			if(json.HasMember("totalDamageTaken"))
				aggregatedStats.totalDamageTaken = json["totalDamageTaken"].GetInt();
			if(json.HasMember("totalDeathsPerSession"))
				aggregatedStats.totalDeathsPerSession = json["totalDeathsPerSession"].GetInt();
			if(json.HasMember("totalDoubleKills"))
				aggregatedStats.totalDoubleKills = json["totalDoubleKills"].GetInt();
			if(json.HasMember("totalFirstBlood"))
				aggregatedStats.totalFirstBlood = json["totalFirstBlood"].GetInt();
			if(json.HasMember("totalGoldEarned"))
				aggregatedStats.totalGoldEarned = json["totalGoldEarned"].GetInt();
			if(json.HasMember("totalHeal"))
				aggregatedStats.totalHeal = json["totalHeal"].GetInt();
			if(json.HasMember("totalMagicDamageDealt"))
				aggregatedStats.totalMagicDamageDealt = json["totalMagicDamageDealt"].GetInt();
			if(json.HasMember("totalMinionKills"))
				aggregatedStats.totalMinionKills = json["totalMinionKills"].GetInt();
			if(json.HasMember("totalNeutralMinionsKilled"))
				aggregatedStats.totalNeutralMinionsKilled = json["totalNeutralMinionsKilled"].GetInt();
			if(json.HasMember("totalNodeCapture"))
				aggregatedStats.totalNodeCapture = json["totalNodeCapture"].GetInt();
			if(json.HasMember("totalNodeNeutralize"))
				aggregatedStats.totalNodeNeutralize = json["totalNodeNeutralize"].GetInt();
			if(json.HasMember("totalPentaKills"))
				aggregatedStats.totalPentaKills = json["totalPentaKills"].GetInt();
			if(json.HasMember("totalPhysicalDamageDealt"))
				aggregatedStats.totalPhysicalDamageDealt = json["totalPhysicalDamageDealt"].GetInt();
			if(json.HasMember("totalQuadraKills"))
				aggregatedStats.totalQuadraKills = json["totalQuadraKills"].GetInt();
			if(json.HasMember("totalSessionsLost"))
				aggregatedStats.totalSessionsLost = json["totalSessionsLost"].GetInt();
			if(json.HasMember("totalSessionsPlayed"))
				aggregatedStats.totalSessionsPlayed = json["totalSessionsPlayed"].GetInt();
			if(json.HasMember("totalSessionsWon"))
				aggregatedStats.totalSessionsWon = json["totalSessionsWon"].GetInt();
			if(json.HasMember("totalTripleKills"))
				aggregatedStats.totalTripleKills = json["totalTripleKills"].GetInt();
			if(json.HasMember("totalTurretsKilled"))
				aggregatedStats.totalTurretsKilled = json["totalTurretsKilled"].GetInt();
			if(json.HasMember("totalUnrealKills"))
				aggregatedStats.totalUnrealKills = json["totalUnrealKills"].GetInt();

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

			return basicDataStats;
		}

		Block parseBlock(const Value& json)
		{
			Block block;

			if(json.HasMember("type"))
				block.type = json["type"].GetString();

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

			if(json.HasMember("count"))
				blockItem.count = json["count"].GetInt();
			if(json.HasMember("id"))
				blockItem.id = json["id"].GetString();

			return blockItem;
		}

		Champion parseChampion(const Value& json)
		{
			Champion champion;

			if(json.HasMember("active"))
				champion.active = json["active"].GetBool();
			if(json.HasMember("attackRank"))
				champion.attackRank = json["attackRank"].GetInt();
			if(json.HasMember("botEnabled"))
				champion.botEnabled = json["botEnabled"].GetBool();
			if(json.HasMember("botMmEnabled"))
				champion.botMmEnabled = json["botMmEnabled"].GetBool();
			if(json.HasMember("defenseRank"))
				champion.defenseRank = json["defenseRank"].GetInt();
			if(json.HasMember("difficultyRank"))
				champion.difficultyRank = json["difficultyRank"].GetInt();
			if(json.HasMember("freeToPlay"))
				champion.freeToPlay = json["freeToPlay"].GetBool();
			if(json.HasMember("id"))
				champion.id = json["id"].GetInt();
			if(json.HasMember("magicRank"))
				champion.magicRank = json["magicRank"].GetInt();
			if(json.HasMember("name"))
				champion.name = json["name"].GetString();
			if(json.HasMember("rankedPlayEnabled"))
				champion.rankedPlayEnabled = json["rankedPlayEnabled"].GetBool();

			return champion;
		}

		ChampionData parseChampionData(const Value& json)
		{
			ChampionData championData;

			if(json.HasMember("allytips"))
				championData.allytips = parseStringVector(json["allytips"]);
			if(json.HasMember("blurb"))
				championData.blurb = json["blurb"].GetString();
			if(json.HasMember("enemytips"))
				championData.enemytips = parseStringVector(json["enemytips"]);
			if(json.HasMember("id"))
				championData.id = json["id"].GetString();
			if(json.HasMember("image"))
				championData.image = parseImage(json["image"]);
			if(json.HasMember("info"))
				championData.info = parseInfo(json["info"]);
			if(json.HasMember("key"))
				championData.key = json["key"].GetString();
			if(json.HasMember("lore"))
				championData.lore = json["lore"].GetString();
			if(json.HasMember("name"))
				championData.name = json["name"].GetString();
			if(json.HasMember("partype"))
				championData.partype = json["partype"].GetString();
			if(json.HasMember("passive"))
				championData.passive = parsePassive(json["passive"]);
			if(json.HasMember("stats"))
				championData.stats = parseStats(json["stats"]);
			if(json.HasMember("tags"))
				championData.tags = parseStringVector(json["tags"]);
			if(json.HasMember("title"))
				championData.title = json["title"].GetString();

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

			if(json.HasMember("format"))
				championDataList.format = json["format"].GetString();
			if(json.HasMember("type"))
				championDataList.type = json["type"].GetString();
			if(json.HasMember("version"))
				championDataList.version = json["version"].GetString();
			if(json.HasMember("keys"))
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

			if(json.HasMember("cooldown"))
				championSpell.cooldown = parseIntVector(json["cooldown"]);
			if(json.HasMember("cooldownBurn"))
				championSpell.cooldownBurn = json["cooldownBurn"].GetString();
			if(json.HasMember("cost"))
				championSpell.cost = parseIntVector(json["cost"]);
			if(json.HasMember("costBurn"))
				championSpell.costBurn = json["costBurn"].GetString();
			if(json.HasMember("costType"))
				championSpell.costType = json["costType"].GetString();
			if(json.HasMember("description"))
				championSpell.description = json["description"].GetString();
			if(json.HasMember("effect"))
				championSpell.effect = parse2DIntVector(json["effect"]);
			if(json.HasMember("effectBurn"))
				championSpell.effectBurn = parseStringVector(json["effectBurn"]);
			if(json.HasMember("id"))
				championSpell.id = json["id"].GetString();
			if(json.HasMember("image"))
				championSpell.image = parseImage(json["image"]);
			if(json.HasMember("leveltip"))
				championSpell.leveltip = parseLevelTip(json["leveltip"]);
			if(json.HasMember("maxrank"))
				championSpell.maxrank = json["maxrank"].GetInt();
			if(json.HasMember("name"))
				championSpell.name = json["name"].GetString();
			if(json.HasMember("range"))
				championSpell.range = parseIntVector(json["range"]);
			if(json.HasMember("rangeBurn"))
				championSpell.rangeBurn = json["rangeBurn"].GetString();
			if(json.HasMember("resource"))
				championSpell.resource = json["resource"].GetString();
			if(json.HasMember("tooltip"))
				championSpell.tooltip = json["tooltip"].GetString();

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

			if(json.HasMember("championId"))
				game.championId = json["championId"].GetInt();
			if(json.HasMember("createDate"))
				game.createDate = json["createDate"].GetInt64();
			if(json.HasMember("gameId"))
				game.gameId = json["gameId"].GetInt64();
			if(json.HasMember("gameMode"))
				game.gameMode = json["gameMode"].GetString();
			if(json.HasMember("gameType"))
				game.gameType = json["gameType"].GetString();
			if(json.HasMember("invalid"))
				game.invalid = json["invalid"].GetBool();
			if(json.HasMember("level"))
				game.level = json["level"].GetInt();
			if(json.HasMember("mapId"))
				game.mapId = json["mapId"].GetInt();
			if(json.HasMember("spell1"))
				game.spell1 = json["spell1"].GetInt();
			if(json.HasMember("spell2"))
				game.spell2 = json["spell2"].GetInt();
			if(json.HasMember("stats"))
				game.stats = parseRawStats(json["stats"]);
			if(json.HasMember("subType"))
				game.subType = json["subType"].GetString();
			if(json.HasMember("teamId"))
				game.teamId = json["teamId"].GetInt();

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

			if(json.HasMember("full"))
				image.full = json["full"].GetString();
			if(json.HasMember("group"))
				image.group = json["group"].GetString();
			if(json.HasMember("h"))
				image.h = json["h"].GetInt();
			if(json.HasMember("sprite"))
				image.sprite = json["sprite"].GetString();
			if(json.HasMember("w"))
				image.w = json["w"].GetInt();
			if(json.HasMember("x"))
				image.x = json["x"].GetInt();
			if(json.HasMember("y"))
				image.y = json["y"].GetInt();

			return image;
		}

		Info parseInfo(const Value& json)
		{
			Info info;

			if(json.HasMember("attack"))
				info.attack = json["attack"].GetInt();
			if(json.HasMember("defense"))
				info.defense = json["defense"].GetInt();
			if(json.HasMember("difficulty"))
				info.difficulty = json["difficulty"].GetInt();
			if(json.HasMember("magic"))
				info.magic = json["magic"].GetInt();

			return info;
		}

		Item parseItem(const Value& json)
		{
			Item item;

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

			if(json.HasMember("name"))
				league.name = json["name"].GetString();
			if(json.HasMember("participantId"))
				league.participantId = json["participantId"].GetString();
			if(json.HasMember("queue"))
				league.queue = json["queue"].GetString();
			if(json.HasMember("tier"))
				league.tier = json["tier"].GetString();

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

			if(json.HasMember("isFreshBlood"))
				leagueItem.isFreshBlood = json["isFreshBlood"].GetBool();
			if(json.HasMember("isHotStreak"))
				leagueItem.isHotStreak = json["isHotStreak"].GetBool();
			if(json.HasMember("isInactive"))
				leagueItem.isInactive = json["isInactive"].GetBool();
			if(json.HasMember("isVeteran"))
				leagueItem.isVeteran = json["isVeteran"].GetBool();
			if(json.HasMember("lastPlayed"))
				leagueItem.lastPlayed = json["lastPlayed"].GetInt64();
			if(json.HasMember("leagueName"))
				leagueItem.leagueName = json["leagueName"].GetString();
			if(json.HasMember("leaguePoints"))
				leagueItem.leaguePoints = json["leaguePoints"].GetInt();
			if(json.HasMember("miniSeries"))
				leagueItem.miniSeries = parseMiniSeries(json["miniSeries"]);
			if(json.HasMember("playerOrTeamId"))
				leagueItem.playerOrTeamId = json["playerOrTeamId"].GetString();
			if(json.HasMember("playerOrTeamName"))
				leagueItem.playerOrTeamName = json["playerOrTeamName"].GetString();
			if(json.HasMember("queueType"))
				leagueItem.queueType = json["queueType"].GetString();
			if(json.HasMember("rank"))
				leagueItem.rank = json["rank"].GetString();
			if(json.HasMember("tier"))
				leagueItem.tier = json["tier"].GetString();
			if(json.HasMember("wins"))
				leagueItem.wins = json["wins"].GetInt();

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

			if(json.HasMember("effect"))
				levelTip.effect = parseStringVector(json["effect"]);
			if(json.HasMember("label"))
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
			
			if(json.HasMember("losses"))
				miniSeries.losses = json["losses"].GetInt();
			if(json.HasMember("target"))
				miniSeries.target = json["target"].GetInt();
			if(json.HasMember("timeLeftToPlayMillis"))
				miniSeries.timeLeftToPlayMillis = json["timeLeftToPlayMillis"].GetInt64();
			if(json.HasMember("wins"))
				miniSeries.wins = json["wins"].GetInt();
			if(json.HasMember("progress"))
				miniSeries.progress = parseCharVector(json["progress"]);

			return miniSeries;
		}

		Passive parsePassive(const Value& json)
		{
			Passive passive;

			if(json.HasMember("description"))
				passive.description = json["description"].GetString();
			if(json.HasMember("image"))
				passive.image = parseImage(json["image"]);
			if(json.HasMember("name"))
				passive.name = json["name"].GetString();

			return passive;
		}

		Player parsePlayer(const Value& json)
		{
			Player player;

			if(json.HasMember("championId"))
				player.championId = json["championId"].GetInt();
			if(json.HasMember("summonerId"))
				player.summonerId = json["summonerId"].GetInt64();
			if(json.HasMember("teamId"))
				player.teamId = json["teamId"].GetInt();

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

			if(json.HasMember("assists"))
				rawStats.assists = json["assists"].GetInt();
			if(json.HasMember("barracksKilled"))
				rawStats.barracksKilled = json["barracksKilled"].GetInt();
			if(json.HasMember("championsKilled"))
				rawStats.championsKilled = json["championsKilled"].GetInt();
			if(json.HasMember("combatPlayerScore"))
				rawStats.combatPlayerScore = json["combatPlayerScore"].GetInt();
			if(json.HasMember("consumablesPurchased"))
				rawStats.consumablesPurchased = json["consumablesPurchased"].GetInt();
			if(json.HasMember("damageDealtPlayer"))
				rawStats.damageDealtPlayer = json["damageDealtPlayer"].GetInt();
			if(json.HasMember("doubleKills"))
				rawStats.doubleKills = json["doubleKills"].GetInt();
			if(json.HasMember("firstBlood"))
				rawStats.firstBlood = json["firstBlood"].GetInt();
			if(json.HasMember("gold"))
				rawStats.gold = json["gold"].GetInt();
			if(json.HasMember("goldEarned"))
				rawStats.goldEarned = json["goldEarned"].GetInt();
			if(json.HasMember("goldSpent"))
				rawStats.goldSpent = json["goldSpent"].GetInt();
			if(json.HasMember("item0"))
				rawStats.item0 = json["item0"].GetInt();
			if(json.HasMember("item1"))
				rawStats.item1 = json["item1"].GetInt();
			if(json.HasMember("item2"))
				rawStats.item2 = json["item2"].GetInt();
			if(json.HasMember("item3"))
				rawStats.item3 = json["item3"].GetInt();
			if(json.HasMember("item4"))
				rawStats.item4 = json["item4"].GetInt();
			if(json.HasMember("item5"))
				rawStats.item5 = json["item5"].GetInt();
			if(json.HasMember("item6"))
				rawStats.item6 = json["item6"].GetInt();
			if(json.HasMember("itemsPurchased"))
				rawStats.itemsPurchased = json["itemsPurchased"].GetInt();
			if(json.HasMember("killingSprees"))
				rawStats.killingSprees = json["killingSprees"].GetInt();
			if(json.HasMember("largestCriticalStrike"))
				rawStats.largestCriticalStrike = json["largestCriticalStrike"].GetInt();
			if(json.HasMember("largestKillingSpree"))
				rawStats.largestKillingSpree = json["largestKillingSpree"].GetInt();
			if(json.HasMember("largestMultiKill"))
				rawStats.largestMultiKill = json["largestMultiKill"].GetInt();
			if(json.HasMember("legendaryItemsCreated"))
				rawStats.legendaryItemsCreated = json["legendaryItemsCreated"].GetInt();
			if(json.HasMember("level"))
				rawStats.level = json["level"].GetInt();
			if(json.HasMember("magicDamageDealtPlayer"))
				rawStats.magicDamageDealtPlayer = json["magicDamageDealtPlayer"].GetInt();
			if(json.HasMember("magicDamageDealtToChampions"))
				rawStats.magicDamageDealtToChampions = json["magicDamageDealtToChampions"].GetInt();
			if(json.HasMember("magicDamageTaken"))
				rawStats.magicDamageTaken = json["magicDamageTaken"].GetInt();
			if(json.HasMember("minionsDenied"))
				rawStats.minionsDenied = json["minionsDenied"].GetInt();
			if(json.HasMember("minionsKilled"))
				rawStats.minionsKilled = json["minionsKilled"].GetInt();
			if(json.HasMember("neutralMinionsKilled"))
				rawStats.neutralMinionsKilled = json["neutralMinionsKilled"].GetInt();
			if(json.HasMember("neutralMinionsKilledEnemyJungle"))
				rawStats.neutralMinionsKilledEnemyJungle = json["neutralMinionsKilledEnemyJungle"].GetInt();
			if(json.HasMember("neutralMinionsKilledYourJungle"))
				rawStats.neutralMinionsKilledYourJungle = json["neutralMinionsKilledYourJungle"].GetInt();
			if(json.HasMember("nexusKilled"))
				rawStats.nexusKilled = json["nexusKilled"].GetBool();
			if(json.HasMember("nodeCapture"))
				rawStats.nodeCapture = json["nodeCapture"].GetInt();
			if(json.HasMember("nodeCaptureAssist"))
				rawStats.nodeCaptureAssist = json["nodeCaptureAssist"].GetInt();
			if(json.HasMember("nodeNeutralize"))
				rawStats.nodeNeutralize = json["nodeNeutralize"].GetInt();
			if(json.HasMember("nodeNeutralizeAssist"))
				rawStats.nodeNeutralizeAssist = json["nodeNeutralizeAssist"].GetInt();
			if(json.HasMember("numDeaths"))
				rawStats.numDeaths = json["numDeaths"].GetInt();
			if(json.HasMember("numItemsBought"))
				rawStats.numItemsBought = json["numItemsBought"].GetInt();
			if(json.HasMember("objectivePlayerScore"))
				rawStats.objectivePlayerScore = json["objectivePlayerScore"].GetInt();
			if(json.HasMember("pentaKills"))
				rawStats.pentaKills = json["pentaKills"].GetInt();
			if(json.HasMember("physicalDamageDealtPlayer"))
				rawStats.physicalDamageDealtPlayer = json["physicalDamageDealtPlayer"].GetInt();
			if(json.HasMember("physicalDamageDealtToChampions"))
				rawStats.physicalDamageDealtToChampions = json["physicalDamageDealtToChampions"].GetInt();
			if(json.HasMember("physicalDamageTaken"))
				rawStats.physicalDamageTaken = json["physicalDamageTaken"].GetInt();
			if(json.HasMember("quadraKills"))
				rawStats.quadraKills = json["quadraKills"].GetInt();
			if(json.HasMember("sightWardsBought"))
				rawStats.sightWardsBought = json["sightWardsBought"].GetInt();
			if(json.HasMember("spell1Cast"))
				rawStats.spell1Cast = json["spell1Cast"].GetInt();
			if(json.HasMember("spell2Cast"))
				rawStats.spell2Cast = json["spell2Cast"].GetInt();
			if(json.HasMember("spell3Cast"))
				rawStats.spell3Cast = json["spell3Cast"].GetInt();
			if(json.HasMember("spell4Cast"))
				rawStats.spell4Cast = json["spell4Cast"].GetInt();
			if(json.HasMember("summonSpell1Cast"))
				rawStats.summonSpell1Cast = json["summonSpell1Cast"].GetInt();
			if(json.HasMember("summonSpell2Cast"))
				rawStats.summonSpell2Cast = json["summonSpell2Cast"].GetInt();
			if(json.HasMember("superMonsterKilled"))
				rawStats.superMonsterKilled = json["superMonsterKilled"].GetInt();
			if(json.HasMember("team"))
				rawStats.team = json["team"].GetInt();
			if(json.HasMember("teamObjective"))
				rawStats.teamObjective = json["teamObjective"].GetInt();
			if(json.HasMember("timePlayed"))
				rawStats.timePlayed = json["timePlayed"].GetInt();
			if(json.HasMember("totalDamageDealt"))
				rawStats.totalDamageDealt = json["totalDamageDealt"].GetInt();
			if(json.HasMember("totalDamageDealtToChampions"))
				rawStats.totalDamageDealtToChampions = json["totalDamageDealtToChampions"].GetInt();
			if(json.HasMember("totalDamageTaken"))
				rawStats.totalDamageTaken = json["totalDamageTaken"].GetInt();
			if(json.HasMember("totalHeal"))
				rawStats.totalHeal = json["totalHeal"].GetInt();
			if(json.HasMember("totalPlayerScore"))
				rawStats.totalPlayerScore = json["totalPlayerScore"].GetInt();
			if(json.HasMember("totalScoreRank"))
				rawStats.totalScoreRank = json["totalScoreRank"].GetInt();
			if(json.HasMember("totalTimeCrowdControlDealt"))
				rawStats.totalTimeCrowdControlDealt = json["totalTimeCrowdControlDealt"].GetInt();
			if(json.HasMember("totalUnitsHealed"))
				rawStats.totalUnitsHealed = json["totalUnitsHealed"].GetInt();
			if(json.HasMember("tripleKills"))
				rawStats.tripleKills = json["tripleKills"].GetInt();
			if(json.HasMember("trueDamageDealtPlayer"))
				rawStats.trueDamageDealtPlayer = json["trueDamageDealtPlayer"].GetInt();
			if(json.HasMember("trueDamageDealtToChampions"))
				rawStats.trueDamageDealtToChampions = json["trueDamageDealtToChampions"].GetInt();
			if(json.HasMember("trueDamageTaken"))
				rawStats.trueDamageTaken = json["trueDamageTaken"].GetInt();
			if(json.HasMember("turretsKilled"))
				rawStats.turretsKilled = json["turretsKilled"].GetInt();
			if(json.HasMember("unrealKills"))
				rawStats.unrealKills = json["unrealKills"].GetInt();
			if(json.HasMember("victoryPointTotal"))
				rawStats.victoryPointTotal = json["victoryPointTotal"].GetInt();
			if(json.HasMember("visionWardsBought"))
				rawStats.visionWardsBought = json["visionWardsBought"].GetInt();
			if(json.HasMember("wardKilled"))
				rawStats.wardKilled = json["wardKilled"].GetInt();
			if(json.HasMember("wardPlaced"))
				rawStats.wardPlaced = json["wardPlaced"].GetInt();
			if(json.HasMember("win"))
				rawStats.win = json["win"].GetBool();

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

			if(json.HasMember("summonerId"))
				recentGames.summonerId = json["summonerId"].GetInt64();

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

			if(json.HasMember("champion"))
				recommended.champion = json["champion"].GetString();
			if(json.HasMember("map"))
				recommended.map = json["map"].GetString();
			if(json.HasMember("mode"))
				recommended.mode = json["mode"].GetString();
			if(json.HasMember("priority"))
				recommended.priority = json["priority"].GetBool();
			if(json.HasMember("title"))
				recommended.title = json["title"].GetString();
			if(json.HasMember("type"))
				recommended.type = json["type"].GetString();

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

			if(json.HasMember("id"))
				skin.id = json["id"].GetString();
			if(json.HasMember("name"))
				skin.name = json["name"].GetString();
			if(json.HasMember("num"))
				skin.num = json["num"].GetInt();

			return skin;
		}

		SpellVars parseSpellVars(const Value& json)
		{
			SpellVars spellVars;

			if(json.HasMember("link"))
				spellVars.link = json["link"].GetString();
			if(json.HasMember("coeff"))
				spellVars.coeff = parseDoubleVector(json["coeff"]);
			if(json.HasMember("key"))
				spellVars.key = json["key"].GetString();

			return spellVars;
		}

		Stats parseStats(const Value& json)
		{
			Stats stats;

			if(json.HasMember("armor"))
				stats.armor = json["armor"].GetDouble();
			if(json.HasMember("armorperlevel"))
				stats.armorperlevel = json["armorperlevel"].GetDouble();
			if(json.HasMember("attackdamage"))
				stats.attackdamage = json["attackdamage"].GetDouble();
			if(json.HasMember("attackdamageperlevel"))
				stats.attackdamageperlevel = json["attackdamageperlevel"].GetDouble();
			if(json.HasMember("attackrange"))
				stats.attackrange = json["attackrange"].GetDouble();
			if(json.HasMember("attackspeedoffset"))
				stats.attackspeedoffset = json["attackspeedoffset"].GetDouble();
			if(json.HasMember("attackspeedperlevel"))
				stats.attackspeedperlevel = json["attackspeedperlevel"].GetDouble();
			if(json.HasMember("crit"))
				stats.crit = json["crit"].GetDouble();
			if(json.HasMember("critperlevel"))
				stats.critperlevel = json["critperlevel"].GetDouble();
			if(json.HasMember("hp"))
				stats.hp = json["hp"].GetDouble();
			if(json.HasMember("hpperlevel"))
				stats.hpperlevel = json["hpperlevel"].GetDouble();
			if(json.HasMember("hpregen"))
				stats.hpregen = json["hpregen"].GetDouble();
			if(json.HasMember("hpregenperlevel"))
				stats.hpregenperlevel = json["hpregenperlevel"].GetDouble();
			if(json.HasMember("movespeed"))
				stats.movespeed = json["movespeed"].GetDouble();
			if(json.HasMember("mp"))
				stats.mp = json["mp"].GetDouble();
			if(json.HasMember("mpperlevel"))
				stats.mpperlevel = json["mpperlevel"].GetDouble();
			if(json.HasMember("mpregen"))
				stats.mpregen = json["mpregen"].GetDouble();
			if(json.HasMember("mpregenperlevel"))
				stats.mpregenperlevel = json["mpregenperlevel"].GetDouble();
			if(json.HasMember("spellblock"))
				stats.spellblock = json["spellblock"].GetDouble();
			if(json.HasMember("spellblockperlevel"))
				stats.spellblockperlevel = json["spellblockperlevel"].GetDouble();

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
	}
}