#ifndef TEAM_STAT_DETAIL_HPP
#define TEAM_STAT_DETAIL_HPP

#include <string>

namespace Riot
{
	struct TeamStatDetail
	{
		int averageGamesPlayed;
		std::string fullId;
		int losses;
		std::string teamStatType;
		int wins;
	};
}

#endif // TEAM_STAT_DETAIL_HPP