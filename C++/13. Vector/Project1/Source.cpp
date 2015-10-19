#include "Vector.h"

int main()
{
	Vector2D<float> A(0, 1), B(2, 5);

	Vector2D<float> C = A + B + B;

	C.Print();

	std::cout << std::endl;
	std::cout << C.Magnitude() << std::endl;
	C.Normalize().Print();
	std:: cout << std::endl;

	system("pause");
	return 0;
}