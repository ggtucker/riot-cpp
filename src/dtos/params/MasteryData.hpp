#ifndef MASTERY_DATA_HPP
#define MASTERY_DATA_HPP

#include <string>

namespace Riot
{
	enum class MasteryData
	{
		ALL = 0,
		RANKS,
		PREREQ,
		IMAGE
	};

	std::string toString(MasteryData masteryData);
}

#endif // MASTERY_DATA_HPP