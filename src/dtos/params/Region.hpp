#ifndef REGION_HPP
#define REGION_HPP

#include <string>

namespace Riot
{
	enum class Region
	{
		BR = 0,
		EUNE,
		EUW,
		KR,
		LAN,
		LAS,
		NA,
		OCE,
		RU,
		TR
	};

	std::string toString(Region reg);
}

#endif // REGION_HPP