#include "Zombie.h"



Zombie_Class::Zombie_Class(std::string p_name, float p_health, int p_attack, int p_type)
{
	if (p_health == -1)
		this->health = 1 + rand() % 20;
	if (p_attack == -1)
		this->attack = 1 + rand() % 3;
	if (p_type == -1)
		this->type = rand() % 3;

	this->name = p_name;
}

int Zombie_Class::Handle(Zombie_Class & p_Zombie)
{
	p_Zombie.SetHealth(p_Zombie.GetHealth() - this->attack);
	if (p_Zombie.GetHealth() < 0)
		p_Zombie.SetHealth(0);

	std::cout << this->name << " attacked " << p_Zombie.GetName() << " dealing " << this->attack << " damage!" << std::endl;
	std::cout << p_Zombie.GetName() << " has " << p_Zombie.GetHealth() << " health left." << std::endl << std::endl;

	if ((p_Zombie.GetHealth() > 0)&&(this->health > 0))
		return 0;
	
	std::cout << p_Zombie.GetName() << " has died from the attack!" << std::endl << std::endl;
	return 1;
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
