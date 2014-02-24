#ifndef RECOMMENDED_HPP
#define RECOMMENDED_HPP

#include <vector>
#include <string>
#include "Block.hpp"

namespace Riot
{
	struct Recommended
	{
		std::vector<Block> blocks;
		std::string champion;
		std::string map;
		std::string mode;
		bool priority;
		std::string title;
		std::string type;
	};
}

#endif // RECOMMENDED_HPP