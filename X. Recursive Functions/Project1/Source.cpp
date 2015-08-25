#include <iostream>

void Exercise1();
int Fibonacci(int = 0);

void Exercise2();
int Pow(int = 1, int = 1);

void Exercise3();
void TowerofHanoi(int, int*, int*, int*);
void MoveDisk(int, int*, int*);
void PrintTower(int*, int*, int*);

void New(int);
void End();

int main()
{
	/*New(1);
	Exercise1();
	End();

	New(2);
	Exercise2();
	End();*/

	New(3);
	Exercise3();
	End();
}

void Exercise1()
{
	int i;

	for (i = 0; i < 8; i++)
		std::cout << Fibonacci(i) << std::endl;
}
int Fibonacci(int x)
{
	if (x == 0)
		return 0;
	if (x == 1)
		return 1;
	else
		return (Fibonacci(x - 1) + Fibonacci(x - 2));
}

void Exercise2()
{
	std::cout << Pow(10, 5);
}
int Pow(int x, int y)
{
	if (y > 1)
		return x*Pow(x, y - 1);
	else
		return x;
}

void Exercise3()
{
	int pA[5] = { 1,2,3,4,5 };
	int pB[5] = { 0,0,0,0,0 };
	int pC[5] = { 0,0,0,0,0 };

	PrintTower(pA, pB, pC);
	TowerofHanoi(5, pA, pB, pC);
	PrintTower(pA, pB, pC);
}
void TowerofHanoi(int height, int* source, int* dest, int* spare)
{
	if (height == 0)
	{
		MoveDisk(height, source, dest);
	}
	else
	{
		TowerofHanoi(height - 1, source, spare, dest);
		MoveDisk(height, source, dest);
		PrintTower(source, spare, dest);
		TowerofHanoi(height - 1, spare, dest, source);
	}

}
void MoveDisk(int disk, int* source, int* dest)
{
	int i;

	for (i = sizeof(dest); i >= 0; i--)
	{
		if (dest[i] == 0)
		{
			dest[i] = disk;
			break;
		}
	}
	for (i = sizeof(source); i >= 0; i--)
	{
		if (source[i] == disk)
		{
			source[i] = 0;
			break;
		}
	}
}
void PrintTower(int* pA, int* pB, int* pC)
{
	int poles[3][256];

	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j <= sizeof(pA); j++)
		{
			if (i == 0)
				poles[i][j] = pA[j];
			if (i == 1)
				poles[i][j] = pB[j];
			if (i == 2)
				poles[i][j] = pC[j];
		}
	}

	for (i = 0; i <= sizeof(pA); i++)
	{
		for (j = 0; j < 3; j++)
		{
			switch (poles[j][i])
			{
				case 1:
					std::cout << "    -    " ;
					break;
				case 2:
					std::cout << "   ---   " ;
					break;
				case 3:
					std::cout << "  -----  ";
					break;
				case 4:
					std::cout << " ------- ";
					break;
				case 5:
					std::cout << "---------";
					break;
				default:
					std::cout << "    |    ";
					break;
			}
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;

	system("pause");
	system("cls");

	New(3);
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


//int TowerofHanoi(int* pA, int* pB, int* pC)
//{
//	int i, j;
//	for (i = 0; i <= sizeof(pA); i++)
//	{
//		if (pA[i] != 0)
//		{
//			for (j = sizeof(pB); j >= 0; j--)
//			{
//				if (((j == sizeof(pB) && (pB[j] == 0))) || ((pA[i] <= pB[j + 1]) && (pB[j] == 0)))
//				{
//					pB[j] = pA[i];
//					pA[i] = 0;
//					PrintTower(pA, pB, pC);
//					return TowerofHanoi(pA, pB, pC);
//				}
//			}
//		}
//		if (pA[i] != 0)
//		{
//			for (j = sizeof(pC); j >= 0; j--)
//			{
//				if (((j == sizeof(pC) && (pC[j] == 0))) || ((pA[i] <= pC[j + 1]) && (pC[j] == 0)))
//				{
//					pC[j] = pA[i];
//					pA[i] = 0;
//					PrintTower(pA, pB, pC);
//					return TowerofHanoi(pA, pB, pC);
//				}
//			}
//		}		
//	}
//	for (i = 0; i <= sizeof(pB); i++)
//	{
//		if (pB[i] != 0)
//		{
//			for (j = sizeof(pC); j >= 0; j--)
//			{
//				if (((j == sizeof(pC) && (pC[j] == 0))) || ((pB[i] <= pC[j + 1]) && (pC[j] == 0)))
//				{
//					pC[j] = pB[i];
//					pB[i] = 0;
//					PrintTower(pA, pB, pC);
//					return TowerofHanoi(pA, pB, pC);
//				}
//			}
//		}
//		if (pB[i] != 0)
//		{
//			for (j = sizeof(pA); j >= 0; j--)
//			{
//				if (((j == sizeof(pA) && (pA[j] == 0))) || ((pB[i] <= pA[j + 1]) && (pA[j] == 0)))
//				{
//					pA[j] = pB[i];
//					pB[i] = 0;
//					PrintTower(pA, pB, pC);
//					return TowerofHanoi(pA, pB, pC);
//				}
//			}
//		}
//	}
//	for (i = 0; i <= sizeof(pC); i++)
//	{
//		if (pC[i] != 0)
//		{
//			for (j = sizeof(pA); j >= 0; j--)
//			{
//				if (((j == sizeof(pA) && (pA[j] == 0))) || ((pC[i] <= pA[j + 1]) && (pA[j] == 0)))
//				{
//					pA[j] = pC[i];
//					pC[i] = 0;
//					PrintTower(pA, pB, pC);
//					return TowerofHanoi(pA, pB, pC);
//				}
//			}
//		}
//		if (pC[i] != 0)
//		{
//			for (j = sizeof(pB); j >= 0; j--)
//			{
//				if (((j == sizeof(pB) && (pA[j] == 0))) || ((pC[i] <= pB[j + 1]) && (pB[j] == 0)))
//				{
//					pB[j] = pC[i];
//					pC[i] = 0;
//					PrintTower(pA, pB, pC);
//					return TowerofHanoi(pA, pB, pC);
//				}
//			}
//		}
//	}
//
//	return TowerofHanoi(pA, pB, pC);
//}