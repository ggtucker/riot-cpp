#ifndef MASTERY_LIST_HPP
#define MASTERY_LIST_HPP

#include <map>
#include <string>
#include "DTOField.hpp"
#include "Mastery.hpp"
#include "MasteryTree.hpp"

namespace Riot
{
	struct MasteryList
	{
		DTOField<std::map<std::string, Mastery>> data;
		DTOField<MasteryTree> tree;
		DTOField<std::string> type;
		DTOField<std::string> version;
	};
}

#endif // MASTERY_LIST_HPP