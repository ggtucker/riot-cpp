#ifndef PLAYERSTATS__SUMMARY_LIST_HPP
#define PLAYERSTATS__SUMMARY_LIST_HPP

#include <vector>
#include "DTOField.hpp"
#include "PlayerStatsSummary.hpp"

namespace Riot
{
	struct PlayerStatsSummaryList
	{
		DTOField<std::vector<PlayerStatsSummary>> playerStatSummaries;
		DTOField<long long> summonerId;
	};
}

#endif // PLAYERSTATS__SUMMARY_LIST_HPP