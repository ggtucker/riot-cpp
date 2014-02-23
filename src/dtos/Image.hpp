#ifndef IMAGE_HPP
#define IMAGE_HPP

#include <string>

namespace Riot
{
	struct Image
	{
		std::string full;
		std::string group;
		int h;
		std::string sprite;
		int w;
		int x;
		int y;
	};
}

#endif // IMAGE_HPP