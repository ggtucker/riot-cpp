#ifndef RUNE_DATA_HPP
#define RUNE_DATA_HPP

#include <string>

namespace Riot
{
	enum class RuneData
	{
		ALL = 0,
		GOLD,
		COLLOQ,
		CONSUMED,
		STACKS,
		DEPTH,
		CONSUME_ON_FULL,
		FROM,
		INTO,
		SPECIAL_RECIPE,
		IN_STORE,
		HIDE_FROM_ALL,
		REQUIRED_CHAMPION,
		TAGS,
		MAPS,
		IMAGE,
		STATS
	};

	std::string toString(RuneData runeData);
}

#endif // RUNE_DATA_HPP