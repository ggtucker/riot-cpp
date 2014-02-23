#ifndef ROSTER_HPP
#define ROSTER_HPP

#include <vector>
#include "DTOField.hpp"
#include "TeamMemberInfo.hpp"

namespace Riot
{
	struct Roster
	{
		DTOField<std::vector<TeamMemberInfo>> memberList;
		DTOField<long long> ownerId;
	};
}

#endif // ROSTER_HPP