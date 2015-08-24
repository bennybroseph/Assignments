#include <iostream>

void New(int);
void End();

int main()
{
	New(1);
	std::cout << "a. 0001 = 1" << std::endl
			  << "b. 0010 1010 = 42" << std::endl
			  << "c. 0001 0000 0000 = 256" << std::endl
			  << "d. ";
	End();

	New(2);
	std::cout << "a. 128 = 1000 0000" << std::endl
			  << "b. 170 = 1010 1010" << std::endl
			  << "c. 240 = 1111 0000" << std::endl
			  << "d. 200 = 1100 1100";
	End();

	New(3);
	std::cout << "a. 1110 = 0111 + 0111" << std::endl
			  << "b. 0001 0100 = 1010 + 1010" << std::endl
			  << "c. 0010 0111 = 0001 1101 + 1010" << std::endl
			  << "d. 1000 = 0001 1101 - 0001" << std::endl
			  << "e. 1011 = 0001 0001 - 0100" << std::endl
			  << "f. 0000 = 0101 x 0010" << std::endl
			  << "g. 0011 = 1011 x 0011" << std::endl
			  << "h. N/A";
	End();

	New(4);
	std::cout << "Hex numbers result in a compressed number that is still easily readable by a\nhuman vs. binary and even decimal.";
	End();

	New(5);
	std::cout << "a. 0 = 1000 0000" << std::endl
			  << "b. -42 = 1010 1010" << std::endl
			  << "c. -112 = 1111 0000" << std::endl
			  << "d. -76 = 1100 1100" << std::endl
			  << "e. 1001 0000 = -16" << std::endl
			  << "f. 0000 1000 0000 = 128" << std::endl
			  << "g. 1000 1000 0000 = -128" << std::endl
			  << "h. 1111 1011 = -123";
	End();

	New(6);
	std::cout << "a. 0001 1111 = 0001 1111 | 0001 1111" << std::endl
			  << "b. 0000 0000 = 0001 1111 ^ 0001 1111" << std::endl
			  << "c. 0001 0101 = 0001 0101 & 0001 1111" << std::endl
			  << "d. 0001 1111 = 0001 0101 | 0001 1111" << std::endl
			  << "e. 0001 1111 = 0000 0000 ^ 0001 1111" << std::endl
			  << "f. 0100 = 0001 << 3" << std::endl
			  << "g. 0001 = 0100 >> 2" << std::endl
			  << "h. 0000 1010 = ~0001 0101" << std::endl
			  << "i. 1000 = 0100 << 1" << std::endl
			  << "j. 0101 = 1010 >> 1" << std::endl
			  << "k. 0000 0000  = ~0001 1111";
	End();

	New(7);
	std::cout << "Pick the bit you want to set to 0 and set it as 1, '~' it, then '&' it.\nSo if you wanted to set the second bit to 0 when the byte is 0111...\n0111 &(~0100) = 0011" << std::endl
			  << "Pick the bit you want to set to 1 and set it as 1 then '|' it.\nSo if you wanted the second bit to be 1 when the byte is 0011...\n0011 |(0100) = 0111"
			  << "";
	End();
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