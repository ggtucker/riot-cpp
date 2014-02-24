#ifndef CHAMPION_SPELL_HPP
#define CHAMPION_SPELL_HPP

#include <string>
#include <vector>
#include "Image.hpp"
#include "LevelTip.hpp"
#include "SpellVars.hpp"

namespace Riot
{
	struct ChampionSpell
	{
		std::vector<int> cooldown;
		std::string cooldownBurn;
		std::vector<int> cost;
		std::string costBurn;
		std::string costType;
		std::string description;
		std::vector<std::vector<int>> effect;
		std::vector<std::string> effectBurn;
		std::string id;
		Image image;
		LevelTip leveltip;
		int maxrank;
		std::string name;
		std::vector<int> range;
		std::string rangeBurn;
		std::string resource;
		std::string tooltip;
		std::vector<SpellVars> vars;
	};
}

#endif // CHAMPION_SPELL_HPP