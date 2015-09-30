#pragma once

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
	Node<T> *top;

public:
	void Push(T a_Data);

	//bool Empty();
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