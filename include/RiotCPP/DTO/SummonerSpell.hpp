#ifndef SUMMONER_SPELL_HPP
#define SUMMONER_SPELL_HPP

#include <vector>
#include <string>
#include "Image.hpp"
#include "LevelTip.hpp"
#include "SpellVars.hpp"

namespace Riot
{
	struct SummonerSpell
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
		std::string key;
		LevelTip leveltip;
		int maxrank;
		std::vector<std::string> modes;
		std::string name;
		std::vector<int> range;
		std::string rangeBurn;
		std::string resource;
		int summonerLevel;
		std::string tooltip;
		std::vector<SpellVars> vars;
	};
}

#endif // SUMMONER_SPELL_HPP