#include "Stack.h"

int main()
{
	Stack<int> sStack;

	sStack.Push(1);
	sStack.Push(2);
	sStack.Push(3);
	sStack.Push(4);
	sStack.Push(5);
	sStack.Push(6);

	sStack.Print();
	system("pause");

	sStack.Pop();

	sStack.Print();

	sStack.Pop();
	sStack.Print();
	system("pause");

	sStack.Peek();

	std::cout << sStack.Empty() << std::endl;
	system("pause");
}