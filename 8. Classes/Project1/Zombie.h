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
	Zombie_Class(std::string = "ARRRRRG", float = -1.0f, int = -1, int = -1);

	int Handle(Zombie_Class&);

	void SetHealth(float);

	float GetHealth();
	int GetAttack();
	int GetType();
	std::string GetName();

	~Zombie_Class();
private:
	float health;
	int attack;
	int type;
	std::string name;
};

#endif //ZOMEBIE_H

