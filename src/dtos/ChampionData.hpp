#ifndef CHAMPION_DATA_HPP
#define CHAMPION_DATA_HPP

#include <vector>
#include <string>
#include "DTOField.hpp"
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
		DTOField<std::vector<std::string>> allytips;
		DTOField<std::string> blurb;
		DTOField<std::vector<std::string>> enemytips;
		DTOField<std::string> id;
		DTOField<Image> image;
		DTOField<Info> info;
		DTOField<std::string> key;
		DTOField<std::string> lore;
		DTOField<std::string> name;
		DTOField<std::string> partype;
		DTOField<Passive> passive;
		DTOField<std::vector<Recommended>> recommended;
		DTOField<std::vector<Skin>> skins;
		DTOField<std::vector<ChampionSpell>> spells;
		DTOField<Stats> stats;
		DTOField<std::vector<std::string>> tags;
		DTOField<std::string> title;
	};
}

#endif // CHAMPION_DATA_HPP