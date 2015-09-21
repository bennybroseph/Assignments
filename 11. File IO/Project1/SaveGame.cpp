#include "SaveGame.h"


void SaveGame::Print()
{
	std::cout << "Current Values:" << std::endl << std::endl;
	std::cout
		<< "iValue = " << iValue << std::endl
		<< "fValue = " << fValue << std::endl
		<< "bValue = " << bValue << std::endl
		<< "szValue = " << szValue << std::endl << std::endl;
}

void SaveGame::UserInput()
{
	std::cout << "Enter the value for the integer: ";
	std::cin >> iValue;
	std::cout << "Enter the value for the float: ";
	std::cin >> fValue;
	std::cout << "Enter the value for the boolean: ";
	std::cin >> bValue;
	std::cout << "Enter the value for the character array: ";
	std::cin >> szValue;
}

void SaveGame::Read()
{
	std::ifstream File;
	File.open("Save.txt", std::ios_base::in);
	if (File.is_open())
	{
		File
			>> iValue
			>> fValue
			>> bValue
			>> szValue; // Read each variable and store it in the class variables
	}
	File.close();
}
void SaveGame::Save()
{
	std::ofstream File;
	File.open("Save.txt", std::ios_base::out);

	if (File.is_open())
	{
		File
			<< iValue << " "
			<< fValue << " "
			<< bValue << " "
			<< szValue; // Write each variable to the file with a space in between
	}
	File.close();
}

SaveGame::SaveGame()
{
	Read();
}


SaveGame::~SaveGame()
{
	Save();
}
