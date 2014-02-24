#ifndef TEAMSTAT__SUMMARY_HPP
#define TEAMSTAT__SUMMARY_HPP

#include <vector>
#include <string>
#include "TeamStatDetail.hpp"

namespace Riot
{
	struct TeamStatSummary
	{
		std::string fullId;
		std::vector<TeamStatDetail> teamStatDetails;
	};
}

#endif // TEAMSTAT__SUMMARY_HPP