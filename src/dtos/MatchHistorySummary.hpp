#ifndef MATCH_HISTORY_SUMMARY_HPP
#define MATCH_HISTORY_SUMMARY_HPP

#include <string>

struct MatchHistorySummary
{
	int assists;
	long long date;
	int deaths;
	long long gameId;
	std::string gameMode;
	bool invalid;
	int kills;
	int mapId;
	int opposingTeamKills;
	std::string opposingTeamName;
	bool win;
};

#endif // MATCH_HISTORY_SUMMARY_HPP