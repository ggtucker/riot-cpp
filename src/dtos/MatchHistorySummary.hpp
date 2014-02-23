#ifndef MATCH_HISTORY_SUMMARY_HPP
#define MATCH_HISTORY_SUMMARY_HPP

#include <string>
#include "DTOField.hpp"

namespace Riot
{
	struct MatchHistorySummary
	{
		DTOField<int> assists;
		DTOField<long long> date;
		DTOField<int> deaths;
		DTOField<long long> gameId;
		DTOField<std::string> gameMode;
		DTOField<bool> invalid;
		DTOField<int> kills;
		DTOField<int> mapId;
		DTOField<int> opposingTeamKills;
		DTOField<std::string> opposingTeamName;
		DTOField<bool> win;
	};
}

#endif // MATCH_HISTORY_SUMMARY_HPP