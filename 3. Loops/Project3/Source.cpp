#include <iostream>

int main()
{
	char alpha[256], get_var;
	char test[] = { 'S', 't', 'a', 'r', 't', 0, 'E', 'n', 'd' };
	short i;
	
	for (i = 0; i < 256; i++)
	{
		alpha[i] = i;

		if ((i == 33) || (i == 48) || (i == 58) || (i == 65) || (i == 91) || (i == 97) || (i == 123) || (i == 128) || (i == 166) || (i == 176) || (i == 179) || (i == 219) || (i == 224))
			std::cout << std::endl;

		std::cout << alpha[i];
	}

	std::cout << "\n\nEnter a character to find it's integer and ASCII equivilant: ";
	std::cin >> get_var;

	std::cout << std::endl << std::endl;
	std::cout << get_var << " = " << (int)get_var;

	std::cout << std::endl << std::endl;
	system("pause");
	system("cls");

	std::cout << test << std::endl << std::endl
		      << "This proves that even if a string contains more data, a '0' or 'NULL' equivilant value will terminate the character array prematurly." << std::endl;
	

	system("pause");

	return 0;
}