#ifndef LEAGUE_HPP
#define LEAGUE_HPP

#include <vector>
#include <string>
#include "LeagueItem.hpp"

namespace Riot
{
	struct League
	{
		std::vector<LeagueItem> entries;
		std::string name;
		std::string participantId;
		std::string queue;
		std::string tier;
	};
}

#endif // LEAGUE_HPP