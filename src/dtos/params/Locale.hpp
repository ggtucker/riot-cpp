#ifndef LOCALE_HPP
#define LOCALE_HPP

#include <string>

namespace Riot
{
	enum class Locale
	{
		en_US = 0,
		es_ES
	};

	std::string toString(Locale locale);
}

#endif // LOCALE_HPP