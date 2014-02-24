#ifndef PLAYERSTATS__SUMMARY_LIST_HPP
#define PLAYERSTATS__SUMMARY_LIST_HPP

#include <vector>
#include "PlayerStatsSummary.hpp"

namespace Riot
{
	struct PlayerStatsSummaryList
	{
		std::vector<PlayerStatsSummary> playerStatSummaries;
		long long summonerId;
	};
}

#endif // PLAYERSTATS__SUMMARY_LIST_HPP