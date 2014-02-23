#ifndef CHAMPION_LIST_HPP
#define CHAMPION_LIST_HPP

#include <vector>
#include "DTOField.hpp"
#include "Champion.hpp"

namespace Riot
{
	struct ChampionList
	{
		DTOField<std::vector<Champion>> champions;
	};
}

#endif // CHAMPION_LIST_HPP