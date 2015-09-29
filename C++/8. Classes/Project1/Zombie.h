#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>
#include <time.h>

#define ROGUE 0 
#define WARRIOR 1
#define ACROBAT 2
#define BEASTMASTER 3

class Zombie_Class
{
public:
	// The constructor for the Zombies
	// Expects a name 'p_name' and the has optional parameters which are set to random if omitted
	Zombie_Class(std::string p_name, float p_health = -1.0f, int p_attack = -1, int p_type = -1);

	// Will make 'this' zombie attack the zombie object passed by reference
	// Returns 0 if the passed zombie 'p_Zombie' did not die, or 1 if it has perished
	int Handle(Zombie_Class &p_Zombie);

	// Setter for health
	void SetHealth(float p_health);

	// Getter for 'health'
	float GetHealth();
	// Getter for 'attack'
	int GetAttack();
	// Getter for 'type'
	int GetType();
	// Getter for 'name'
	std::string GetName();

	~Zombie_Class();
private:
	float health; // How many health points the zombie has
	int attack; // How much damage each attack hits for
	int type; // The type of Zombie (irrelevant unfortunately)
	std::string name; // The name of the Zombie
};

#endif //ZOMEBIE_H

