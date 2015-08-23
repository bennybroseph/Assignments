#include <iostream>

int main()
{
	//1
	//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
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
	//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
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
	//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
	system("cls");
	std::cout << "Exercise 3" << std::endl;
	std::cout << "----------" << std::endl << std::endl;

	char name_2D[5][256];
	int f;

	for (i = 0; i < 5; i++)
	{
		std::cout << i+1 << ". " << "Please enter your first and last name: ";
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
	//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
	system("cls");
	std::cout << "Exercise 4" << std::endl;
	std::cout << "----------" << std::endl << std::endl;

	std::cout << (char)7;

	std::cout << std::endl << std::endl;
	system("pause");

	//5
	//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
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
	//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
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
	//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
	system("cls");
	std::cout << "Exercise 7" << std::endl;
	std::cout << "----------" << std::endl << std::endl;

	std::cout << "a. char name[4] = \"John\";" << std::endl << "   Is attempting to declare char \'name\' with 4 elements and set it to \"John\"." << std::endl << std::endl;
	std::cout << "   It should be written as \'char name[4] = {\"J\", \"o\", \"h\", \"n\"};\' instead.\n   Or as strcpy_s(name, \"John\");" << std::endl << std::endl;

	std::cout << "b. char name[32];\n   cout << name;" << std::endl << "   Is attempting to declare char \'name\' with 32 elements and output it." << std::endl << std::endl;
	std::cout << "   This won't work as \'name\' has no value.\n   The array needs to have values put in each element first" << std::endl << std::endl;

	std::cout << "c. char name[7] = \"Donald\";\n   char surname[7] = \"Knuth\"\n   strcat(name, surname);\n" << "   Is attempting to declare 'name' with 7 elements and set it to \"Donald\"\n"
		      << "   It then declares 'surname' with 7 elements and set it to \"Knuth\"\n" << "   Finally, it tries to add both character arrays together" << std::endl << std::endl;
	std::cout << "   It has the same issue as 'a.' and should be resolved the same way.\n   Also it should be written strcat_s(name, surname);" << std::endl << std::endl;

	std::cout << "d. char errorMsg[5] = \"Stop\";\n   errorMsg[strlen(errorMsg)] = \"!\";\n   cout << errorMsg;\n" << "   Is attempting to declare 'errorMsg' with 5 elements and set it to \"Stop\"\n"
		      << "   It then tries to add an \"!\" to the end and output it." << std::endl << std::endl;
	std::cout << "   The only issue is the same one from 'a.' and 'c.'.\n   The program will run as expected otherwise.";

	std::cout << std::endl << std::endl;
	system("pause");

	//8
	//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
	system("cls");
	std::cout << "Exercise 8" << std::endl;
	std::cout << "----------" << std::endl << std::endl;

	char input[256];

	std::cout << "Enter a single word: ";
	std::cin >> input;

	char hold = input[0];
	for (i = 0; i < strlen(input) - 1; i++)
	{
		input[i] = input[i+1];
	}
	input[i] = hold;
	input[i + 1] = 'a';
	input[i + 2] = 'y';
	input[i + 3] = 0;

	std::cout << std::endl << "That's " << input << " in pig latin.";

	std::cout << std::endl << std::endl;
	system("pause");

	//9
	//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
	system("cls");
	std::cout << "Exercise 9" << std::endl;
	std::cout << "----------" << std::endl << std::endl;

	int words = 1, letters;

	std::cout << "Enter multiple words: ";
	std::cin.getline(input, 256);
	
	letters = strlen(input);
	for (i = 0; i < strlen(input); i++)
	{
		if (input[i] == ' ')
		{
			words += 1;
			letters -= 1;
		}
	}
	std::cout << "There are " << words << " words in the input given." << std::endl 
		      << "There are " << letters << " letters in the input given.";

	std::cout << std::endl << std::endl;
	system("pause");

	//10
	//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
	system("cls");
	std::cout << "Exercise 10" << std::endl;
	std::cout << "-----------" << std::endl << std::endl;

	char pal[256];
	int j = 0;
	bool is_pal = true;

	std::cout << "Enter what you think is a palindrome: ";
	std::cin >> input;

	for (i = strlen(input)-1; i >= 0; i--)
	{
		pal[j] = input[i];
		j++;
	}
	pal[j] = 0;

	for (i = 0; i < strlen(input); i++)
	{
		if (input[i] != pal[i])
		{
			is_pal = false;
			std::cout << "This is not a palindrome...";
			break;
		}
	}
	if (is_pal)
		std::cout << "This is indeed a palindrome.";
		
	std::cout << std::endl << std::endl;
	system("pause");

	//11
	//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
	system("cls");
	std::cout << "Exercise 11" << std::endl;
	std::cout << "-----------" << std::endl << std::endl;

	char string[256] = { 'A', ' ', 's' , 't', 'r', 'i', 'n', 'g', 0 };
	char str_cmp[256] = { 'A', ' ', 's' , 't', 'r', 'i', 'n', 'g', 0 };
	char str_cat[256] = { ' ', 'p', 'l', 'u','s',' ','m','o','r','e', 0 };
	char str_cpy[256];

	bool same = true;

	for (i = 0; i < sizeof(string); i++)
	{
		if (string[i] == 0)
		{
			std::cout << "'strlen(string)' would return " << i << std::endl;
			length = i;
			break;
		}
	}
	for (i = 0; i < length; i++)
	{
		str_cpy[i] = string[i];

		if (string[i] != str_cmp[i])
			same = false;
	}
	str_cpy[i] = 0;
	if (same)
		std::cout << "The two strings are equal." << std::endl;
	else
		std::cout << "The two strings are not the same" << std::endl;

	for (i = 0; str_cat[i] != 0; i++)
	{
		string[i + length] = str_cat[i];
	}	

	std::cout << "Adding the two string together gets you '" << string << "'" << std::endl;
	std::cout << "A copy of the string was stored as '" << str_cpy << "'";

	std::cout << std::endl << std::endl;
	system("pause");

	//12
	//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
	system("cls");
	std::cout << "Exercise 12" << std::endl;
	std::cout << "-----------" << std::endl << std::endl;

	int counter[256];
	char sub = 0;
	int high = 0;
	for (i = 0; i < 256; i++)
	{
		counter[i] = 0;
	}

	std::cout << "Enter multiple words: ";
	std::cin.getline(input, 256);

	for (i = 0; i < strlen(input); i++)
	{
		counter[(int)input[i]] += 1;
	}
	for (i = 0; i < 256; i++)
	{
		if (counter[i] > high)
		{
			high = counter[i];
			sub = i;
		}
	}
	std::cout << "The character appearing the most is '" << sub << "'";

	std::cout << std::endl << std::endl;
	system("pause");

	//13
	//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
	system("cls");
	std::cout << "Exercise 13" << std::endl;
	std::cout << "-----------" << std::endl << std::endl;

	int day, month, year;

	std::cout << "Please enter the date in format 'dd/mm/yyyy': ";
	std::cin.getline(input, 256);

	day = 10 * (input[0] - 48) + (input[1] - 48);
	month = 10 * (input[3] - 48) + (input[4] - 48);
	year = (1000 * (input[6] - 48)) + (100 * (input[7] - 48)) + (10 * (input[8] - 48)) + (input[9] - 48);

	switch (month)
	{
	case 1:
		std::cout << "January ";
		break;
	case 2:
		std::cout << "February ";
		break;
	case 3:
		std::cout << "March ";
		break;
	case 4:
		std::cout << "April ";
		break;
	case 5:
		std::cout << "May ";
		break;
	case 6:
		std::cout << "June ";
		break;
	case 7:
		std::cout << "July ";
		break;
	case 8:
		std::cout << "August ";
		break;
	case 9:
		std::cout << "September ";
		break;
	case 10:
		std::cout << "October ";
		break;
	case 11:
		std::cout << "November ";
		break;
	case 12:
		std::cout << "December ";
		break;
	}
	std::cout << day << ", " << year;

	std::cout << std::endl << std::endl;
	system("pause");

	//14
	//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
	system("cls");
	std::cout << "Exercise 14" << std::endl;
	std::cout << "-----------" << std::endl << std::endl;

	char removed[256];
	int space[128];
	int k = 0;

	std::cout << "Enter a line of text with spaces: ";
	std::cin.getline(input,256);

	j = 0;
	for (i = 0; i < strlen(input); i++)
	{
		if (input[i] == ' ')
		{
			space[j] = i;
			j++;
		}
	}
	j = 0;
	for (i = 0; i < strlen(input); i++)
	{
		if (i != space[j])
		{
			removed[k] = input[i];
			k++;
		}
		else
			j++;
	}
	removed[k] = 0;
	std::cout << std::endl << "Spaces have been removed: '" << removed << "'";

	std::cout << std::endl << std::endl;
	system("pause");

	//15
	//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
	system("cls");
	std::cout << "Exercise 15" << std::endl;
	std::cout << "-----------" << std::endl << std::endl;

	std::cout << "Enter a string to encode: ";
	std::cin.getline(input, 256);

	for (i = 0; i < 256; i++)
	{
		if (input[i] == 0)
		{
			length = i;
			break;
		}
	}
	for (i = 0; i < length; i++)
	{
		input[i] += 5;
	}

	std::cout << "The encoded string is now: " << input;

	std::cout << std::endl << std::endl;
	system("pause");
}