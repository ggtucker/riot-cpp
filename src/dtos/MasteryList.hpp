#ifndef MASTERY_LIST_HPP
#define MASTERY_LIST_HPP

#include <map>
#include <string>
#include "Mastery.hpp"
#include "MasteryTree.hpp"

namespace Riot
{
	struct MasteryList
	{
		std::map<std::string, Mastery> data;
		MasteryTree tree;
		std::string type;
		std::string version;
	};
}

#endif // MASTERY_LIST_HPP