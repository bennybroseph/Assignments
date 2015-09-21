#include "SaveGame.h"

// Problem 1
void Exercise1();
// Problem 2
void Exercise2();

int main()
{
	Exercise1();
	Exercise2();
}

void Exercise1()
{
	bool bRun = true; // Boolean value to dictate if the loop should exit
	while (bRun)
	{
		system("cls");

		std::cout << "What would you like to do?" << std::endl;
		std::cout
			<< "1. Display" << std::endl
			<< "2. Write" << std::endl
			<< "3. Clear" << std::endl
			<< "4. Exit" << std::endl << std::endl
			<< ">> ";
		char szBuffer[256];
		std::cin.getline(szBuffer, 256); // Get the users answer

		system("cls");

		switch (szBuffer[0]) // Parse user input. I only care about the first element
		{
		case '1':
		{
			std::ifstream File;
			File.open("MyLog.txt", std::ios_base::in); // Open a file to read from

			if (!File.is_open()) // The file must exist, or the program exits prematurely
				return;

			char szBuffer[256] = "";
			while (File.getline(szBuffer, 256)) // 'getline' will return an error when it reaches the end of the file
			{
				std::cout << szBuffer << std::endl; // output each line of the file
			}
			File.close();

			std::cout << std::endl << "END OF FILE" << std::endl; // Just to re-iterate that the file is done printing
			system("pause");
			break;
		}
		case '2':
		{
			std::ofstream File;
			File.open("MyLog.txt", std::ios_base::out | std::ios_base::app); // Open a file to write to

			if (!File.is_open()) // The file must exist or a new one must be created by the program, otherwise it will exit prematurely
				return;

			std::cout << "Enter what you'd like to put into the file. To stop input enter 'STOP'." << std::endl; 

			char szBuffer[256] = "";
			while (strcmp(szBuffer, "STOP")) // If the user inputs 'STOP' (without the quotes of course...) the loop will end. Remember that 'strcmp' returns 0 if the strings are equal.
			{
				std::cout << ">> ";
				std::cin.getline(szBuffer, 256);
				if (strcmp(szBuffer, "STOP")) // If the user not done
					File << szBuffer << std::endl; // Write to the file
			}
			File.close();

			break;
		}
		case '3':
		{
			std::ofstream File;
			File.open("MyLog.txt", std::ios_base::out); // Open a file, and do not append to the end of it. Start at the beginning

			if (!File.is_open())

			File << ""; // Enter a blank file
			File.close(); // Done

			std::cout << "The file has been cleared..." << std::endl; // Confirm the function ran
			system("pause");

			break;
		}
		case '4': bRun = false; break; // They want to exit
		}
	}

	std::cout << "Goodbye" << std::endl << std::endl;
	system("pause");
}

void Exercise2()
{
	SaveGame oSaveGame;
	oSaveGame.Print();
	oSaveGame.UserInput();
}