#ifndef MASTERY_LIST_DATA_HPP
#define MASTERY_LIST_DATA_HPP

#include <string>

namespace Riot
{
	enum class MasteryListData
	{
		ALL = 0,
		IMAGE,
		PREREQ,
		RANKS,
		TREE
	};

	std::string toString(MasteryListData masteryListData);
}

#endif // MASTERY_LIST_DATA_HPP