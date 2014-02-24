#ifndef RANKED_STATS_HPP
#define RANKED_STATS_HPP

#include <vector>
#include "ChampionStats.hpp"

namespace Riot
{
	struct RankedStats
	{
		std::vector<ChampionStats> champions;
		long long modifyDate;
		long long summonerId;
	};
}

#endif // RANKED_STATS_HPP