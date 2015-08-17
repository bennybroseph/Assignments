#include <iostream>

int main()
{
	//1

	std::cout << "Exercise 1" << std::endl;
	std::cout << "----------" << std::endl << std::endl;

	std::cout << "a. 2 - Valid" << std::endl;
	std::cout << "b. 5 - Valid" << std::endl;
	std::cout << "c. 0 - Valid?" << std::endl;
	std::cout << "d. 13 - Valid" << std::endl;
	std::cout << "e. 12.5? - Valid" << std::endl;
	std::cout << "f. 13 - Valid" << std::endl;
	std::cout << "g. 29 - Valid" << std::endl;
	std::cout << "h. 29.375 - Valid" << std::endl;
	std::cout << "i. Invalid, division by 0";

	std::cout << std::endl << std::endl;
	system("pause");

	//2

	system("cls");

	std::cout << "Exercise 2" << std::endl;
	std::cout << "----------" << std::endl << std::endl;

	float s_Height1;
	float high_tax;
	float low_tax;
	int steam_cost;

	std::cout << std::endl << std::endl;
	system("pause");

	//3

	system("cls");

	std::cout << "Exercise 3" << std::endl;
	std::cout << "----------" << std::endl << std::endl;

	int x1;
	float x2;
	char x3;
	int x4;
	bool x5;

	std::cout << std::endl << std::endl;
	system("pause");

	//4

	system("cls");

	std::cout << "Exercise 4" << std::endl;
	std::cout << "----------" << std::endl << std::endl;

	int a,b,hold;

	std::cout << "Enter an integer: ";
	std::cin >> a;

	std::cout << std::endl << "Enter another integer: ";
	std::cin >> b;

	std::cout << std::endl;
	std::cout << "You entered 'a' as: " << a << std::endl
		      << "You entered 'b' as: " << b << std::endl;
	std::cout << std::endl;

	std::cout << "One moment..." << std::endl << std::endl;
	system("pause");

	hold = a;
	a = b;
	b = hold;

	std::cout << std::endl << std::endl;
	std::cout << "Presto! The numbers have been swapped." << std::endl;
	std::cout << "'a' is now: " << a << std::endl
			  << "'b' is now : " << b;

	std::cout << std::endl << std::endl;
	system("pause");

	//5

	system("cls");

	std::cout << "Exercise 5" << std::endl;
	std::cout << "----------" << std::endl << std::endl;

	int i = 0;
	float f = 0;
	char ch = 'a';
	std::cin >> i >> ch >> f;
	std::cout << "i: " << i << "\nch: " << ch << "\nf: " << f << std::endl;
	std::cout << std::endl << std::endl;
	system("pause");

	//6

	system("cls");

	std::cout << "Exercise 6" << std::endl;
	std::cout << "----------" << std::endl << std::endl;

	int num1, num2, num3, num4, num5;

	std::cout << "Enter an integer: ";
	std::cin >> num1;
	std::cout << "Another! ";
	std::cin >> num2;
	std::cout << "Another! ";
	std::cin >> num3;
	std::cout << "Another! ";
	std::cin >> num4;
	std::cout << "Last one: ";
	std::cin >> num5;

	std::cout << "The average of these numbers is " << (num1 + num2 + num3 + num4 + num5) / 5;

	std::cout << std::endl << std::endl;
	system("pause");

	//7

	system("cls");

	std::cout << "Exercise 7" << std::endl;
	std::cout << "----------" << std::endl << std::endl;

	char alpha1, alpha2;
	int round;

	std::cout << "Enter a letter of the alphabet: ";
	std::cin >> alpha1;

	std::cout << "Enter another letter: ";
	std::cin >> alpha2;

	round = -(((alpha2 - alpha1) % 2) != 0);

	std::cout << "The integer equivilant is: " << (int)alpha1 << ", " << (int)alpha2 << ". 'round' is: " << round << std::endl << std::endl;

	if (alpha1 > 90)
		alpha1 -= 32;

	if (alpha2 > 90)
		alpha2 -= 32;

	if (alpha1 > alpha2)
		std::cout << " The letter inbetween these two chars is: " << char(round + alpha1 + ((alpha2 - alpha1) / 2));
	else if (alpha1 < alpha2)
		std::cout << "The letter inbetween these two chars is: " << char(round + alpha2 + ((alpha1 - alpha2) / 2));
	else
		std::cout << "These are the same letter...";

	std::cout << std::endl << std::endl;
	system("pause");

	return 0;
}