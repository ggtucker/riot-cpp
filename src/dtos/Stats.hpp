#ifndef STATS_HPP
#define STATS_HPP

#include "DTOField.hpp"

namespace Riot
{
	struct Stats
	{
		DTOField<double> armor;
		DTOField<double> armorperlevel;
		DTOField<double> attackdamage;
		DTOField<double> attackdamageperlevel;
		DTOField<double> attackrange;
		DTOField<double> attackspeedoffset;
		DTOField<double> attackspeedperlevel;
		DTOField<double> crit;
		DTOField<double> critperlevel;
		DTOField<double> hp;
		DTOField<double> hpperlevel;
		DTOField<double> hpregen;
		DTOField<double> hpregenperlevel;
		DTOField<double> movespeed;
		DTOField<double> mp;
		DTOField<double> mpperlevel;
		DTOField<double> mpregen;
		DTOField<double> mpregenperlevel;
		DTOField<double> spellblock;
		DTOField<double> spellblockperlevel;
	};
}

#endif // STATS_HPP