#ifndef ITEM_LIST_DATA_HPP
#define ITEM_LIST_DATA_HPP

#include <string>

namespace Riot
{
	enum class ItemListData
	{
		ALL = 0,
		COLLOQ,
		CONSUME_ON_FULL,
		CONSUMED,
		DEPTH,
		FROM,
		GOLD,
		GROUPS,
		HIDE_FROM_ALL,
		IMAGE,
		IN_STORE,
		INTO,
		MAPS,
		REQUIRED_CHAMPION,
		SPECIAL_RECIPE,
		STACKS,
		STATS,
		TAGS,
		TREE
	};

	std::string toString(ItemListData itemListData);
}

#endif // ITEM_LIST_DATA_HPP