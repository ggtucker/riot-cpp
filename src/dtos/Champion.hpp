#ifndef CHAMPION_HPP
#define CHAMPION_HPP

#include <string>

struct Champion
{
	bool active;
	int attackRank;
	bool botEnabled;
	bool botMmEnabled;
	int defenseRank;
	int difficultyRank;
	bool freeToPlay;
	long long id;
	int magicRank;
	std::string name;
	bool rankedPlayEnabled;
};

#endif // CHAMPION_HPP