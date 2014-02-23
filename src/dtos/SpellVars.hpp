#ifndef SPELL_VARS_HPP
#define SPELL_VARS_HPP

#include <string>
#include "DTOField.hpp"

namespace Riot
{
	struct SpellVars
	{
		DTOField<std::string> link;
		DTOField<double> coeff;
		DTOField<std::string> key;
	};
}

#endif // SPELL_VARS_HPP