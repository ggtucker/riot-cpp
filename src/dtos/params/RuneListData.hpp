#ifndef RUNE_LIST_DATA_HPP
#define RUNE_LIST_DATA_HPP

#include <string>

namespace Riot
{
	enum class RuneListData
	{
		ALL = 0,
		BASIC,
		COLLOQ,
		CONSUME_ON_FULL,
		CONSUMED,
		DEPTH,
		FROM,
		GOLD,
		HIDE_FROM_ALL,
		IMAGE,
		IN_STORE,
		INTO,
		MAPS,
		REQUIRED_CHAMPION,
		SPECIAL_RECIPE,
		STACKS,
		STATS,
		TAGS
	};

	std::string toString(RuneListData runeListData);
}

#endif // RUNE_LIST_DATA_HPP