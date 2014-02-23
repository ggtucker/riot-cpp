#ifndef RUNE_LIST_HPP
#define RUNE_LIST_HPP

#include <map>
#include <string>
#include "DTOField.hpp"
#include "BasicData.hpp"

namespace Riot
{
	struct RuneList
	{
		DTOField<BasicData> basic;
		DTOField<std::map<std::string, Rune>> data;
		DTOField<std::string> type;
		DTOField<std::string> version;
	};
}

#endif // RUNE_LIST_HPP