#ifndef RECOMMENDED_HPP
#define RECOMMENDED_HPP

#include <vector>
#include <string>
#include "DTOField.hpp"
#include "Block.hpp"

namespace Riot
{
	struct Recommended
	{
		DTOField<std::vector<Block>> blocks;
		DTOField<std::string> champion;
		DTOField<std::string> map;
		DTOField<std::string> mode;
		DTOField<bool> priority;
		DTOField<std::string> title;
		DTOField<std::string> type;
	};
}

#endif // RECOMMENDED_HPP