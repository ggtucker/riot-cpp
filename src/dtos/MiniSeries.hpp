#ifndef MINI_SERIES_HPP
#define MINI_SERIES_HPP

#include <vector>

struct MiniSeries
{
	int losses;
	std::vector<char> progress;
	int target;
	long long timeLeftToPlayMillis;
	int wins;
};

#endif // MINI_SERIES_HPP