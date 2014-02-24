#include <RiotCPP/DTO/Param/ItemListData.hpp>

namespace Riot
{
	std::string toString(ItemListData itemListData)
	{
		switch(itemListData)
		{
		case ItemListData::ALL:
			return "all";
		case ItemListData::COLLOQ:
			return "colloq";
		case ItemListData::CONSUME_ON_FULL:
			return "consumeOnFull";
		case ItemListData::CONSUMED:
			return "consumed";
		case ItemListData::DEPTH:
			return "depth";
		case ItemListData::FROM:
			return "from";
		case ItemListData::GOLD:
			return "gold";
		case ItemListData::GROUPS:
			return "groups";
		case ItemListData::HIDE_FROM_ALL:
			return "hideFromAll";
		case ItemListData::IMAGE:
			return "image";
		case ItemListData::IN_STORE:
			return "inStore";
		case ItemListData::INTO:
			return "into";
		case ItemListData::MAPS:
			return "maps";
		case ItemListData::REQUIRED_CHAMPION:
			return "requiredChampion";
		case ItemListData::SPECIAL_RECIPE:
			return "specialRecipe";
		case ItemListData::STACKS:
			return "stacks";
		case ItemListData::STATS:
			return "stats";
		case ItemListData::TAGS:
			return "tags";
		case ItemListData::TREE:
			return "tree";
		}
		return "";
	}
}