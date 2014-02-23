#ifndef LEAGUE_HPP
#define LEAGUE_HPP

#include <vector>
#include <string>
#include "DTOField.hpp"
#include "LeagueItem.hpp"

namespace Riot
{
	struct League
	{
		DTOField<std::vector<LeagueItem>> entries;
		DTOField<std::string> name;
		DTOField<std::string> participantId;
		DTOField<std::string> queue;
		DTOField<std::string> tier;
	};
}

#endif // LEAGUE_HPP