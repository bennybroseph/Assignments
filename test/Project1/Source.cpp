#include "Stack.h"

template <typename T>
union Vector2D
{
	struct Point
	{
		int x, y;
	};
	struct
	{
		int w, h;
	};
	
};

int main()
{
	Point2D B;
	Vector2D<int> A;
	
	A. = 1;
	printf("%d", A.w);
}