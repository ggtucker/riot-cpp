#ifndef BLOCK_HPP
#define BLOCK_HPP

#include <vector>
#include <string>
#include "BlockItem.hpp"

struct Block
{
	std::vector<BlockItem> items;
	std::string type;
};

#endif // BLOCK_HPP