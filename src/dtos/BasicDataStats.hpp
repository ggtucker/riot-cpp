#ifndef BASIC_DATA_STATS_HPP
#define BASIC_DATA_STATS_HPP

#include "DTOField.hpp"

namespace Riot
{
	struct BasicDataStats
	{
		DTOField<double> FlatArmorMod;
		DTOField<double> FlatAttackSpeedMod;
		DTOField<double> FlatBlockMod;
		DTOField<double> FlatCritChanceMod;
		DTOField<double> FlatCritDamageMod;
		DTOField<double> FlatEXPBonus;
		DTOField<double> FlapEnergyPoolMod;
		DTOField<double> FlatEnergyRegenMod;
		DTOField<double> FlatHPPoolMod;
		DTOField<double> FlatHPRegenMod;
		DTOField<double> FlatMPPoolMod;
		DTOField<double> FlatMPRegenMod;
		DTOField<double> FlatMagicDamageMod;
		DTOField<double> FlatMovementSpeedMod;
		DTOField<double> FlatPhysicalDamageMod;
		DTOField<double> FlatSpellBlockMod;
		DTOField<double> PercentArmorMod;
		DTOField<double> PercentAttackSpeedMod;
		DTOField<double> PercentBlockMod;
		DTOField<double> PercentCritChanceMod;
		DTOField<double> PercentCritDamageMod;
		DTOField<double> PercentDodgeMod;
		DTOField<double> PercentEXPBonus;
		DTOField<double> PercentHPPoolMod;
		DTOField<double> PercentHPRegenMod;
		DTOField<double> PercentLifeStealMod;
		DTOField<double> PercentMPPoolMod;
		DTOField<double> PercentMPRegenMod;
		DTOField<double> PercentMagicDamageMod;
		DTOField<double> PercentMovementSpeedMod;
		DTOField<double> PercentPhysicalDamageMod;
		DTOField<double> PercentSpellBlockMod;
		DTOField<double> PercentSpellVampMod;
		DTOField<double> rFlatArmorModPerLevel;
		DTOField<double> rFlatArmorPenetrationMod;
		DTOField<double> rFlatArmorPenetrationModPerLevel;
		DTOField<double> rFlatCritChanceModPerLevel;
		DTOField<double> rFlatCritDamageModPerLevel;
		DTOField<double> rFlatDodgeMod;
		DTOField<double> rFlatDodgeModPerLevel;
		DTOField<double> rFlatEnergyModPerLevel;
		DTOField<double> rFlatEnergyRegenModPerLevel;
		DTOField<double> rFlatGoldPer10Mod;
		DTOField<double> rFlatHPModPerLevel;
		DTOField<double> rFlatHPRegenModPerLevel;
		DTOField<double> rFlatMPModPerLevel;
		DTOField<double> rFlatMPRegenModPerLevel;
		DTOField<double> rFlatMagicDamageModPerLevel;
		DTOField<double> rFlatMagicPenetrationMod;
		DTOField<double> rFlatMagicPenetrationModPerLevel;
		DTOField<double> rFlatMovementSpeedModPerLevel;
		DTOField<double> rFlatPhysicalDamageModPerLevel;
		DTOField<double> rFlatSpellBlockModPerLevel;
		DTOField<double> rFlatTimeDeadMod;
		DTOField<double> rFlatTimeDeadModPerLevel;
		DTOField<double> rPercentArmorPenetrationMod;
		DTOField<double> rPercentArmorPenetrationModPerLevel;
		DTOField<double> rPercentAttackSpeedModPerLevel;
		DTOField<double> rPercentCooldownMod;
		DTOField<double> rPercentCooldownModPerLevel;
		DTOField<double> rPercentMagicPenetrationMod;
		DTOField<double> rPercentMagicPenetrationModPerLevel;
		DTOField<double> rPercentMovementSpeedModPerLevel;
		DTOField<double> rPercentTimeDeadMod;
		DTOField<double> rPercentTimeDeadModPerLevel;
	};
}

#endif // BASIC_DATA_STATS_HPP