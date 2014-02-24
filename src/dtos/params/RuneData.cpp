#include <RiotCPP/DTO/Param/RuneData.hpp>

namespace Riot
{
	std::string toString(RuneData runeData)
	{
		switch(runeData)
		{
		case RuneData::ALL:
			return "all";
		case RuneData::GOLD:
			return "gold";
		case RuneData::COLLOQ:
			return "colloq";
		case RuneData::CONSUMED:
			return "consumed";
		case RuneData::STACKS:
			return "stacks";
		case RuneData::DEPTH:
			return "depth";
		case RuneData::CONSUME_ON_FULL:
			return "consumeOnFull";
		case RuneData::FROM:
			return "from";
		case RuneData::INTO:
			return "into";
		case RuneData::SPECIAL_RECIPE:
			return "specialRecipe";
		case RuneData::IN_STORE:
			return "inStore";
		case RuneData::HIDE_FROM_ALL:
			return "hideFromAll";
		case RuneData::REQUIRED_CHAMPION:
			return "requiredChampion";
		case RuneData::TAGS:
			return "tags";
		case RuneData::MAPS:
			return "maps";
		case RuneData::IMAGE:
			return "image";
		case RuneData::STATS:
			return "stats";
		}
		return "";
	}
}