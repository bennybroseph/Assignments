#include <iostream>

struct Test_Struct
{
	int i[5];
	float j;
};

int main()
{
	Test_Struct Test;
	std::cout << sizeof(Test) << std::endl;
	std::cout << sizeof(std::string) << std::endl;

	system("pause");
	return 0;
}