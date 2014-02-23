#ifndef AGGREGATED_STATS_HPP
#define AGGREGATED_STATS_HPP

#include "DTOField.hpp"

namespace Riot
{
	struct AggregatedStats
	{
		DTOField<int> averageAssists;
		DTOField<int> averageChampionsKilled;
		DTOField<int> averageCombatPlayerScore;
		DTOField<int> averageNodeCapture;
		DTOField<int> averageNodeCaptureAssist;
		DTOField<int> averageNodeNeutralize;
		DTOField<int> averageNodeNeutralizeAssist;
		DTOField<int> averageNumDeaths;
		DTOField<int> averageObjectivePlayerScore;
		DTOField<int> averageTeamObjective;
		DTOField<int> averageTotalPlayerScore;
		DTOField<int> botGamesPlayed;
		DTOField<int> killingSpree;
		DTOField<int> maxAssists;
		DTOField<int> maxChampionsKilled;
		DTOField<int> maxCombatPlayerScore;
		DTOField<int> maxLargestCriticalStrike;
		DTOField<int> maxLargestKillingSpree;
		DTOField<int> maxNodeCapture;
		DTOField<int> maxNodeCaptureAssist;
		DTOField<int> maxNodeNeutralize;
		DTOField<int> maxNodeNeutralizeAssist;
		DTOField<int> maxNumDeaths;
		DTOField<int> maxObjectivePlayerScore;
		DTOField<int> maxTeamObjective;
		DTOField<int> maxTimePlayed;
		DTOField<int> maxTimeSpentLiving;
		DTOField<int> maxTotalPlayerScore;
		DTOField<int> mostChampionKillsPerSession;
		DTOField<int> mostSpellsCast;
		DTOField<int> normalGamesPlayed;
		DTOField<int> rankedPremadeGamesPlayed;
		DTOField<int> rankedSoloGamesPlayed;
		DTOField<int> totalAssists;
		DTOField<int> totalChampionKills;
		DTOField<int> totalDamageDealt;
		DTOField<int> totalDamageTaken;
		DTOField<int> totalDeathsPerSession;
		DTOField<int> totalDoubleKills;
		DTOField<int> totalFirstBlood;
		DTOField<int> totalGoldEarned;
		DTOField<int> totalHeal;
		DTOField<int> totalMagicDamageDealt;
		DTOField<int> totalMinionKills;
		DTOField<int> totalNeutralMinionsKilled;
		DTOField<int> totalNodeCapture;
		DTOField<int> totalNodeNeutralize;
		DTOField<int> totalPentaKills;
		DTOField<int> totalPhysicalDamageDealt;
		DTOField<int> totalQuadraKills;
		DTOField<int> totalSessionsLost;
		DTOField<int> totalSessionsPlayed;
		DTOField<int> totalSessionsWon;
		DTOField<int> totalTripleKills;
		DTOField<int> totalTurretsKilled;
		DTOField<int> totalUnrealKills;
	};
}

#endif // AGGREGATED_STATS_HPP