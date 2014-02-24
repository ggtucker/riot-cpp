#ifndef ITEM_LIST_HPP
#define ITEM_LIST_HPP

#include <map>
#include <vector>
#include <string>
#include "BasicData.hpp"
#include "Item.hpp"
#include "Group.hpp"
#include "ItemTree.hpp"

namespace Riot
{
	struct ItemList
	{
		BasicData basic;
		std::map<std::string, Item> data;
		std::vector<Group> groups;
		std::vector<ItemTree> tree;
		std::string type;
		std::string version;
	};
}

#endif // ITEM_LIST_HPP