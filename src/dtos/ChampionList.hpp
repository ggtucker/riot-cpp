#ifndef CHAMPION_LIST_HPP
#define CHAMPION_LIST_HPP

#include <vector>
#include "Champion.hpp"

namespace Riot
{
	struct ChampionList
	{
		std::vector<Champion> champions;
	};
}

#endif // CHAMPION_LIST_HPP