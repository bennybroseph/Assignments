#include "LinkedList.h"

void New(char* a_szExercise);
void End();
void Clear();



int main()
{
	LinkedList oList;

	oList.PushBack(1);
	oList.PushBack(4);
	oList.PushBack(9);
	oList.PushBack(67);

	oList.Print();

	system("pause");
}

void New(char* a_szExercise)
{
	if (strlen(a_szExercise) <= 1)
	{
		std::cout << "----------" << std::endl;
		std::cout << "Exercise " << a_szExercise << std::endl;
		std::cout << "----------" << std::endl << std::endl;
	}
	else if (strlen(a_szExercise) == 2)
	{
		std::cout << "-----------" << std::endl;
		std::cout << "Exercise " << a_szExercise << std::endl;
		std::cout << "-----------" << std::endl << std::endl;
	}
	else if (strlen(a_szExercise) == 3)
	{
		std::cout << "------------" << std::endl;
		std::cout << "Exercise " << a_szExercise << std::endl;
		std::cout << "------------" << std::endl << std::endl;
	}
}
void End()
{
	std::cout << std::endl << std::endl;
	system("pause");
	Clear();
}
void Clear()
{
	system("cls");
}