#include <iostream>  
#include <cstdlib>
#include <time.h>

void Exercise1();

void Exercise2();
float Smaller(float, float);

void Exercise3();
float Smaller(float, float, float);

void Exercise4();
float Half(float);

void Exercise5();
void CoinToss(int);

void Exercise6();

void Exercise7();
int SumTo(int);

void Exercise8();
int SumArray(int*, int);

void Exercise9();
int MinInArray(int*, int);

void Exercise10();
void MultiplyByIndex(int*, int*, int);

void Exercise11();
void SumTwoArrays(int*, int*, int*, int);

void Exercise12();
void RunningArraySum(int*, int);

void Exercise13();
int FindNum(int*, int, int);

void Exercise14();
int Split(int*, int, int*, int*);

void Exercise15();
int Power(int, int);

void Exercise16();
void LookandSay(int*, int);

void New(int);
void End();

int main()
{
	srand(time(NULL));

	/*New(1);
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

	New(5);
	Exercise5();
	End();

	New(6);
	Exercise6();
	End();

	New(7);
	Exercise7();
	End();

	New(8);
	Exercise8();
	End();

	New(9);
	Exercise9();
	End();

	New(10);
	Exercise10();
	End();

	New(11);
	Exercise11();
	End();

	New(12);
	Exercise12();
	End();

	New(13);
	Exercise13();
	End();

	New(14);
	Exercise14();
	End()

	New(15);
	Exercise15();
	End();*/

	New(16);
	Exercise16();
	End();

	New(17);
	Exercise17();
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
		std::cout << "The smallest number is: " << p_var2;
		return p_var2;
	}
	else
	{
		std::cout << "The smaller number is: " << p_var3;
		return p_var3;
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

void Exercise5()
{
	int flips;

	std::cout << "How many times should I flip the coin? ";
	std::cin >> flips;

	CoinToss(flips);
}
void CoinToss(int flips)
{
	int coin;
	int i;

	for (i = 0; i < flips; i++)
	{
		coin = rand() % 2 + 1;
		switch (coin)
		{
			case 1:
				std::cout << "The coin reads Heads" << std::endl;
				break;
			case 2:
				std::cout << "The coin reads Tails" << std::endl;
				break;
			default:
				std::cout << "An error occured..." << std::endl;
				break;
		}
	}
}

void Exercise6()
{
	std::cout << "a. The function never returns a value." << std::endl;
	std::cout << "b. When n is anything other than 0, the function does not return a value.";
	std::cout << "c. 'x' is defined as a double, but is being passed to 'square' as an int.\n   'square' then returns an int. This will result in a loss of value since-\n   it will not return the "
			  << "square of 'x'; rather it returns a rounded value." << std::endl;
}

void Exercise7()
{
	int result = SumTo(3); //result = 1 + 2 + 3 = 6
	std::cout << result << std::endl;

	result = SumTo(15); //result should now be 120
	std::cout << result << std::endl;

}
int SumTo(int N)
{
	int result = 0;
	int i;
	
	for (i = 0; i <= N; i++)
	{
		result += i;
	}

	return result;
}

void Exercise8()
{
	int integer_array[5] = { 7, 3, 2, 4, 9 };
	int result = SumArray(integer_array, 5); //result = 25
	std::cout << result << std::endl;
}
int SumArray(int* p_array, int size)
{
	int result = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		result += *(p_array + i);
	}

	return result;
}

void Exercise9()
{
	int integer_array[7] = { 10, 15, 7, 4, 13, 19, 8 };
	int result = MinInArray(integer_array, 7); //result = 4
	std::cout << result << std::endl;
}
int MinInArray(int* p_array, int size)
{
	int result = 0, hold = *(p_array);
	int i;

	for (i = 0; i < size; i++)
	{
		if (*(p_array + i) < hold)
			hold = *(p_array + i);
	}

	return hold;
}

