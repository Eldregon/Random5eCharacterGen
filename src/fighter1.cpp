#include "character.hpp"

enum Fightingsyle{ 
	ARCHERY = "(+2 to ranged attacks)",
	DEFENCE = "(+1 TO AC WHILE WEARING ARMOR)"
	DUELING = "(+2 TO DAMAGE FOR WIELDING ONLY ONE ONE-HANDED WEAPON)"
	GREATWEAOPNFIGHTING = "(REROLE A SINGLE 1 OR 2 ROLLED FOR DAMAGE PER ATTACK)"
	PROTECTION = "(USE REACTION TO IMPOSE DISADVANTAGE ON ATTACK ROLL REQUIRES SHEILD)"
	TWOWEAPONFIGHTING = "(ADD ABILITY MOD TO THE DAMAGE OF SECOND ATTACK)"
};

enum Secondwind{
	secondwind = "(as a bonus action regain 1d10+Figher level health. Must finish short or long rest to use again)"
};

struct Martialarchetype{
	enum Champion{ 
		improvedcritcal = "(crit range = 19 or 20)"
		remarkableathlete = "(can add 1/2 your proficiency bonus to any Str, Dex or Con check you make and don't already have proficiency in)",
		additionalfightingsytle = "(choose a second option from the Fighting Style list)",
		superiorcritical = "(crit range = 18 to 20)",
		survivor = "(regain 5+Con mod each turn if your HP is below half)"
	};
	enum Battlemaster{
		enum combatsuperiority{
			maneuvers = "(Learn three maneuvers)",
			Superioritydice3 = "(4 superiority dice. Replenished after long or short rest)",
			Superioritydice7 = "(5 superiority dice. Replenished after long or short rest)",
			Superioritydice15 = "(6 superiority dice. Replenished after long or short rest)",
			savingthrows = "(maneuver save DC = 8+proficiency+STR or DEX)"
			};,
		studentofwar = "(Gain proficiency with one type of artisan's tools)",
		knowyourenemy = "()",
		improvedcombatsuperiority3 = "(superiority dice is now d8)",
		improvedcombatsuperiority10 = "(superiority dice is now d10)",
		improvedcombatsuperiority18 = "(superiority dice is now d12)",
		relentless = "(Rolling initiative with no superiority dice = regain 1 superiority die)"
	};
	
	enum BMmaneuvers{
			commanndersstrike = "(When you take an attack action on your turn, you can forgo one of your attacks and use a bonus action to direct one of your companions to strike. when you do so, choose a friendly creatures who can see or hear and expend on superiority die. that creature can immediately use its reaction to make one weapon attack, adding the superiority die to the attack's damage roll.)",
			disarmingattack = "(when you hit a creature with a weapon attack, you can expend one superiority die to attempt to disarm the target, forcing it to drop one item of your choice that it's holding. you add the superiority die to the attack's damage roll and the target must make a STR save throw on a failed save it drops the object you choose. the object lands at its feet.)",
			distractingattack = "(when you hit a creature with a weaopon attack, you can expend on superiority die to distract the creature, giving yout allies an opening. you add the superiority die to the attack's damage roll. the next attack roll against the tartget by an attack roll against the target by an attack other than you has adbantage if the attack is made before the start of your next turn.)",
			evasivefootwork = "()",
			feintingattack = "()",
			goadingattack = "()",
			lungingattack = "()",
			maneuveringattack = "()",
			menacingattack = "()",
			parry = "()",
			percisionattack = "()",
			pushingattack = "()",
			rally = "()",
			riposte = "()",
			sweepingattack = "()",
			tripattack = "()"
	};
	
	enum Eldritchknight{
		weaponbond = "()",
		warmagic = "()",
		eldritchstrike = "()",
		arcanecharge = "()",
		improvedwarmagic = "()",
	};
	
};

enum Extraattack{
	extraattack = "()"
};

enum Indomitable{
	indomitable = "()"
};

class Fighter: public Character
{
	
};