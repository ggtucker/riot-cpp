#ifndef SEASON_HPP
#define SEASON_HPP

#include <string>

namespace Riot
{
	enum class Season
	{
		SEASON3 = 0,
		SEASON4
	};

	std::string toString(Season season);
}

#endif // SEASON_HPP