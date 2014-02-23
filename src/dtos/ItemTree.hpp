#ifndef ITEM_TREE_HPP
#define ITEM_TREE_HPP

#include <vector>
#include <string>
#include "DTOField.hpp"

namespace Riot
{
	struct ItemTree
	{
		DTOField<std::string> header;
		DTOField<std::vector<std::string>> tags;
	};
}

#endif // ITEM_TREE_HPP