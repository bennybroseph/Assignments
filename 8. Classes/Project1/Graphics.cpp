#include "Graphics.h"

namespace Graphics
{
	int Init()
	{
		return 0;
	}

	void New(char* i)
	{
		system("cls");
		std::cout << "Exercise " << i << std::endl;

		if (strlen(i) <= 1)
			std::cout << "----------";
		else
			std::cout << "-----------";

		std::cout << std::endl << std::endl;
	}
	void End()
	{
		std::cout << std::endl << std::endl;
		system("pause");
	}

	void Quit()
	{

	}
}