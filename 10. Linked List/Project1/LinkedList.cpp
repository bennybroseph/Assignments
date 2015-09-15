#include "LinkedList.h"



void LinkedList::PushBack(int a_iData)
{
	Node *newNode = new Node;

	newNode->iData = a_iData;

	newNode->next = start;
	newNode->previous = nullptr;

	start->previous = newNode;

	++iSize;
}

void LinkedList::Print()
{
	Node* PrintNode = start;
	for (int i = 0; i < iSize; ++i)
	{
		PrintNode = PrintNode->next;
		std::cout << PrintNode->iData;
	}
}

LinkedList::LinkedList()
{
	start = new Node;
	end = nullptr;

	start->previous = nullptr;
	start->next = nullptr;

	start->iData = NULL;
}


LinkedList::~LinkedList()
{

}
