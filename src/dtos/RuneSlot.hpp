#ifndef RUNE_SLOT_HPP
#define RUNE_SLOT_HPP

#include "RuneSlotted.hpp"
#include "DTOField.hpp"

namespace Riot
{
	struct RuneSlot
	{
		DTOField<RuneSlotted> rune;
		DTOField<int> runeSlotId;
	};
}

#endif // RUNE_SLOT_HPP