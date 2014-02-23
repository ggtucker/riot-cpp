#ifndef PLAYERSTATS__SUMMARY_HPP
#define PLAYERSTATS__SUMMARY_HPP

#include "AggregatedStats.hpp"

namespace Riot
{
	struct PlayerStatsSummary
	{
		AggregatedStats aggregatedStats;
		int losses;
		long long modifyDate;
		std::string playerStatSummaryType;
		int wins;
	};
}

#endif // PLAYERSTATS__SUMMARY_HPP