#ifndef PLAYERSTATS__SUMMARY_HPP
#define PLAYERSTATS__SUMMARY_HPP

#include "AggregatedStats.hpp"
#include "DTOField.hpp"

namespace Riot
{
	struct PlayerStatsSummary
	{
		DTOField<AggregatedStats> aggregatedStats;
		DTOField<int> losses;
		DTOField<long long> modifyDate;
		DTOField<std::string> playerStatSummaryType;
		DTOField<int> wins;
	};
}

#endif // PLAYERSTATS__SUMMARY_HPP