#ifndef TEAM_MEMBER_INFO_HPP
#define TEAM_MEMBER_INFO_HPP

#include <string>
#include "DTOField.hpp"

namespace Riot
{
	struct TeamMemberInfo
	{
		DTOField<long long> inviteDate;
		DTOField<long long> joinDate;
		DTOField<long long> playerId;
		DTOField<std::string> status;
	};
}

#endif // TEAM_MEMBER_INFO_HPP