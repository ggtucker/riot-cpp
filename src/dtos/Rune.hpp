#ifndef RUNE_HPP
#define RUNE_HPP

#include <map>
#include <vector>
#include <string>
#include "DTOField.hpp"
#include "Gold.hpp"
#include "Image.hpp"
#include "MetaData.hpp"
#include "BasicDataStats.hpp"

namespace Riot
{
	struct Rune
	{
		DTOField<std::string> colloq;
		DTOField<bool> consumeOnFull;
		DTOField<bool> consumed;
		DTOField<int> depth;
		DTOField<std::string> description;
		DTOField<std::vector<std::string>> from;
		DTOField<Gold> gold;
		DTOField<std::string> group;
		DTOField<bool> hideFromAll;
		DTOField<Image> image;
		DTOField<bool> inStore;
		DTOField<std::vector<std::string>> into;
		DTOField<std::map<std::string, bool>> maps;
		DTOField<std::string> name;
		DTOField<std::string> plaintext;
		DTOField<std::string> requiredChampion;
		DTOField<MetaData> rune;
		DTOField<int> specialRecipe;
		DTOField<int> stacks;
		DTOField<BasicDataStats> stats;
		DTOField<std::vector<std::string>> tags;
	};
}

#endif // RUNE_HPP