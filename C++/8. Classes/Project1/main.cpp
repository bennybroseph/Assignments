#include "Graphics.h"
#include "Date.h"
#include "Circle.h"
#include "Score.h"
#include "Zombie.h"
#include "Question.h"

#include <vector>

void Exercise4();

int main()
{
	Graphics::Init();
	srand(time(NULL));
	
	/*Graphics::New("1");
	Date_Class Date;
	Graphics::End();

	Graphics::New("2");
	Circle_Class Circle;
	Graphics::End();

	Graphics::New("3");
	Score_Class Score;
	Graphics::End();*/

	//Exercise4();

	Graphics::New("5");
	Question_Class Trivia;
	Trivia.Handle();
	Graphics::End();

	return 0;
}

void Exercise4()
{
	std::vector<Zombie_Class> Zombies;
	Zombies.push_back(Zombie_Class());
	Zombies.push_back(Zombie_Class("BLARR"));
	Zombies.push_back(Zombie_Class("HEHEHE"));

	int i, j, f = Zombies.size() - 1;

	while (f)
	{
		Graphics::New("4");
		for (i = 0; i < Zombies.size(); i++)
		{
			if (Zombies[i].GetHealth() > 0)
			{
				for (j = 0; j < Zombies.size(); j++)
				{
					if (i != j && Zombies[j].GetHealth() > 0)
						f -= Zombies[i].Handle(Zombies[j]);
				}
			}
		}
		Graphics::End();
	}
	Graphics::New("4");
	for (i = 0; i < Zombies.size(); i++)
	{
		if (Zombies[i].GetHealth() > 0)
		{
			std::cout << Zombies[i].GetName() << " has won!";
			break;
		}
	}
	Graphics::End();
}