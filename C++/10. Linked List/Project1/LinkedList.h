#ifndef _LINKEDLIST_H_
#define _LINKEDLIST_H_

#include <iostream>

template <typename Data> struct Node
{
	Node<Data> *next, *previous; // A pointer to the next and the previous Node in the list

	Data iData; // The actual value of the Node
};

template <typename Data> class LinkedList
{
private:
	Node<Data> *start, *end; // The beginning and the ending Node in the list

	int iSize; // Number of Nodes in the list

public:
	// Adds a Node to the beginning 
	void AddtoStack(const Data ac_iData);
	// Adds a Node to the end
	void AddtoQueue(const Data ac_iData);

	void Insert(const Data ac_iData, Node<Data> *a_previous, Node<Data> * a_next);
	// Inserts a Node at the given 'ac_iIndex'
	void Insert(const Data ac_iData, const int ac_iIndex);

	// Appends a Node after the given 'ac_pNode'
	void Append(const Data ac_iData, const int ac_iIndex);
	// Swaps 'a_pNode1' and 'a_pNode2'
	void Swap(const int ac_iIndex1, const int ac_iIndex2);

	// Clears out the list and makes it usable again	
	void Delete(const int ac_iIndex);
	// Deletes all Nodes in the list and then calls 'ReInitialize()'
	void Clear();
	// Sets up 'start' and 'end' to be used again and sets 'iSize' to 0
	void ReInitialize();

	// Returns the 'iData' at the given 'ac_iIndex'
	// Careful, has an O(n) cost
	Data &operator[](const int ac_iIndex);

	// Goes through each Node in the list and prints it to the console
	void Print();

	// Returns the first Node in the list by reference so it can be modified
	Node<Data>& Begin();
	// Returns the last Node in the list by reference so it can be modified
	Node<Data>& End();
	// Returns the size of the list
	int Size();

	LinkedList();
	~LinkedList();
};

template <typename Data>
void LinkedList<Data>::AddtoStack(const Data ac_iData)
{
	Insert(ac_iData, start, start->next);
}
template <typename Data>
void LinkedList<Data>::AddtoQueue(const Data ac_iData)
{
	Insert(ac_iData, end->previous, end);
}

template <typename Data>
void LinkedList<Data>::Insert(const Data ac_iData, Node<Data> *a_previous, Node<Data> *a_next)
{
	Node<Data> *newNode = new Node<Data>;

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
template <typename Data>
void LinkedList<Data>::Insert(const Data ac_iData, const int ac_iIndex)
{
	Node<Data>* IndexNode = start->next; // Will be used to find the index of the Node we Appending to

	int i;
	for (i = 0; i < ac_iIndex; ++i) // Loops until it reaches the index passed as an argument
		IndexNode = IndexNode->next;

	Insert(ac_iData, IndexNode->previous, IndexNode); // Send the index after the matching Node so that it is added after it
}

template <typename Data>
void LinkedList<Data>::Append(const Data ac_iData, const int ac_iIndex)
{
	Node<Data>* IndexNode = start->next; // Will be used to find the index of the Node we Appending to

	for (int i = 0; i < ac_iIndex; ++i) // Loops until it reaches the Node passed as an argument
		IndexNode = IndexNode->next;

	Insert(ac_iData, IndexNode, IndexNode->next); // Send the index after the matching Node so that it is added after it
}

template <typename Data>
void LinkedList<Data>::Swap(const int ac_iIndex1, const int ac_iIndex2)
{
	Node<Data> *swapNode1 = start->next;
	Node<Data> *swapNode2 = start->next;

	for (int i = 0; i < ac_iIndex1; ++i)
		swapNode1 = swapNode1->next;
	for (int i = 0; i < ac_iIndex2; ++i)
		swapNode2 = swapNode2->next;

	Data iTemp = swapNode1->iData; // Temp holder for the first node's data
	swapNode1->iData = swapNode2->iData; // Sets the first node's value to the second node's value
	swapNode2->iData = iTemp; // Sets the second node's value to the first node's value
}

template <typename Data>
void LinkedList<Data>::Delete(const int ac_iIndex)
{
	Node<Data> *DeleteNode = start->next;
	for (int i = 0; i < ac_iIndex; ++i)
		DeleteNode = DeleteNode->next;

	if (iSize > 0)
	{
		DeleteNode->next->previous = DeleteNode->previous;
		DeleteNode->previous->next = DeleteNode->next;

		delete DeleteNode;
		--iSize;
	}
	else
	{
		delete DeleteNode;
		ReInitialize();
	}
}
template <typename Data>
void LinkedList<Data>::Clear()
{
	while (iSize)
		Delete(0);
}
template <typename Data>
void LinkedList<Data>::ReInitialize()
{
	start = new Node<Data>;
	end = new Node<Data>;

	start->next = end;
	start->previous = nullptr;

	start->iData = NULL;

	end->next = nullptr;
	end->previous = start;

	end->iData = NULL;

	iSize = NULL;
}

template <typename Data>
Data &LinkedList<Data>::operator[](const int ac_iIndex)
{
	Node<Data> *ReturnNode = start->next;
	for (int i = 0; i < ac_iIndex; ++i)
		ReturnNode = ReturnNode->next;

	return ReturnNode->iData;
}

template <typename Data>
void LinkedList<Data>::Print()
{
	Node<Data> *PrintNode = start->next;
	for (int i = 0; i < iSize; ++i)
	{
		std::cout << PrintNode->iData << " ";
		PrintNode = PrintNode->next;
	}
	std::cout << std::endl;
}

template <typename Data>
Node<Data> &LinkedList<Data>::Begin()
{
	return *start->next;
}
template <typename Data>
Node<Data> &LinkedList<Data>::End()
{
	return *end->previous;
}
template <typename Data>
int LinkedList<Data>::Size()
{
	return iSize;
}

template <typename Data>
LinkedList<Data>::LinkedList()
{
	ReInitialize();
}
template <typename Data>
LinkedList<Data>::~LinkedList()
{
	while (iSize)
		Delete(0);

	delete start;
	delete end;
}

#endif // _LINKEDLIST_H_

