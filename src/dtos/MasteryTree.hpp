#ifndef MASTERY_TREE_HPP
#define MASTERY_TREE_HPP

#include <vector>
#include "MasteryTreeList.hpp"

namespace Riot
{
	struct MasteryTree
	{
		std::vector<MasteryTreeList> Defense;
		std::vector<MasteryTreeList> Offense;
		std::vector<MasteryTreeList> Utility;
	};
}

#endif // MASTERY_TREE_HPP