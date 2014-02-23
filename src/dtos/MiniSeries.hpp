#ifndef MINI_SERIES_HPP
#define MINI_SERIES_HPP

#include <vector>
#include "DTOField.hpp"

namespace Riot
{
	struct MiniSeries
	{
		DTOField<int> losses;
		DTOField<std::vector<char>> progress;
		DTOField<int> target;
		DTOField<long long> timeLeftToPlayMillis;
		DTOField<int> wins;
	};
}

#endif // MINI_SERIES_HPP