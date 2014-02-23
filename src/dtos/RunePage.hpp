#ifndef RUNE_PAGE_HPP
#define RUNE_PAGE_HPP

#include <vector>
#include <string>
#include "DTOField.hpp"
#include "RuneSlot.hpp"

namespace Riot
{
	struct RunePage
	{
		DTOField<bool> current;
		DTOField<long long> id;
		DTOField<std::string> name;
		DTOField<std::vector<RuneSlot>> slots;
	};
}

#endif // RUNE_PAGE_HPP