void Exercise10()
{
	int integer_array[7] = { 10, 15, 7, 4, 13, 19, 8 };
	int output_array[7] = {};
	MultiplyByIndex(integer_array, output_array, 7);
	//output_array should be {0, 15, 14, 12, 52, 95, 48};
}
void MultiplyByIndex(int* input_array, int* output_array, int size)
{
	int i;

	std::cout << "{";
	for (i = 0; i < size; i++)
	{
		*(output_array + i) = *(input_array + i) * i;
		std::cout << *(output_array + i);

		if (i != size - 1)
			std::cout << ", ";
		else
			std::cout << "};";
	}
}

void Exercise11()
{
	int integer_array1[7] = { 10, 15, 7, 4, 13, 19, 8 };
	int integer_array2[7] = { 19, 13, 4, 7, 15, 8, 10 };
	int output_array[7] = {};

	SumTwoArrays(integer_array1, integer_array2, output_array, 7);
}
void SumTwoArrays(int* p_array1, int* p_array2, int* output_array, int size)
{
	int i;
	
	std::cout << "{";
	for (i = 0; i < size; i++)
	{
		*(output_array + i) = *(p_array1 + i) + *(p_array2 + i);
		std::cout << *(output_array + i);

		if (i != size - 1)
			std::cout << ", ";
		else
			std::cout << "};";
	}
}

void Exercise12()
{
	int integer_array[4] = {3, 2, 4, 7};

	std::cout << "First run:  ";
	RunningArraySum(integer_array, 4);
	std::cout << "Second run: ";
	RunningArraySum(integer_array, 4);
	std::cout << "Third run:  ";
	RunningArraySum(integer_array, 4);
}
void RunningArraySum(int* p_array, int size)
{
	int i;

	std::cout << "{";
	for (i = 0; i < size; i++)
	{
		if (i != 0)
			*(p_array + i) = *(p_array + i) + *(p_array + (i - 1));
		std::cout << *(p_array + i);

		if (i != size - 1)
			std::cout << ", ";
		else
			std::cout << "};" << std::endl;
	}
}

void Exercise13()
{
	int integer_array[7] = { 3, 2, 4, 7, 19, 32 ,20 };
	int result;

	result = FindNum(integer_array, 7, 19);

	if (result != -1)
		std::cout << 19 << " was found at index " << result;
	else
		std::cout << 19 << "was not found...";
}
int FindNum(int* p_array, int size, int find)
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (*(p_array + i) == find)
		{
			return i;
		}			
	}
	return -1;
}

void Exercise14()
{
	int integer_array[7] = { 3, 2, -4, 7, -19, 32 ,20 };
	int output_array1[7] = {}, output_array2[7] = {};
	int result;

	result = Split(integer_array, 7, output_array1, output_array2);
	std::cout << "There were " << result << " positive numbers in the array.";
}
int Split(int* p_array, int size, int* output_array1, int* output_array2)
{
	int result = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		if (*(p_array + i) >= 0)
		{
			*(output_array1 + i) = *(p_array + i);
			result++;
		}
		else
			*(output_array2 + i) = *(p_array + i);
	}

	return result;
}

void Exercise15()
{
	int x = 10, y = 3;
	int result = Power(x, y);

	std::cout << x << " to the power of " << y << " is: " << result;
}
int Power(int x, int y)
{
	int i;

	for (i = 1; i < y; i++)
	{
		x *= x;
	}
	return x;
}

void Exercise16()
{
	int integer_array[19] = { 1, 2, 2, 1, 5, 1, 1, 7, 7, 7, 7, 1, 1, 1, 1, 1, 1, 1, 1 };

	LookandSay(integer_array, 19);
}
void LookandSay(int* p_array, int size)
{
	int i;
	int hold = *p_array, amount = 0;

	for (i = 0; i <= size; i++)
	{
		if ((*(p_array + i) != hold)||(i == size))
		{
			std::cout << amount << ", " << *(p_array + (i - 1));
			if (i != size)
				std::cout << ", ";

			hold = *(p_array + i);
			amount = 1;
		}
		else
			amount++;
	}
}

void Exercise17()
{

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