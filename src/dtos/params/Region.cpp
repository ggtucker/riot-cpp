#include <RiotCPP/DTO/Param/Region.hpp>

namespace Riot
{
	std::string toString(Region reg)
	{
		switch(reg)
		{
		case Region::BR:
			return "br";
		case Region::EUNE:
			return "eune";
		case Region::EUW:
			return "euw";
		case Region::KR:
			return "kr";
		case Region::LAN:
			return "lan";
		case Region::LAS:
			return "las";
		case Region::NA:
			return "na";
		case Region::OCE:
			return "oce";
		case Region::RU:
			return "ru";
		case Region::TR:
			return "tr";
		}
		return "";
	}
}