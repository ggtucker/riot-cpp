#ifndef SPELL_DATA_HPP
#define SPELL_DATA_HPP

#include <string>

namespace Riot
{
	enum class SpellData
	{
		ALL = 0,
		TOOL_TIP,
		LEVEL_TIP,
		IMAGE,
		RESOURCE,
		MAX_RANK,
		COST,
		COST_TYPE,
		COST_BURN,
		COOLDOWN,
		COOLDOWN_BURN,
		EFFECT,
		EFFECT_BURN,
		VARS,
		RANGE,
		RANGE_BURN,
		KEY,
		MODES
	};

	std::string toString(SpellData spellData);
}

#endif // SPELL_DATA_HPP