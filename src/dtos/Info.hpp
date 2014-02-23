#ifndef INFO_HPP
#define INFO_HPP

#include "DTOField.hpp"

namespace Riot
{
	struct Info
	{
		DTOField<int> attack;
		DTOField<int> defense;
		DTOField<int> difficulty;
		DTOField<int> magic;
	};
}

#endif // INFO_HPP