#ifndef TEAM_STAT_DETAIL_HPP
#define TEAM_STAT_DETAIL_HPP

#include <string>
#include "DTOField.hpp"

namespace Riot
{
	struct TeamStatDetail
	{
		DTOField<int> averageGamesPlayed;
		DTOField<std::string> fullId;
		DTOField<int> losses;
		DTOField<std::string> teamStatType;
		DTOField<int> wins;
	};
}

#endif // TEAM_STAT_DETAIL_HPP