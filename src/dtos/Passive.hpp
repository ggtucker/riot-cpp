#ifndef PASSIVE_HPP
#define PASSIVE_HPP

#include <string>
#include "Image.hpp"

namespace Riot
{
	struct Passive
	{
		std::string description;
		Image image;
		std::string name;
	};
}

#endif // PASSIVE_HPP