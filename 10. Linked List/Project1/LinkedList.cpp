#include "LinkedList.h"


void LinkedList::AddtoStack(const int ac_iData)
{
	Insert(ac_iData, start, start->next);
}
void LinkedList::AddtoQueue(const int ac_iData)
{
	Insert(ac_iData, end->previous, end);
}

void LinkedList::Insert(const int ac_iData, Node *a_previous, Node * a_next)
{
	Node *newNode = new Node;

	if (iSize > 0)
	{
		newNode->iData = ac_iData;

		newNode->next = a_next;
		newNode->previous = a_previous;

		a_previous->next = newNode;
		a_next->previous = newNode;
	}
	else
	{
		newNode->iData = ac_iData;

		newNode->next = end;
		newNode->previous = start;

		start->next = newNode;
		start->previous = nullptr;

		end->next = nullptr;
		end->previous = newNode;
	}
	++iSize;
}
void LinkedList::Insert(const int ac_iData, const int ac_iIndex)
{
	Node* IndexNode = start->next; // Will be used to find the index of the Node we Appending to

	int i;
	for (i = 0; i < ac_iIndex; ++i) // Loops until it reaches the index passed as an argument
		IndexNode = IndexNode->next;

	Insert(ac_iData, IndexNode->previous, IndexNode); // Send the index after the matching Node so that it is added after it
}

void LinkedList::Append(const int ac_iData, const Node &ac_pNode)
{
	Node* IndexNode = start->next; // Will be used to find the index of the Node we Appending to

	int i;
	for (i = 0; IndexNode != &ac_pNode; ++i) // Loops until it reaches the Node passed as an argument
		IndexNode = IndexNode->next;

	Insert(ac_iData, IndexNode, IndexNode->next); // Send the index after the matching Node so that it is added after it
}

void LinkedList::Swap(Node &a_pNode1, Node &a_pNode2)
{
	int iTemp = a_pNode1.iData; // Temp holder for the first node's data
	a_pNode1.iData = a_pNode2.iData; // Sets the first node's value to the second node's value
	a_pNode2.iData = iTemp; // Sets the second node's value to the first node's value
}

void LinkedList::Delete(Node &a_pNode)
{
	if (iSize > 0)
	{
		a_pNode.next->previous = a_pNode.previous;
		a_pNode.previous->next = a_pNode.next;

		delete &a_pNode;
		--iSize;
	}
	else
	{
		delete &a_pNode;
		ReInitialize();
	}
}
void LinkedList::Clear()
{
	while (iSize)
		Delete(*start->next);
}
void LinkedList::ReInitialize()
{
	start = new Node;
	end = new Node;
		
	start->next = end;
	start->previous = nullptr;

	start->iData = NULL;

	end->next = nullptr;
	end->previous = start;

	end->iData = NULL;

	iSize = NULL;
}

int &LinkedList::operator[](const int ac_iIndex)
{
	Node *ReturnNode = start->next;
	for (int i = 0; i < ac_iIndex; ++i)
		ReturnNode = ReturnNode->next;

	return ReturnNode->iData;
}
LinkedList::Node &LinkedList::Node::operator+(const int ac_iIndex)
{
	Node *IndexNode = this;
	for (int i = 0; i < ac_iIndex; ++i)
		IndexNode = IndexNode->next;

	return *IndexNode;
}

void LinkedList::Print()
{
	Node *PrintNode = start->next;
	for (int i = 0; i < iSize; ++i)
	{
		std::cout << PrintNode->iData << " ";
		PrintNode = PrintNode->next;
	}
	std::cout << std::endl;
}

LinkedList::Node &LinkedList::Begin()
{
	return *start->next;
}
LinkedList::Node &LinkedList::End()
{
	return *end->previous;
}

LinkedList::LinkedList()
{
	ReInitialize();
}
LinkedList::~LinkedList()
{
	while (iSize)
		Delete(*start->next);

	delete start;
	delete end;
}

