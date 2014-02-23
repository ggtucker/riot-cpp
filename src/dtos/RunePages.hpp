#ifndef RUNE_PAGES_HPP
#define RUNE_PAGES_HPP

#include <vector>
#include "DTOField.hpp"
#include "RunePage.hpp"

namespace Riot
{
	struct RunePages
	{
		DTOField<std::vector<RunePage>> pages;
		DTOField<long long> summonerId;
	};
}

#endif // RUNE_PAGES_HPP