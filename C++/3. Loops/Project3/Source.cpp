//#include <iostream>
//
//int main()
//{
//	char alpha[256], get_var;
//	char test[] = { 'S', 't', 'a', 'r', 't', 0, 'E', 'n', 'd' };
//	short i;
//	
//	for (i = 0; i < 256; i++)
//	{
//		alpha[i] = i;
//
//		if ((i == 33) || (i == 48) || (i == 58) || (i == 65) || (i == 91) || (i == 97) || (i == 123) || (i == 128) || (i == 166) || (i == 176) || (i == 179) || (i == 219) || (i == 224))
//			std::cout << std::endl;
//
//		std::cout << alpha[i];
//	}
//
//	std::cout << "\n\nEnter a character to find it's integer and ASCII equivilant: ";
//	std::cin >> get_var;
//
//	std::cout << std::endl << std::endl;
//	std::cout << get_var << " = " << (int)get_var;
//
//	std::cout << std::endl << std::endl;
//	system("pause");
//	system("cls");
//
//	std::cout << test << std::endl << std::endl
//		      << "This proves that even if a string contains more data, a '0' or 'NULL' equivilant value will terminate the character array prematurly." << std::endl;
//	
//
//	system("pause");
//
//	return 0;
//}

#include <iostream>

int main()
{
	//1
	std::cout << "Exercise 1" << std::endl;
	std::cout << "----------" << std::endl << std::endl;

	int i;

	for (i = 100; i >= 0; i--)
	{
		std::cout << i << " ";
	}

	std::cout << std::endl << std::endl;
	for (i = 99; i >= 0; i--)
	{
		std::cout << i << " ";
	}

	std::cout << std::endl << std::endl;
	for (i = 100; i > 0; i--)
	{
		std::cout << i << " ";
	}

	std::cout << std::endl << std::endl;
	for (i = 100; i >= 0; i-=2)
	{
		std::cout << i << " ";
	}

	std::cout << std::endl << std::endl;
	system("pause");

	//2

	system("cls");

	std::cout << "Exercise 2" << std::endl;
	std::cout << "----------" << std::endl << std::endl;

	for (i = 100; i > 0; i--)
	{
		if ((i % 3) == 0)
			std::cout << "Fizz " << i << " ";
	}

	std::cout << std::endl << std::endl;
	for (i = 100; i > 0; i--)
	{
		if ((i % 5) == 0)
			std::cout << "Buzz " << i << " ";
	}

	std::cout << std::endl << std::endl;
	for (i = 100; i > 0; i--)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
			std::cout << "FizzBuzz ";
		else
			std::cout << i << " ";
	}

	std::cout << std::endl << std::endl;
	system("pause");

	//3

	system("cls");

	std::cout << "Exercise 3" << std::endl;
	std::cout << "----------" << std::endl << std::endl;

	int total = 0;

	for (i = 0; i < 1000; i++)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
			total += i;
	}
	std::cout << "The sum of the multiples of 3 or 5 below 1000 is " << total << ".";

	std::cout << std::endl << std::endl;
	system("pause");

	//4

	system("cls");

	std::cout << "Exercise 4" << std::endl;
	std::cout << "----------" << std::endl << std::endl;

	//First exercise again
	i = 100;
	while (i >= 0)
	{
		std::cout << i << " ";
		i--;
	}

	std::cout << std::endl << std::endl;
	i = 99;
	while (i >= 0)
	{
		std::cout << i << " ";
		i--;
	}

	std::cout << std::endl << std::endl;
	i = 100;
	while (i > 0)
	{
		std::cout << i << " ";
		i--;
	}

	std::cout << std::endl << std::endl;
	i = 100;
	while (i >= 0)
	{
		std::cout << i << " ";
		i -= 2;
	}

	//Second exercise again
	std::cout << std::endl << std::endl;
	i = 100;
	while (i > 0)
	{
		if ((i % 3) == 0)
			std::cout << "Fizz " << i << " ";
		i--;
	}

	std::cout << std::endl << std::endl;
	i = 100;
	while (i > 0)
	{
		if ((i % 5) == 0)
			std::cout << "Buzz " << i << " ";
		i--;
	}

	std::cout << std::endl << std::endl;
	i = 100;
	while (i > 0)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
			std::cout << "FizzBuzz ";
		else
			std::cout << i << " ";
		i--;
	}

	//Third exercise again
	std::cout << std::endl << std::endl;

	total = 0;
	i = 0;
	while (i < 1000)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
			total += i;
		i++;
	}
	std::cout << "The sum of the multiples of 3 or 5 below 1000 is " << total << ".";

	std::cout << std::endl << std::endl;
	system("pause");
}