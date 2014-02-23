#ifndef SUMMONER_SPELL_LIST_HPP
#define SUMMONER_SPELL_LIST_HPP

#include <map>
#include <string>
#include "DTOField.hpp"
#include "SummonerSpell.hpp"

namespace Riot
{
	struct SummonerSpellList
	{
		DTOField<std::map<std::string, SummonerSpell>> data;
		DTOField<std::string> type;
		DTOField<std::string> version;
	};
}

#endif // SUMMONER_SPELL_LIST_HPP