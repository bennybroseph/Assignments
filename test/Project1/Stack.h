#ifndef _STACK_H_
#define _STACK_H_

#include <iostream>

template<typename T>
struct Node
{
	T data;
	Node<T> *next;
};

template<typename T>
class Stack
{
private:
	int size;
	Node<T> *top;

public:
	void Push(T a_Data);
	void Pop();
	Node<T> *Peek();

	void Print();
	bool Empty();

	Stack();
	~Stack();
};

template<typename T>
void Stack<T>::Push(T a_Data)
{
	if (top == nullptr)
	{
		top->data = a_Data;
	}
	else
	{
		Node<T> *Temp = new Node<T>;

		Temp->data = top->data;
		Temp->next = top->next;

		top->data = a_Data;
		top->next = Temp;
	}

	++size;
}
template<typename T>
void Stack<T>::Pop()
{
	Node<T> *deleteNode = top;

	if (top->next == nullptr)
	{
		delete top;

		top = new Node<T>;
		top->next = nullptr;
	}
	else
	{
		top = top->next;
		delete deleteNode;
	}
	--size;
}
template<typename T>
Node<T> *Stack<T>::Peek()
{
	return top;
}

template<typename T>
void Stack<T>::Print()
{
	Node<T> *iter = top;
	while (iter->next != nullptr)
	{
		std::cout << iter->data << " ";
		iter = iter->next;
	}
	std::cout << std::endl;
}
template<typename T>
bool Stack<T>::Empty()
{
	return !size;
}

template<typename T>
Stack<T>::Stack()
{
	top = new Node<T>;
	top->next = nullptr;
}
template<typename T>
Stack<T>::~Stack()
{

}

#endif // _STACK_H_