#ifndef ROSTER_HPP
#define ROSTER_HPP

#include <vector>
#include "TeamMemberInfo.hpp"

namespace Riot
{
	struct Roster
	{
		std::vector<TeamMemberInfo> memberList;
		long long ownerId;
	};
}

#endif // ROSTER_HPP