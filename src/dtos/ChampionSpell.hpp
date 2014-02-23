#ifndef CHAMPION_SPELL_HPP
#define CHAMPION_SPELL_HPP

#include <string>
#include <vector>
#include "DTOField.hpp"
#include "Image.hpp"
#include "LevelTip.hpp"
#include "SpellVars.hpp"

namespace Riot
{
	struct ChampionSpell
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
		DTOField<LevelTip> leveltip;
		DTOField<int> maxrank;
		DTOField<std::string> name;
		DTOField<std::vector<int>> range;
		DTOField<std::string> rangeBurn;
		DTOField<std::string> resource;
		DTOField<std::string> tooltip;
		DTOField<std::vector<SpellVars>> vars;
	};
}

#endif // CHAMPION_SPELL_HPP