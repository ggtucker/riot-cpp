#ifndef REALM_HPP
#define REALM_HPP

#include <map>
#include <string>

struct Realm
{
	std::string cdn;
	std::string css;
	std::string dd;
	std::string l;
	std::string lg;
	std::map<std::string, std::string> n;
	int profileiconmax;
	std::string store;
	std::string v;
};

#endif // REALM_HPP