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
			std::vector<Champion> champions;

			if(json.HasMember("champions"))
			{
				const Value& championListDto = json["champions"];
				for (SizeType i = 0; i < championListDto.Size(); i++)
				{
					champions.push_back(parseChampion(championListDto[i]));
				}
			}

			championList.champions = champions;
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

			return league;
		}

		LeagueItem parseLeagueItem(const Value& json)
		{
			LeagueItem leagueItem;

			return leagueItem;
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