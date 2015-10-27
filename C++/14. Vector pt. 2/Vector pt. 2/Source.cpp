#include <iostream>

#include "Vector3D.h"

void Exercise1();
void Exercise2();
void Exercise3();
void Exercise4();
void Exercise5();
void Exercise6();
void Exercise7();

void New(const char* a_szExercise);
void End();
void Clear();

int main()
{
	New("1");
	Exercise1();
	End();

	New("2");
	Exercise2();
	End();

	New("3");
	Exercise3();
	End();

	New("4");
	Exercise4();
	End();

	New("5");
	Exercise5();
	End();

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
	std::cout << "30" << (char)248 << " = " << (char)227 << "/6" << std::endl;
	std::cout << "45" << (char)248 << " = " << (char)227 << "/4" << std::endl;
	std::cout << "72" << (char)248 << " = 2" << (char)227 << "/5";
}

void Exercise2()
{
	std::cout << "1.5 radians  = " << "270/" << (char)227 << std::endl;
	std::cout << "3" << (char)227 << "/2 radians = 270" << std::endl;
	std::cout << "2 radians    = 360/" << (char)227;
}

void Exercise3()
{
	std::cout << "(3, 4)  " << (char)249 << " (-5, 3)  = -3 opposite direction" << std::endl;
	std::cout << "(0, 8)  " << (char)249 << " (8, 0)   = 0  perpendicular" << std::endl;
	std::cout << "(0, -3) " << (char)249 << " (0, -6)  = 18 same direction" << std::endl;
	std::cout << "(-1, -1)" << (char)249 << " (-5, -6) = 11 same direction" << std::endl;
	std::cout << "(3, 3)  " << (char)249 << " (3, -3)  = 0  perpendicular" << std::endl;
}

void Exercise4()
{

}

void Exercise5()
{
	std::cout << "(-8, 0, -3) x (2, 2, 4) =        (6, 26, -16)" << std::endl;
	std::cout << "(14, 5, -5) x (-2, 1, 43) =      (220, -612, -24)" << std::endl;
	std::cout << "(0.45, 0.2, -0.69) x (0, 1, 0) = (0.69, 0, 0.45)";
}

void Exercise6()
{
	std::cout << "The two vectors are perpendicular because the dot product of them is 0.";
}

void Exercise7()
{
	Vector3D<float> Vec1(-8, 0, -3);
	Vector3D<float> Vec2(2, 2, 4);

	std::cout << Dot(Vec1, Vec2) << std::endl;
	Cross(Vec1, Vec2).Print(); std::cout << std::endl;
	std::cout << Angle(Vec1, Vec2);
}

void New(const char* ac_szExercise)
{
	if (strlen(ac_szExercise) <= 1)
	{
		std::cout << "----------" << std::endl;
		std::cout << "Exercise " << ac_szExercise << std::endl;
		std::cout << "----------" << std::endl << std::endl;
	}
	else if (strlen(ac_szExercise) == 2)
	{
		std::cout << "-----------" << std::endl;
		std::cout << "Exercise " << ac_szExercise << std::endl;
		std::cout << "-----------" << std::endl << std::endl;
	}
	else if (strlen(ac_szExercise) == 3)
	{
		std::cout << "------------" << std::endl;
		std::cout << "Exercise " << ac_szExercise << std::endl;
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