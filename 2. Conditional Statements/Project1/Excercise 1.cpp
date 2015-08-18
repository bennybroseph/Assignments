//#include <iostream> //includes a precompiled library for printing and recieving data 
//
//int main() //the function 'main' defined as an integer with no arguments
//{//begin
//	std::string dummy = "NULL"; //define the character string 'dummy' as the character string "NULL"
//	bool boolean; //define the bool 'boolean' with no given value
//
//	std::cout << "Enter a 1 or 0" << std::endl << std::endl; //Print 'Hello World' to the console. std::endl moves the cursor console to the next line.
//
//	while ((dummy != "1") && (dummy != "0")) //check if the 'dummy' variable defined as a string is currently equal to a '1' or '0' character. if it isn't, loop indefinitly
//	{
//		dummy = std::cin.get(); //Wait for input indefinitly
//
//		if ((dummy != "1") && (dummy != "0")) //check if the 'dummy' variable defined as a string is currently equal to a '1' or '0' character.
//		{
//			std::cout << std::endl << "You entered: " << dummy.c_str() << " for no apparent reason. This time, enter a 1 or 0" << std::endl << std::endl; //explain to user what they did wrong
//			dummy = std::cin.get(); //ask for input again
//		}
//	}
//
//	if (dummy == "0") //check if the 'dummy' variable defined as a string is currently equal to a '0' character.
//		boolean = 0; //set the bool 'boolean' to the integer '0' or 'false'.
//	else //whenever the previous flow control evaluates as the integer '0'
//		boolean = 1; //set the bool 'boolean' to the integer '1' or 'true'.
//
//	system("cls"); //completely clear the console
//	std::cout << "Good, you entered: " << boolean << std::endl << std::endl; //output the bool 'boolean' and skip two lines in the console
//	system("pause"); //wait for the user to hit the return/enter key indefinitly
//
//	return 0; //any funtion that calls 'main' is returned the integer '0'. in this case the program itself ends and returns '0'.
//}//end


#include <iostream>

