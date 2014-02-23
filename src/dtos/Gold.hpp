#ifndef GOLD_HPP
#define GOLD_HPP

#include "DTOField.hpp"

namespace Riot
{
	struct Gold
	{
		DTOField<int> base;
		DTOField<bool> purchasable;
		DTOField<int> sell;
		DTOField<int> total;
	};
}

#endif // GOLD_HPP