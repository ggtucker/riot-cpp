#ifndef MASTERY_TREE_HPP
#define MASTERY_TREE_HPP

#include <vector>
#include "DTOField.hpp"
#include "MasteryTreeList.hpp"

namespace Riot
{
	struct MasteryTree
	{
		DTOField<std::vector<MasteryTreeList>> Defense;
		DTOField<std::vector<MasteryTreeList>> Offense;
		DTOField<std::vector<MasteryTreeList>> Utility;
	};
}

#endif // MASTERY_TREE_HPP