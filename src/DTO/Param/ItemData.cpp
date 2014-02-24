#include <RiotCPP/DTO/Param/ItemData.hpp>

namespace Riot
{
	std::string toString(ItemData itemData)
	{
		switch(itemData)
		{
		case ItemData::ALL:
			return "all";
		case ItemData::GOLD:
			return "gold";
		case ItemData::COLLOQ:
			return "colloq";
		case ItemData::CONSUMED:
			return "consumed";
		case ItemData::STACKS:
			return "stacks";
		case ItemData::DEPTH:
			return "depth";
		case ItemData::CONSUME_ON_FULL:
			return "consumeOnFull";
		case ItemData::FROM:
			return "from";
		case ItemData::INTO:
			return "into";
		case ItemData::SPECIAL_RECIPE:
			return "specialRecipe";
		case ItemData::IN_STORE:
			return "inStore";
		case ItemData::HIDE_FROM_ALL:
			return "hideFromAll";
		case ItemData::REQUIRED_CHAMPION:
			return "requiredChampion";
		case ItemData::TAGS:
			return "tags";
		case ItemData::MAPS:
			return "maps";
		case ItemData::IMAGE:
			return "image";
		case ItemData::STATS:
			return "stats";
		}
		return "";
	}
}