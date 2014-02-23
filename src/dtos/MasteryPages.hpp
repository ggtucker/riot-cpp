#ifndef MASTERY_PAGES_HPP
#define MASTERY_PAGES_HPP

#include <vector>
#include "DTOField.hpp"
#include "MasteryPage.hpp"

namespace Riot
{
	struct MasteryPages
	{
		DTOField<std::vector<MasteryPage>> pages;
		DTOField<long long> summonerId;
	};
}

#endif // MASTERY_PAGES_HPP