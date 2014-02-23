#ifndef TEAMSTAT__SUMMARY_HPP
#define TEAMSTAT__SUMMARY_HPP

#include <vector>
#include <string>
#include "DTOField.hpp"
#include "TeamStatDetail.hpp"

namespace Riot
{
	struct TeamStatSummary
	{
		DTOField<std::string> fullId;
		DTOField<std::vector<TeamStatDetail>> teamStatDetails;
	};
}

#endif // TEAMSTAT__SUMMARY_HPP