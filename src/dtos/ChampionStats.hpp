#ifndef CHAMPION_STATS_HPP
#define CHAMPION_STATS_HPP

#include <string>
#include "DTOField.hpp"
#include "AggregatedStats.hpp"

namespace Riot
{
	struct ChampionStats
	{
		DTOField<int> id;
		DTOField<std::string> name;
		DTOField<AggregatedStats> stats;
	};
}

#endif // CHAMPION_STATS_HPP