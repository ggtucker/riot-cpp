#ifndef CHAMPION_DATA_HPP
#define CHAMPION_DATA_HPP

#include <vector>
#include <string>
#include "Image.hpp"
#include "Info.hpp"
#include "Passive.hpp"
#include "Recommended.hpp"
#include "Skin.hpp"
#include "ChampionSpell.hpp"
#include "Stats.hpp"

namespace Riot
{
	struct ChampionData
	{
		std::vector<std::string> allytips;
		std::string blurb;
		std::vector<std::string> enemytips;
		std::string id;
		Image image;
		Info info;
		std::string key;
		std::string lore;
		std::string name;
		std::string partype;
		Passive passive;
		std::vector<Recommended> recommended;
		std::vector<Skin> skins;
		std::vector<ChampionSpell> spells;
		Stats stats;
		std::vector<std::string> tags;
		std::string title;
	};
}

#endif // CHAMPION_DATA_HPP