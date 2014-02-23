#ifndef CHAMPION_STATS_HPP
#define CHAMPION_STATS_HPP

#include <string>
#include "AggregatedStats.hpp"

namespace Riot
{
	struct ChampionStats
	{
		int id;
		std::string name;
		AggregatedStats stats;
	};
}

#endif // CHAMPION_STATS_HPP