int main()
{
	int x = 0, y = 0;

	//1
	std::cout << "Exercise 1" << std::endl;
	std::cout << "----------" << std::endl << std::endl;

	if (y == 0)
		x = 100;
	std::cout << "x = " << x << std::endl << "y = " << y << std::endl<< std::endl;

	system("pause");

	//2

	system("cls");

	std::cout << "Exercise 2" << std::endl;
	std::cout << "----------" << std::endl << std::endl;

	std::cout << "Please enter an integer: ";
	std::cin >> x;
	std::cout << std::endl << "Please enter a second integeter: ";
	std::cin >> y;

	std::cout << std::endl << std::endl;

	if (x > y)
		std::cout << "The first number was larger; " << x << std::endl << std::endl;
	else if (x == y)
		std::cout << "Both numbers were equal." << std::endl << std::endl;
	else
		std::cout << "The second number was larger; " << y << std::endl << std::endl;

	system("pause");

	//3

	system("cls");

	std::cout << "Exercise 3" << std::endl;
	std::cout << "----------" << std::endl << std::endl;

	int num1, num2, num3, num4, num5;

	std::cout << "Please enter an integer: ";
	std::cin >> num1;
	std::cout << std::endl << "Another! ";
	std::cin >> num2;
	std::cout << std::endl << "Another! ";
	std::cin >> num3;
	std::cout << std::endl << "Another! ";
	std::cin >> num4;
	std::cout << std::endl << "Last one: ";
	std::cin >> num5;

	if (num1 + num2 + num3 + num4 + num5 > 0)
	{
		
	}
	else if (num1 + num2 + num3 + num4 + num5 == 0)
	{
		std::cout << num1 << ", " << num2 << ", " << num3 << ", " << num4 << ", " << num5;
	}
	else
	{
		if ((num1 >= num2) && (num1 >= num3) && (num1 >= num4) && (num1 >= num5))
		{
			std::cout << num1 << ", ";
			if ((num2 >= num3) && (num2 >= num4) && (num2 >= num5))
			{
				std::cout << num2 << ", ";
				if ((num3 >= num4) && (num3 >= num5))
				{
					std::cout << num3 << ", ";
					if (num4 > num5)
						std::cout << num4 << ", " << num5;
					else
						std::cout << num5 << ", " << num4;
				}
				else if ((num4 >= num3) && (num4 >= num5))
				{
					std::cout << num4 << ", ";
					if (num3 > num5)
						std::cout << num3 << ", " << num5;
					else
						std::cout << num5 << ", " << num3;
				}
				else
				{
					std::cout << num5 << ", ";
					if (num3 > num4)
						std::cout << num3 << ", " << num4;
					else
						std::cout << num4 << ", " << num3;
				}
			}
			else if ((num3 >= num2) && (num3 >= num4) && (num3 >= num5))
			{
				std::cout << num3 << ", ";
				if ((num2 >= num4) && (num2 >= num5))
				{
					std::cout << num2 << ", ";
					if (num4 > num5)
						std::cout << num4 << ", " << num5;
					else
						std::cout << num5 << ", " << num4;
				}
				else if ((num4 >= num2) && (num4 >= num5))
				{
					std::cout << num4 << ", ";
					if (num2 > num5)
						std::cout << num2 << ", " << num5;
					else
						std::cout << num5 << ", " << num2;
				}
				else
				{
					std::cout << num5 << ", ";
					if (num2 > num4)
						std::cout << num2 << ", " << num4;
					else
						std::cout << num4 << ", " << num2;
				}
			}
		}
		else if ((num2 > num1) && (num2 > num3) && (num2 > num4) && (num2 > num5))
		{

		}
	}

	system("pause");

	//4

	system("cls");

	std::cout << "Exercise 4" << std::endl;
	std::cout << "----------" << std::endl << std::endl;

	int choice = 2;

	switch(choice)
	{
		case 1:
			std::cout << "1";
			break;
		case 2: 
		case 3:
			std::cout << "2 or 3";
			break;
		case 4:
			std::cout << "4";
			break;
		default:
			std::cout << "Invalid";
			break;
	}

	std::cout << std::endl << std::endl;
	system("pause");

	//5

	system("cls");

	std::cout << "Exercise 5" << std::endl;
	std::cout << "----------" << std::endl << std::endl;

	x = 2;

	y = (x == 0) ? 0 : 10 / x;

	std::cout << y << std::endl << std::endl;

	system("pause");

	//6

	system("cls");

	std::cout << "Exercise 6" << std::endl;
	std::cout << "----------" << std::endl << std::endl;

	char operator_var;

	std::cout << "Enter an integer: ";
	std::cin >> x;

	std::cout << std::endl << "Enter another integer: ";
	std::cin >> y;

	std::cout << std::endl << "Enter an operator: ";
	std::cin >> operator_var;

	switch (operator_var)
	{
		case '+': 
			std::cout << "x + y = " << x + y;
			break;
		case '-':
			std::cout << "x - y = " << x - y;
			break;
		case '*':
			std::cout << "x * y = " << x * y;
			break;
		case '/':
			std::cout << "x / y = " << x / y;
			break;
		case '%':
			std::cout << "x % y = " << x % y;
			break;
		default:
			std::cout << "Invalid input...";
			break;
	}

	std::cout << std::endl << std::endl;
	system("pause");

	//7

	system("cls");

	std::cout << "Exercise 7" << std::endl;
	std::cout << "----------" << std::endl << std::endl;

	std::cout << "Enter an integer representing a month: ";
	std::cin >> x;

	if (x == 2)
	{
		std::cout << "The 2nd month has 28 days";
	}
	else
	{
		if (x == 1)
			std::cout << "The 1st month has ";
		if (x == 3)
			std::cout << "The 3rd month has ";
		if (x >= 4)
			std::cout << "The " << x << "th month has ";

		if (x > 7) 
			std::cout << ((x % 2 == 0) ? 31 : 30) << " days";
		else
			std::cout << ((x % 2 == 0) ? 30 : 31) << " days";
	}

	std::cout << std::endl << std::endl;
	system("pause");

	//8

	system("cls");

	std::cout << "Exercise 8" << std::endl;
	std::cout << "----------" << std::endl << std::endl;

	std::cout << "a. true" << std::endl;
	std::cout << "b. true" << std::endl;
	std::cout << "c. 20" << std::endl;
	std::cout << "d. true" << std::endl;
	std::cout << "e. true" << std::endl;
	std::cout << "f. false" << std::endl;
	std::cout << "g. true" << std::endl;
	std::cout << "h. true" << std::endl;
	std::cout << "i. false" << std::endl;
	std::cout << "j. true" << std::endl;

	std::cout << std::endl << std::endl;
	system("pause");

	//9

	system("cls");

	std::cout << "Exercise 9" << std::endl;
	std::cout << "----------" << std::endl << std::endl;

	std::cout << "a. true" << std::endl;
	std::cout << "b. true" << std::endl;
	std::cout << "c. false" << std::endl;
	std::cout << "d. true" << std::endl;
	std::cout << "e. false" << std::endl;

	std::cout << std::endl << std::endl;
	system("pause");
}