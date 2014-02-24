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

			return block;
		}

		BlockItem parseBlockItem(const Value& json)
		{
			BlockItem blockItem;

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

			return championData;
		}

		ChampionDataList parseChampionDataList(const Value& json)
		{
			ChampionDataList championDataList;

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

			return image;
		}

		Info parseInfo(const Value& json)
		{
			Info info;

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
				const Value& playerListDto = json["entries"];
				for (SizeType i = 0; i < playerListDto.Size(); i++)
				{
					entries.push_back(parseLeagueItem(playerListDto[i]));
				}
				league.entries = entries;
			}

			return league;
		}

		std::vector<League> parseLeagueList(const Value& json)
		{
			std::vector<League> leagueList;

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

			return leagueItemList;
		}

		LevelTip parseLevelTip(const Value& json)
		{
			LevelTip levelTip;

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
			{
				std::vector<char> progress;
				const Value& progressDto = json["progress"];
				for (SizeType i = 0; i < progressDto.Size(); i++)
				{
					progress.push_back(progressDto[i].GetString()[0]);
				}
				miniSeries.progress = progress;
			}

			return miniSeries;
		}

		Passive parsePassive(const Value& json)
		{
			Passive passive;

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

			return skin;
		}

		SpellVars parseSpellVars(const Value& json)
		{
			SpellVars spellVars;

			return spellVars;
		}

		Stats parseStats(const Value& json)
		{
			Stats stats;

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
	}
}