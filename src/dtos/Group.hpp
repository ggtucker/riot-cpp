#ifndef GROUP_HPP
#define GROUP_HPP

#include <string>
#include "DTOField.hpp"

namespace Riot
{
	struct Group
	{
		DTOField<std::string> MaxGroupOwnable;
		DTOField<std::string> id;
	};
}

#endif // GROUP_HPP