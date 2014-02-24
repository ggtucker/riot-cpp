#ifndef TEAM_HPP
#define TEAM_HPP

#include <vector>
#include <string>
#include "MatchHistorySummary.hpp"
#include "MessageOfDay.hpp"
#include "Roster.hpp"
#include "TeamStatSummary.hpp"

namespace Riot
{
	struct Team
	{
		long long createDate;
		std::string fullId;
		long long lastGameDate;
		long long lastJoinDate;
		long long lastJoinedRankedTeamQueueDate;
		std::vector<MatchHistorySummary> matchHistory;
		MessageOfDay messageOfDay;
		long long modifyDate;
		std::string name;
		Roster roster;
		long long secondLastJoinDate;
		std::string status;
		std::string tag;
		TeamStatSummary teamStatSummary;
		long long thirdLastJoinDate;
	};
}

#endif // TEAM_HPP