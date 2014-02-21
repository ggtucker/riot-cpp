#ifndef MASTERY_HPP
#define MASTERY_HPP

#include <vector>
#include <string>
#include "Image.hpp"

struct Mastery
{
	std::vector<std::string> description;
	int id;
	Image image;
	std::string name;
	std::string prereq;
	int ranks;
};

#endif // MASTERY_HPP