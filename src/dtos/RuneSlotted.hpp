#ifndef RUNE_SLOTTED_HPP
#define RUNE_SLOTTED_HPP

#include <string>
#include "DTOField.hpp"

namespace Riot
{
	struct RuneSlotted
	{
		DTOField<std::string> description;
		DTOField<int> id;
		DTOField<std::string> name;
		DTOField<int> tier;
	};
}

#endif // RUNE_SLOTTED_HPP