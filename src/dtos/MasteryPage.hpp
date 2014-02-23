#ifndef MASTERY_PAGE_HPP
#define MASTERY_PAGE_HPP

#include <vector>
#include <string>
#include "DTOField.hpp"
#include "Talent.hpp"

namespace Riot
{
	struct MasteryPage
	{
		DTOField<bool> current;
		DTOField<long long> id;
		DTOField<std::string> name;
		DTOField<std::vector<Talent>> talents;
	};
}

#endif // MASTERY_PAGE_HPP