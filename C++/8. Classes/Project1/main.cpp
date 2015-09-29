#include "Graphics.h"
#include "Date.h"
#include "Circle.h"
#include "Score.h"
#include "Zombie.h" // Zombie class here
#include "Question.h"

#include <vector>

// The Zombie game is here
// The Zombie game is here
void Exercise4(); // The Zombie game is here
// The Zombie game is here
 // The Zombie game is here

int main()
{
	/*Graphics::Init();
	srand(time(NULL));
	
	Graphics::New("1");
	Date_Class Date;
	Graphics::End();

	Graphics::New("2");
	Circle_Class Circle;
	Graphics::End();

	Graphics::New("3");
	Score_Class Score;
	Graphics::End();*/

<<<<<<< HEAD:8. Classes/Project1/main.cpp
	Exercise4(); // Zombies
=======
	Exercise4();
>>>>>>> origin/master:C++/8. Classes/Project1/main.cpp

	/*Graphics::New("5");
	Question_Class Trivia;
	Trivia.Handle();
<<<<<<< HEAD:8. Classes/Project1/main.cpp
	Graphics::End();
*/
=======
	Graphics::End();*/

>>>>>>> origin/master:C++/8. Classes/Project1/main.cpp
	return 0;
}

// The Zombie game is here
void Exercise4() // The Zombie game is here
{
	std::vector<Zombie_Class> Zombies; // Creates a dynamic array to hold the values
	Zombies.push_back(Zombie_Class("ARRGGG"));
	Zombies.push_back(Zombie_Class("BLARR"));
<<<<<<< HEAD:8. Classes/Project1/main.cpp
	Zombies.push_back(Zombie_Class("HEEHEE"));
	Zombies.push_back(Zombie_Class("JAAAACK"));
=======
	Zombies.push_back(Zombie_Class("HEHEHE"));
	Zombies.push_back(Zombie_Class("JAAAAAAACK"));
>>>>>>> origin/master:C++/8. Classes/Project1/main.cpp

	int i, j, f = Zombies.size() - 1; // Loop variables 'i' and 'j' and the amount of zombies still alive - 1 'f'

	while (f) // While there is still more than one zombie alive
	{
		Graphics::New("4"); // Clear the screen and type the header on loop
		for (i = 0; i < Zombies.size(); i++)
		{
			if (Zombies[i].GetHealth() > 0) // If 'i' zombie isn't dead
			{
				for (j = 0; j < Zombies.size(); j++)
				{
					if (i != j && Zombies[j].GetHealth() > 0) // If 'i' zombie isn't trying to attack itself, and 'j' zombie isn't already dead
						f -= Zombies[i].Handle(Zombies[j]); // If a zombie dies 'Handle' will return 1 and set 'f' to one less
				}
			}
		}
		Graphics::End(); // Glorified system pause
	}
	Graphics::New("4"); // Clear the screen and type the header on loop
	for (i = 0; i < Zombies.size(); i++)
	{
		if (Zombies[i].GetHealth() > 0) // If 'i' Zombie is still alive
		{
			std::cout << Zombies[i].GetName() << " has won!"; // Winner winner chicken dinner
			break; // This does nothing, but it fuels my hopes and dreams
		}
	}
	Graphics::End(); // Glorified system pause
}