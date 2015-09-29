#include "Zombie.h"



Zombie_Class::Zombie_Class(std::string p_name, float p_health, int p_attack, int p_type)
{
	if (p_health == -1) // -1 is the default value, and sets 'health' to a random number
		this->health = 1 + rand() % 20;
	if (p_attack == -1) // -1 is the default value, and sets 'attack' to a random number
		this->attack = 1 + rand() % 3;
	if (p_type == -1.0f) // -1 is the default value, and sets 'type' to a random number
		this->type = rand() % 3;

	this->name = p_name; // There is no default name, so one is passed and set here
}

int Zombie_Class::Handle(Zombie_Class &p_Zombie)
{
	p_Zombie.SetHealth(p_Zombie.GetHealth() - this->attack); // Damaging the 'p_Zombie' based on 'this->attack'
	if (p_Zombie.GetHealth() < 0) // In case of overkill
		p_Zombie.SetHealth(0);

	std::cout << this->name << " attacked " << p_Zombie.GetName() << " dealing " << this->attack << " damage!" << std::endl; // The amount of damage
	std::cout << p_Zombie.GetName() << " has " << p_Zombie.GetHealth() << " health left." << std::endl << std::endl; // How much health the 'p_Zombie' has remaining

	if ((p_Zombie.GetHealth() > 0)&&(this->health > 0)) // If 'p_Zombie' is still alive, and 'this' zombie is still alive
		return 0; // No one has died
	
	std::cout << p_Zombie.GetName() << " has died from the attack!" << std::endl << std::endl; // Who died?
	return 1; // He dead
}

void Zombie_Class::SetHealth(float p_health)
{
	this->health = p_health;
}

float Zombie_Class::GetHealth()
{
	return this->health;
}
int Zombie_Class::GetAttack()
{
	return this->attack;
}
int Zombie_Class::GetType()
{
	return this->type;
}
std::string Zombie_Class::GetName()
{
	return this->name;
}


Zombie_Class::~Zombie_Class()
{
}
