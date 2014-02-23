#ifndef SUMMONER_SPELL_LIST_HPP
#define SUMMONER_SPELL_LIST_HPP

#include <map>
#include <string>
#include "SummonerSpell.hpp"

namespace Riot
{
	struct SummonerSpellList
	{
		std::map<std::string, SummonerSpell> data;
		std::string type;
		std::string version;
	};
}

#endif // SUMMONER_SPELL_LIST_HPP