#ifndef TEAM_HPP
#define TEAM_HPP

#include <vector>
#include <string>
#include "DTOField.hpp"
#include "MatchHistorySummary.hpp"
#include "MessageOfDay.hpp"
#include "Roster.hpp"
#include "TeamStatSummary.hpp"

namespace Riot
{
	struct Team
	{
		DTOField<long long> createDate;
		DTOField<std::string> fullId;
		DTOField<long long> lastGameDate;
		DTOField<long long> lastJoinDate;
		DTOField<long long> lastJoinedRankedTeamQueueDate;
		DTOField<std::vector<MatchHistorySummary>> matchHistory;
		DTOField<MessageOfDay> messageOfDay;
		DTOField<long long> modifyDate;
		DTOField<std::string> name;
		DTOField<Roster> roster;
		DTOField<long long> secondLastJoinDate;
		DTOField<std::string> status;
		DTOField<std::string> tag;
		DTOField<TeamStatSummary> teamStatSummary;
		DTOField<long long> thirdLastJoinDate;
	};
}

#endif // TEAM_HPP