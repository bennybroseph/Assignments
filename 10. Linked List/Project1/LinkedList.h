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
	};
	Node* start, *end;

	int iSize;

public:
	void PushBack(int a_iData);
	void Print();

	void Begin();
	void End();

	LinkedList();
	~LinkedList();


};

#endif // _LINKEDLIST_H_

