#ifndef MASTERY_TREE_ITEM_HPP
#define MASTERY_TREE_ITEM_HPP

#include <string>
#include "DTOField.hpp"

namespace Riot
{
	struct MasteryTreeItem
	{
		DTOField<std::string> masteryId;
		DTOField<std::string> prereq;
	};
}

#endif // MASTERY_TREE_ITEM_HPP