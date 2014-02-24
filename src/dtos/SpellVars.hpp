#ifndef SPELL_VARS_HPP
#define SPELL_VARS_HPP

#include <string>

namespace Riot
{
	struct SpellVars
	{
		std::string link;
		std::vector<double> coeff;
		std::string key;
	};
}

#endif // SPELL_VARS_HPP