#ifndef BLOCK_ITEM_HPP
#define BLOCK_ITEM_HPP

#include <string>
#include "DTOField.hpp"

namespace Riot
{
	struct BlockItem
	{
		DTOField<int> count;
		DTOField<std::string> id;
	};
}

#endif // BLOCK_ITEM_HPP