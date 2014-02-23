#ifndef TEAM_MEMBER_INFO_HPP
#define TEAM_MEMBER_INFO_HPP

#include <string>

namespace Riot
{
	struct TeamMemberInfo
	{
		long long inviteDate;
		long long joinDate;
		long long playerId;
		std::string status;
	};
}

#endif // TEAM_MEMBER_INFO_HPP