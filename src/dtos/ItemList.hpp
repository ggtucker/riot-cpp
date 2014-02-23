#ifndef ITEM_LIST_HPP
#define ITEM_LIST_HPP

#include <map>
#include <vector>
#include <string>
#include "DTOField.hpp"
#include "BasicData.hpp"
#include "Item.hpp"
#include "Group.hpp"
#include "ItemTree.hpp"

namespace Riot
{
	struct ItemList
	{
		DTOField<BasicData> basic;
		DTOField<std::map<std::string, Item>> data;
		DTOField<std::vector<Group>> groups;
		DTOField<std::vector<ItemTree>> tree;
		DTOField<std::string> type;
		DTOField<std::string> version;
	};
}

#endif // ITEM_LIST_HPP