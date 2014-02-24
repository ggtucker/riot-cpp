#ifndef RUNE_PAGES_HPP
#define RUNE_PAGES_HPP

#include <vector>
#include "RunePage.hpp"

namespace Riot
{
	struct RunePages
	{
		std::vector<RunePage> pages;
		long long summonerId;
	};
}

#endif // RUNE_PAGES_HPP