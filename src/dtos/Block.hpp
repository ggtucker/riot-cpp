#ifndef BLOCK_HPP
#define BLOCK_HPP

#include <vector>
#include <string>
#include "DTOField.hpp"
#include "BlockItem.hpp"

namespace Riot
{
	struct Block
	{
		DTOField<std::vector<BlockItem>> items;
		DTOField<std::string> type;
	};
}

#endif // BLOCK_HPP