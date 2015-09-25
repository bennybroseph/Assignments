#ifndef _SAVEGAME_H_
#define _SAVEGAME_H_

#include <iostream>
#include <fstream>

class SaveGame
{
private:
	int iValue; // Integer value
	float fValue; // Float value
	bool bValue; // Boolean value
	char szValue[256]; // Character array value

public:
	// Prints each variable in the 'SaveGame' Class to the console
	void Print();
	// Gets user input to store the value for each variable
	void UserInput();

	// Reads the data in the file and sets each variable accordingly
	void Read();
	// Saves each variable to the file
	void Save();

	// Calls 'Read'
	SaveGame();
	// Calls 'Save'
	~SaveGame();
};

#endif // _SAVEGAME_H_
