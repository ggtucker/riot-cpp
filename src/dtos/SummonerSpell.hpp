#ifndef SUMMONER_SPELL_HPP
#define SUMMONER_SPELL_HPP

#include <vector>
#include <string>
#include "DTOField.hpp"
#include "Image.hpp"
#include "LevelTip.hpp"
#include "SpellVars.hpp"

namespace Riot
{
	struct SummonerSpell
	{
		DTOField<std::vector<int>> cooldown;
		DTOField<std::string> cooldownBurn;
		DTOField<std::vector<int>> cost;
		DTOField<std::string> costBurn;
		DTOField<std::string> costType;
		DTOField<std::string> description;
		DTOField<std::vector<std::vector<int>>> effect;
		DTOField<std::vector<std::string>> effectBurn;
		DTOField<std::string> id;
		DTOField<Image> image;
		DTOField<std::string> key;
		DTOField<LevelTip> leveltip;
		DTOField<int> maxrank;
		DTOField<std::vector<std::string>> modes;
		DTOField<std::string> name;
		DTOField<std::vector<int>> range;
		DTOField<std::string> rangeBurn;
		DTOField<std::string> resource;
		DTOField<int> summonerLevel;
		DTOField<std::string> tooltip;
		DTOField<std::vector<SpellVars>> vars;
	};
}

#endif // SUMMONER_SPELL_HPP