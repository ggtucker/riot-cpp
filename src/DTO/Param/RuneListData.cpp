#include <RiotCPP/DTO/Param/RuneListData.hpp>

namespace Riot
{
	std::string toString(RuneListData runeListData)
	{
		switch(runeListData)
		{
		case RuneListData::ALL:
			return "all";
		case RuneListData::BASIC:
			return "basic";
		case RuneListData::COLLOQ:
			return "colloq";
		case RuneListData::CONSUME_ON_FULL:
			return "consumeOnFull";
		case RuneListData::CONSUMED:
			return "consumed";
		case RuneListData::DEPTH:
			return "depth";
		case RuneListData::FROM:
			return "from";
		case RuneListData::GOLD:
			return "gold";
		case RuneListData::HIDE_FROM_ALL:
			return "hideFromAll";
		case RuneListData::IMAGE:
			return "image";
		case RuneListData::IN_STORE:
			return "inStore";
		case RuneListData::INTO:
			return "into";
		case RuneListData::MAPS:
			return "maps";
		case RuneListData::REQUIRED_CHAMPION:
			return "requiredChampion";
		case RuneListData::SPECIAL_RECIPE:
			return "specialRecipe";
		case RuneListData::STACKS:
			return "stacks";
		case RuneListData::STATS:
			return "stats";
		case RuneListData::TAGS:
			return "tags";
		}
		return "";
	}
}