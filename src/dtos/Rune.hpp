#ifndef RUNE_HPP
#define RUNE_HPP

#include <map>
#include <vector>
#include <string>
#include "Gold.hpp"
#include "Image.hpp"
#include "MetaData.hpp"
#include "BasicDataStats.hpp"

namespace Riot
{
	struct Rune
	{
		std::string colloq;
		bool consumeOnFull;
		bool consumed;
		int depth;
		std::string description;
		std::vector<std::string> from;
		Gold gold;
		std::string group;
		bool hideFromAll;
		Image image;
		bool inStore;
		std::vector<std::string> into;
		std::map<std::string, bool> maps;
		std::string name;
		std::string plaintext;
		std::string requiredChampion;
		MetaData rune;
		int specialRecipe;
		int stacks;
		BasicDataStats stats;
		std::vector<std::string> tags;
	};
}

#endif // RUNE_HPP