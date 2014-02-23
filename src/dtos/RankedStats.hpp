#ifndef RANKED_STATS_HPP
#define RANKED_STATS_HPP

#include <vector>
#include "DTOField.hpp"
#include "ChampionStats.hpp"

namespace Riot
{
	struct RankedStats
	{
		DTOField<std::vector<ChampionStats>> champions;
		DTOField<long long> modifyDate;
		DTOField<long long> summonerId;
	};
}

#endif // RANKED_STATS_HPP