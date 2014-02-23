#ifndef LEVEL_TIP_HPP
#define LEVEL_TIP_HPP

#include <vector>
#include <string>
#include "DTOField.hpp"

namespace Riot
{
	struct LevelTip
	{
		DTOField<std::vector<std::string>> effect;
		DTOField<std::vector<std::string>> label;
	};
}

#endif // LEVEL_TIP_HPP