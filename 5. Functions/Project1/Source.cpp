#include <iostream>  

void Exercise1();

void Exercise2();
float Smaller(float, float);

void Exercise3();
float Smaller(float, float, float);

void Exercise4();
float Half(float);

void New(int);
void End();

int main()
{
	New(1);
	Exercise1();
	End();

	New(2);
	Exercise2();
	End();

	New(3);
	Exercise3();
	End();

	New(4);
	Exercise4();
	End();
}

void Exercise1()
{
	std::cout << "The output is:\n\n1\n1\n2\n2\n3\n2\n1";
}

void Exercise2()
{
	float var1, var2, small;

	std::cout << "Enter value 1: ";
	std::cin >> var1;
	std::cout << "Enter value 2: ";
	std::cin >> var2;

	small = Smaller(var1, var2);
}
float Smaller(float p_var1, float p_var2)
{
	if (p_var1 < p_var2)
	{
		std::cout << "The smaller number is: " << p_var1;
		return p_var1;
	}
	else if (p_var1 == p_var2)
	{
		std::cout << "Both numbers are equal...";
		return 0;
	}
	else
	{
		std::cout << "The smaller number is: " << p_var2;
		return p_var2;
	}
}

void Exercise3()
{
	float var1, var2, var3, small;

	std::cout << "Enter value 1: ";
	std::cin >> var1;
	std::cout << "Enter value 2: ";
	std::cin >> var2;
	std::cout << "Enter value 3: ";
	std::cin >> var3;

	small = Smaller(var1, var2, var3);

	std::cout << std::endl << "This is called overloading";
}
float Smaller(float p_var1, float p_var2, float p_var3)
{
	if ((p_var1 == p_var2) && (p_var1 == p_var3))
	{
		std::cout << "All three numbers are equal...";
		return 0;
	}
	else if ((p_var1 <= p_var2)&&(p_var1 <= p_var3))
	{
		std::cout << "The smallest number is: " << p_var1;
		return p_var1;
	}
	else if ((p_var2 <= p_var1) && (p_var2 <= p_var3))
	{
		std::cout << "The smallest numbre is: " << p_var2;
	}
	else
	{
		std::cout << "The smaller number is: " << p_var3;
		return p_var2;
	}
}

void Exercise4()
{
	float number = 16.721f;
	float result = Half(number);

	std::cout << "Half of " << number << " = " << result;
}
float Half(float p_var)
{
	return p_var / 2;
}

void New(int i)
{
	system("cls");
	std::cout << "Exercise " << i << std::endl;

	if (i < 10)
		std::cout << "----------";
	else
		std::cout << "-----------";

	std::cout << std::endl << std::endl;
}
void End()
{
	std::cout << std::endl << std::endl;
	system("pause");
}