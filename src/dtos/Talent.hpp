#ifndef TALENT_HPP
#define TALENT_HPP

#include <string>
#include "DTOField.hpp"

namespace Riot
{
	struct Talent
	{
		DTOField<int> id;
		DTOField<std::string> name;
		DTOField<int> rank;
	};
}

#endif // TALENT_HPP