#include <RiotCPP/DTO/Param/SpellData.hpp>

namespace Riot
{
	std::string toString(SpellData spellData)
	{
		switch(spellData)
		{
		case SpellData::ALL:
			return "all";
		case SpellData::TOOL_TIP:
			return "tooltip";
		case SpellData::LEVEL_TIP:
			return "leveltip";
		case SpellData::IMAGE:
			return "image";
		case SpellData::RESOURCE:
			return "resource";
		case SpellData::MAX_RANK:
			return "maxrank";
		case SpellData::COST:
			return "cost";
		case SpellData::COST_TYPE:
			return "costType";
		case SpellData::COST_BURN:
			return "costBurn";
		case SpellData::COOLDOWN:
			return "cooldown";
		case SpellData::COOLDOWN_BURN:
			return "cooldownBurn";
		case SpellData::EFFECT:
			return "effect";
		case SpellData::EFFECT_BURN:
			return "effectBurn";
		case SpellData::VARS:
			return "vars";
		case SpellData::RANGE:
			return "range";
		case SpellData::RANGE_BURN:
			return "rangeBurn";
		case SpellData::KEY:
			return "key";
		case SpellData::MODES:
			return "modes";
		}
		return "";
	}
}