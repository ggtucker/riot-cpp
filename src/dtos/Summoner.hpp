#ifndef SUMMONER_HPP
#define SUMMONER_HPP

#include <string>
#include "DTOField.hpp"

namespace Riot
{
	struct Summoner
	{
		DTOField<long long> id;
		DTOField<std::string> name;
		DTOField<int> profileIconId;
		DTOField<long long> revisionDate;
		DTOField<long long> summonerLevel;
	};
}

#endif // SUMMONER_HPP