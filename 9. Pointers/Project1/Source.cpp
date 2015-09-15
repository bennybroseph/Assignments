#include <iostream>

void Exercise1();
void Exercise2();
void Exercise4();
void Exercise5();
void Exercise6();
void Exercise7();

void RevString(char* a_szArray);
int CountEven(int* a_piArray, int a_iSize);
double* Maximum(double* a_pdArray, int a_iSize);
bool Contains(char* a_szArray, char a_cSearchValue);

void New(char* a_szExercise);
void End();
void Clear();

int main()
{
	/*New("1");
	Exercise1();
	End();

	New("2&3");
	Exercise2();
	End();

	New("4");
	Exercise4();
	End();

	New("5");
	Exercise5();
	End();*/

	New("6");
	Exercise6();
	End();

	New("7");
	Exercise7();
	End();

	return 0;
}

void Exercise1()
{
	char c = 'T', d = 'S';
	char *p1 = &c;
	char *p2 = &d;
	char *p3;

	p3 = &d;
	std::cout << "*p3 = " << *p3 << std::endl; // (1)
	p3 = p1;
	std::cout << "*p3 = " << *p3; // (2)
	std::cout << ", p3 = " << p3 << std::endl; // (3)
	*p1 = *p2;
	std::cout << "*p1 = " << *p1; // (4)
	std::cout << ", p1 = " << p1 << std::endl; // (5)
}

void Exercise2()
{
	int *p;
	int i;
	int k;

	i = 42;
	k = i;
	p = &i;

	std::cout << "*p = 75 will set 'i' to 75" << std::endl;
	*p = 75;
	std::cout << "i = " << i;
}

void Exercise4()
{
	std::cout << "char c = 'A'" << std::endl;
	std::cout << "double *p = &c" << std::endl << std::endl;

	std::cout << "Pointers must point to a value of the same type.";
}

void Exercise5()
{
	char blocks[3] = { 'A','B','C' };
	char *ptr = &blocks[0];
	char temp;

	temp = blocks[0];
	temp = *(blocks + 2);
	temp = *(ptr + 1);
	temp = *ptr;

	ptr = blocks + 1;
	temp = *ptr;
	temp = *(ptr + 1);

	ptr = blocks;
	temp = *++ptr;
	temp = ++*ptr;
	temp = *ptr++;
	temp = *ptr;
}

void Exercise6()
{
	char acTemp[] = "Hello World";
	RevString(acTemp);

	int aiTemp[4] = { 1, 3, 5, 2 };
	CountEven(aiTemp, 4);

	double adTemp[4] = { 1.2, 3.1, 2.7, 7.4 };
	Maximum(adTemp, 4);

	Contains("Look for 'f' please", 'f');
}

void RevString(char* a_szArray)
{
	for (int i = 0, j = strlen(a_szArray) - 1; i < strlen(a_szArray) / 2; ++i, --j) // Work from both sides of the array until you reach the middle
	{
		char cTemp = a_szArray[i]; // create a temp variable to store the element
		a_szArray[i] = a_szArray[j]; // Store the last element in the first index
		a_szArray[j] = cTemp; // Store the first element in the last index
	}

	std::cout << a_szArray << std::endl; // Print it
}
int CountEven(int* a_piArray, int a_iSize)
{
	int iEvenNums = 0;

	if (a_iSize == 0)
		return NULL;

	for (int i = 0; i < a_iSize; ++i)
	{
		if (!(*(a_piArray + i) % 2))
			++iEvenNums;
	}

	std::cout << iEvenNums << std::endl;
	return iEvenNums;
}
double* Maximum(double* a_pdArray, int a_iSize)
{
	double dMaximum = 0;

	if (a_iSize == 0)
		return nullptr;

	for (int i = 0; i < a_iSize; ++i)
	{
		if (*(a_pdArray + i) > dMaximum)
			dMaximum = *(a_pdArray + i);
	}

	std::cout << dMaximum << std::endl;
	return &dMaximum;
}
bool Contains(char* a_szArray, char a_cSearchValue)
{
	if (strchr(a_szArray, a_cSearchValue) != nullptr)
	{
		std::cout << "Found it";
		return true;
	}
	else
		std::cout << "Nowhere";
	return false;
}

void Exercise7()
{
	int * ptr_a, *ptr_b, *ptr_c;

	ptr_a = new int;
	*ptr_a = 3;
	ptr_b = ptr_a;
	std::cout << *ptr_a << " " << *ptr_b << "\n";

	ptr_b = new int;
	*ptr_b = 9;
	std::cout << *ptr_a << " " << *ptr_b << "\n";
	*ptr_b = *ptr_a;
	std::cout << *ptr_a << " " << *ptr_b << "\n";

	delete ptr_a;
	ptr_a = ptr_b;
	std::cout << *ptr_a << " " << *&*&*&*&*ptr_b << "\n";

	ptr_c = &*ptr_a;
	std::cout << *ptr_c << " " << *ptr_c << "\n";

	delete ptr_a;
	ptr_a = NULL;

}

void New(char* a_szExercise)
{
	if (strlen(a_szExercise) <= 1)
	{
		std::cout << "----------" << std::endl;
		std::cout << "Exercise " << a_szExercise << std::endl;
		std::cout << "----------" << std::endl << std::endl;
	}
	else if (strlen(a_szExercise) == 2)
	{
		std::cout << "-----------" << std::endl;
		std::cout << "Exercise " << a_szExercise << std::endl;
		std::cout << "-----------" << std::endl << std::endl;
	}
	else if (strlen(a_szExercise) == 3)
	{
		std::cout << "------------" << std::endl;
		std::cout << "Exercise " << a_szExercise << std::endl;
		std::cout << "------------" << std::endl << std::endl;
	}
}
void End()
{
	std::cout << std::endl << std::endl;
	system("pause");
	Clear();
}
void Clear()
{
	system("cls");
}