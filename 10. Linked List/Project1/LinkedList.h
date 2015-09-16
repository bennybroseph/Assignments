#ifndef _LINKEDLIST_H_
#define _LINKEDLIST_H_

#include <iostream>

class LinkedList
{
private:
	struct Node
	{
		Node *previous, *next;

		int iData;

		// This is expensive! Careful how you use this...
		// It will iterate through the entire list if it has to just to get to a value
		Node &operator+(const int ac_iIndex);
	};
	Node *start, *end;

	int iSize;

public:
	void AddtoStack(const int ac_iData);
	void AddtoQueue(const int ac_iData);

	void Insert(const int ac_iData, const int ac_iIndex);
	void Append(const int ac_iData, const Node &ac_pNode);
	void Swap(Node &a_pNode1, Node &a_pNode2);

	void Delete(const Node &ac_pNode);
	// Clears out the list and makes it usable again
	void Clear();
	// Sets up 'start' and 'end' to be used again and sets 'iSize' to 0
	void ReInitialize();

	// This is expensive! Careful how you use this...
	// It will iterate through the entire list if it has to just to get to a value
	int &operator[](const int ac_iIndex);

	void Print();

	Node& Begin();
	Node& End();

	LinkedList();
	~LinkedList();


};

#endif // _LINKEDLIST_H_

