#ifndef RUNE_LIST_HPP
#define RUNE_LIST_HPP

#include <map>
#include <string>
#include "BasicData.hpp"

namespace Riot
{
	struct RuneList
	{
		BasicData basic;
		std::map<std::string, Rune> data;
		std::string type;
		std::string version;
	};
}

#endif // RUNE_LIST_HPP