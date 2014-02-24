#ifndef MASTERY_TREE_ITEM_HPP
#define MASTERY_TREE_ITEM_HPP

#include <string>

namespace Riot
{
	struct MasteryTreeItem
	{
		std::string masteryId;
		std::string prereq;
	};
}

#endif // MASTERY_TREE_ITEM_HPP