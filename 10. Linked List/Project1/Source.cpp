#include "LinkedList.h"

void New(char* a_szExercise);
void End();
void Clear();

int main()
{
	LinkedList oList;
	
	for (int i = 0; i < 10; ++i)
	{
		oList.AddtoQueue(i);
	}

	//----------------------------------------------------------------------------------------
	New("1a.");
	std::cout << "The full list: " << std::endl;
	oList.Print();

	std::cout << std::endl << "The value of the 5th element in the list is " << oList[5];
	End();

	//----------------------------------------------------------------------------------------
	New("1b.");
	std::cout << "The full list: " << std::endl;
	oList.Print();

	std::cout << std::endl << "Adding 12 to the beginning of the list: " << std::endl;
	oList.AddtoStack(12);
	oList.Print();

	std::cout << std::endl << "Adding 19 to the end of the list: " << std::endl;
	oList.AddtoQueue(19);
	oList.Print();

	std::cout << std::endl << "Adding 22 to the 5th index of the list: " << std::endl;
	oList.Insert(22, 5);
	oList.Print();

	std::cout << std::endl << "Adding 70 after the 7th node in the list: " << std::endl;
	oList.Append(70, oList.Begin()+6);
	oList.Print();
	End();

	//----------------------------------------------------------------------------------------
	New("1c.");
	std::cout << "The full list: " << std::endl;
	oList.Print();

	std::cout << std::endl << "Deleting the last node in the list" << std::endl;
	oList.Delete(oList.End());
	oList.Print();
	End();

	//---------------------------------------------------------------------------------------
	New("1d.");
	std::cout << "The full list: " << std::endl;
	oList.Print();

	std::cout << std::endl << "Clearing the entire list: " << std::endl;
	oList.Clear();
	oList.Print();
	End();

	//---------------------------------------------------------------------------------------
	for (int i = 0; i < 10; ++i)
	{
		oList.AddtoQueue(i);
	}

	New("1e.");
	std::cout << "The full list: " << std::endl;
	oList.Print();

	std::cout << std::endl << "Swapping the 2nd and 5th nodes: " << std::endl;
	oList.Swap(oList.Begin() + 1, oList.Begin() + 4);
	oList.Print();
	End();
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