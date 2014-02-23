#ifndef RUNE_PAGE_HPP
#define RUNE_PAGE_HPP

#include <vector>
#include <string>
#include "RuneSlot.hpp"

namespace Riot
{
	struct RunePage
	{
		bool current;
		long long id;
		std::string name;
		std::vector<RuneSlot> slots;
	};
}

#endif // RUNE_PAGE_HPP