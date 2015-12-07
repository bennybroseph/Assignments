#include "Maths.h"

int main()
{
	Vector3D<float> A(3, 2, 5);
	Vector3D<float> B(7, 11, 2);

	std::cout << Dot(A, B) << std::endl;
	A.Normalize().Print();
	Cross(A, B).Print();
	std::cout << A.Magnitude() << std::endl;
	(A + B).Print();
	Lerp(A, B, 0.5).Print();

	std::cout << std::endl;

	Vector4D<float> Color(0x564E45);
	
	Color.Print();
	Color.Normalize().Print();

	std::cout << std::endl;

	std::cout << Maths::Lerp(2, 5, 0.5) << std::endl;
	std::cout << Maths::ToDegrees(PI / 2) << std::endl;
	std::cout << Maths::ToRadians(90.0f) << std::endl;

	std::cout << std::endl;
	system("pause");
	return 0;
}