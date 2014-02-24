#ifndef MASTERY_PAGE_HPP
#define MASTERY_PAGE_HPP

#include <vector>
#include <string>
#include "Talent.hpp"

namespace Riot
{
	struct MasteryPage
	{
		bool current;
		long long id;
		std::string name;
		std::vector<Talent> talents;
	};
}

#endif // MASTERY_PAGE_HPP