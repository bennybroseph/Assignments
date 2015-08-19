#include <iostream>

int main()
{
	//1
	std::cout << "Exercise 1" << std::endl;
	std::cout << "----------" << std::endl << std::endl;

	char name[256], first [256], last [256];

	std::cout << "Please enter your first and last name: ";
	std::cin >> first; std::cin >> last;

	strcat_s(first, " "); // adds a space to the end of first name
	strcat_s(first, last); //adds last name to first name
	strcpy_s(name, first); //copies first to name, which will now include the full name

	std::cout << std::endl << std::endl;
	system("pause");

	//2
	system("cls");
	std::cout << "Exercise 2" << std::endl;
	std::cout << "----------" << std::endl << std::endl;

	int i;

	for (i = strlen(name)-1; i >= 0; i--)
	{
		std::cout << name[i];
	}

	std::cout << std::endl << std::endl;
	system("pause");

	//3
	system("cls");
	std::cout << "Exercise 3" << std::endl;
	std::cout << "----------" << std::endl << std::endl;

	char name_2D[5][256];
	int f;

	for (i = 0; i < 5; i++)
	{
		std::cout << i << ". " << "Please enter your first and last name: ";
		std::cin >> first; std::cin >> last;

		strcat_s(first, " "); // adds a space to the end of first name
		strcat_s(first, last); //adds last name to first name
		strcpy_s(name_2D[i], first); //copies first to name, which will now include the full name
	}

	for (i = 0; i < 5; i++)
	{
		for (f = strlen(name_2D[i])-1; f >= 0; f--)
		{
			std::cout << name_2D[i][f];
		}
	}

	std::cout << std::endl << std::endl;
	system("pause");

	//4
	system("cls");
	std::cout << "Exercise 4" << std::endl;
	std::cout << "----------" << std::endl << std::endl;

	std::cout << (char)7;

	std::cout << std::endl << std::endl;
	system("pause");

	//5
	system("cls");
	std::cout << "Exercise 5" << std::endl;
	std::cout << "----------" << std::endl << std::endl;

	char dummy[256], password[256];
	bool length = false, capital = false, number = false, symbol = false;

	std::cout << "Please enter your Username: ";
	std::cin >> dummy;

	std::cout << "Please enter your Password: ";
	std::cin >> password;

	if (strlen(password) >= 8)
		length = true;

	for (i = 0; i < strlen(password); i++)
	{
		if ((password[i] >= 33) && (password[i] <= 47) || (password[i] >= 58) && (password[i] <= 64))
			symbol = true;
		if ((password[i] >= 65) && (password[i] <= 90))
			capital = true;
		if ((password[i] >= 48) && (password[i] <= 57))
			number = true;
	}
	std::cout << std::endl;

	std::cout << "Your Password is ";
	if (!length)
		std::cout << "not ";
	std::cout << "long enough.";
	if (!length)
		std::cout << std::endl << "Password must be atleast 8 characters long.";

	std::cout << std::endl << std::endl;

	std::cout << "Your Password does ";
	if (!symbol)
		std::cout << "not ";
	std::cout << "have a symbol.";
	if (!symbol)
		std::cout << std::endl << "Password must contain atlest one symbol.";

	std::cout << std::endl << std::endl;

	std::cout << "Your Password does ";
	if (!capital)
		std::cout << "not ";
	std::cout << "have a capital letter.";
	if (!capital)
		std::cout << std::endl << "Password must contain atlest one capital letter.";

	std::cout << std::endl << std::endl;

	std::cout << "Your Password does ";
	if (!number)
		std::cout << "not ";
	std::cout << "have a number.";
	if (!number)
		std::cout << std::endl << "Password must contain atlest one number.";

	std::cout << std::endl << std::endl;
	system("pause");

	//6
	system("cls");
	std::cout << "Exercise 6" << std::endl;
	std::cout << "----------" << std::endl << std::endl;

	char username[256], identifier[256];
	bool run = true;

	while (run)
	{
		std::cout << "Please enter your username: ";
		std::cin >> username;

		if (strstr(username, "usr") != 0)
			run = false;
		else
			std::cout << "Nice try, that's not a valid username. Must contain 'usr'." << std::endl;
	}

	std::cout << "Thank you for your cooperation..." << std::endl;

	run = true;
	while (run)
	{
		std::cout << "Please enter your password: ";
		std::cin >> password;

		if (strcmp(password, "Pa55w0rd") == 0)
			run = false;
		else
			std::cout << "Nice try, that's not a valid password." << std::endl;
	}

	std::cout << "Thank you for your cooperation...";

	strcat_s(username, "-"); // adds a '-' to the end of first name
	strcat_s(username, password); //adds last name to first name
	strcpy_s(identifier, username); //copies first to name, which will now include the full name

	std::cout << std::endl << std::endl;
	std::cout << "Your identifier is: " << identifier;

	std::cout << std::endl << std::endl;
	system("pause");

	//7
	system("cls");
	std::cout << "Exercise 7" << std::endl;
	std::cout << "----------" << std::endl << std::endl;



	std::cout << std::endl << std::endl;
	system("pause");
}