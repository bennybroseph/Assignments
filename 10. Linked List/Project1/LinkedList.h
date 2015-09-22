#ifndef _LINKEDLIST_H_
#define _LINKEDLIST_H_

#include <iostream>

class LinkedList
{
private:
	struct Node
	{
		Node *next, *previous; // A pointer to the next and the previous Node in the list

		int iData; // The actual value of the Node

		// Returns 'this' Node plus an 'ac_iIndex' and passes it by reference so it can be modified
		// This is expensive! Careful how you use this...
		// It will iterate through the entire list if it has to just to get to a value
		Node &operator+(const int ac_iIndex);
	};
	Node *start, *end; // The beginning and the ending Node in the list

	int iSize; // Number of Nodes in the list

public:
	// Adds a Node to the beginning 
	void AddtoStack(const int ac_iData); 
	// Adds a Node to the end
	void AddtoQueue(const int ac_iData); 

	void Insert(const int ac_iData, Node *a_previous, Node * a_next);
	// Inserts a Node at the given 'ac_iIndex'
	void Insert(const int ac_iData, const int ac_iIndex); 
	
	// Appends a Node after the given 'ac_pNode'
	void Append(const int ac_iData, const Node &ac_pNode); 
	// Swaps 'a_pNode1' and 'a_pNode2'
	void Swap(Node &a_pNode1, Node &a_pNode2); 

	// Clears out the list and makes it usable again	
	void Delete(Node &a_pNode);
	// Deletes all Nodes in the list and then calls 'ReInitialize()'
	void Clear();
	// Sets up 'start' and 'end' to be used again and sets 'iSize' to 0
	void ReInitialize();

	// Returns the 'iData' at the given 'ac_iIndex'
	// This is expensive! Careful how you use this...
	// It will iterate through the entire list if it has to just to get to a value
	int &operator[](const int ac_iIndex);

	// Goes through each Node in the list and prints it to the console
	void Print();

	// Returns the first Node in the list by reference so it can be modified
	Node& Begin();
	// Returns the last Node in the list by reference so it can be modified
	Node& End();

	LinkedList();
	~LinkedList();
};

#endif // _LINKEDLIST_H_

