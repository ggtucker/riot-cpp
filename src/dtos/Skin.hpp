#ifndef SKIN_HPP
#define SKIN_HPP

#include <string>
#include "DTOField.hpp"

namespace Riot
{
	struct Skin
	{
		DTOField<std::string> id;
		DTOField<std::string> name;
		DTOField<int> num;
	};
}

#endif // SKIN_HPP