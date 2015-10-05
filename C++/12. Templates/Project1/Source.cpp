#include "Template.h"

void Exercise1();
template <typename T>
T Min(T a, T b);
char Min(char a, char b);
template <typename T>
T Max(T a, T b);
char Max(char a, char b);
template <typename T>
T Clamp(T a, T b, T val);

void Exercise2();

void New(const char *ac_cHeader);
void End();

int main()
{
	New("1");
	Exercise1();
	End();

	New("2");
	Exercise2();
	End();
}

void Exercise1()
{
	std::cout << "Min(1, 3) = " << Min(1, 3) << std::endl;
	std::cout << "Max(1, 3) = " << Max(1, 3) << std::endl;
	std::cout << "Clamp(1, 10, 12) = " << Clamp(1, 10, 12) << std::endl;
	std::cout << "Min('G', 't') = " << Min('G', 't') << std::endl;
	std::cout << "Max('g', 'T') = " << Max('g', 'T') << std::endl;
}
template <typename T>
T Min(T a, T b)
{
	if (a <= b)
		return a;
	else
		return b;
}
char Min(char a, char b)
{
	char A = tolower(a); 
	char B = tolower(b);

	if (A <= B)
		return char(a);
	else
		return char(b);
}
template <typename T>
T Max(T a, T b)
{
	if (a >= b)
		return a;
	else
		return b;
}
char Max(char a, char b)
{
	char A = tolower(a);
	char B = tolower(b);

	if (A >= B)
		return char(a);
	else
		return char(b);
}
template <typename T>
T Clamp(T a, T b, T val)
{
	if (val >= a && val <= b)
		return val;
	else if (val >= b)
		return b;
	else
		return a;
}

void Exercise2()
{
	Template<int> oTemplate(3);

	oTemplate.Add(1);
	oTemplate.Add(2);
	oTemplate.Add(3);

	oTemplate.Expand();

	oTemplate.Add(4);
	oTemplate.Add(5);
	oTemplate.Add(6);

	for (int i = 0; i < oTemplate.Size(); ++i)
	{
		std::cout << oTemplate[i] << " ";
	}
	std::cout << std::endl;
}
void New(const char *ac_cHeader)
{
	if (strlen(ac_cHeader) <= 1)
	{
		std::cout << "Exercise " << ac_cHeader << "." << std::endl;
		std::cout << "-----------" << std::endl << std::endl;
	}
}
void End()
{
	std::cout << std::endl;
	system("pause");
	system("cls");
}