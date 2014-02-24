#ifndef MASTERY_PAGES_HPP
#define MASTERY_PAGES_HPP

#include <vector>
#include "MasteryPage.hpp"

namespace Riot
{
	struct MasteryPages
	{
		std::vector<MasteryPage> pages;
		long long summonerId;
	};
}

#endif // MASTERY_PAGES_HPP