#ifndef CHAMPION_HPP
#define CHAMPION_HPP

#include <string>
#include "DTOField.hpp"

namespace Riot
{
	struct Champion
	{
		DTOField<bool> active;
		DTOField<int> attackRank;
		DTOField<bool> botEnabled;
		DTOField<bool> botMmEnabled;
		DTOField<int> defenseRank;
		DTOField<int> difficultyRank;
		DTOField<bool> freeToPlay;
		DTOField<long long> id;
		DTOField<int> magicRank;
		DTOField<std::string> name;
		DTOField<bool> rankedPlayEnabled;
	};
}

#endif // CHAMPION_HPP