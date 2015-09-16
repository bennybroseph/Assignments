#include "LinkedList.h"



void LinkedList::AddtoStack(const int ac_iData)
{
	if (iSize > 2) // When there are 3 elements in the list, and we are adding a 4th
	{
		Node *newNode = new Node;

		// Sets newNode to hold the current value of 'start' and links it to 'start'
		newNode->next = start->next;
		newNode->previous = start;

		newNode->iData = start->iData;

		// Sets 'start' to be the new data passed as 'ac_iData' and links it to the newly allocated memory
		start->next->previous = newNode;
		start->next = newNode;

		start->iData = ac_iData;
	}
	else
	{
		switch (iSize)
		{
		case 1: // When size is 1 that means there is currently only one element in the list, so only the 'end' Node needs to be initialized
		{
			end->iData = start->iData;
			end->previous = start;

			// Sets 'start' to be the new data passed as 'ac_iData' and links it to 'end'
			start->iData = ac_iData;
			start->next = end;
			break;
		}
		case 2: // When size is 2 that means there is currently only the 'start' and 'end' Nodes in the list, so these will be the 'previous' and 'next' of the 'newNode' respectively
		{
			Node *newNode = new Node;

			newNode->iData = start->iData;

			newNode->next = end;
			newNode->previous = start;

			start->iData = ac_iData;
			start->next = newNode;
			end->previous = newNode;
			break;
		}
		default: // Otherwise size is either 0 or negative. In this case do nothing so that 'start->next' and 'start->previous' stays nullptr
			break;
		}

		// Always set the value of 'start->iData' to be the passed argument no matter what; even when 'iSize' is 0 or negative
		start->iData = ac_iData;
	}

	++iSize;
}
void LinkedList::AddtoQueue(const int ac_iData)
{
	if (iSize > 2) // When there are 3 elements in the list, and we are adding a 4th
	{
		Node *newNode = new Node;

		// Sets newNode to hold the current value of 'end' and links it to 'end'
		newNode->next = end;
		newNode->previous = end->previous;

		newNode->iData = end->iData;

		// Sets 'end' to be the new data passed as 'ac_iData' and links it to the newly allocated memory
		end->previous->next = newNode;
		end->previous = newNode;

		end->iData = ac_iData;
	}
	else
	{
		switch (iSize) 
		{
		case 1: // When size is 1 that means there is currently only one element in the list, so only the 'start' Node needs to be initialized
		{
			start->iData = end->iData;
			start->next = end;

			// Sets 'end' to be the new data passed as 'ac_iData' and links it to 'start'
			end->iData = ac_iData;
			end->previous = start;
			break;
		}
		case 2: // When size is 2 that means there is currently only the 'start' and 'end' Nodes in the list, so these will be the 'previous' and 'next' of the 'newNode' respectively
		{
			Node *newNode = new Node;

			newNode->iData = end->iData;

			newNode->next = end;
			newNode->previous = start;

			end->iData = ac_iData;
			start->next = newNode;
			end->previous = newNode;
			break;
		}
		default: // Otherwise size is either 0 or negative. In this case do nothing so that 'end->next' and 'end->previous' stays nullptr
			break;
		}

		// Always set the value of 'end->iData' to be the passed argument no matter what; even when 'iSize' is 0 or negative
		end->iData = ac_iData;
	}

	++iSize;
}

void LinkedList::Insert(const int ac_iData, const int ac_iIndex)
{
	if (ac_iIndex == 0) // If you're trying to insert a Node at the beginning, you actually wanted to 'AddtoStack'
	{
		AddtoStack(ac_iData);
	}
	else if (ac_iIndex == iSize) // If you're trying to insert a Node at the end, you actually wanted to 'AddtoQueue'
	{
		AddtoQueue(ac_iData);
	}
	else
	{
		switch (iSize)
		{
		case 0:
		case 1: AddtoQueue(ac_iData); break; // If the list is empty, or there is only one Node, you actually wanted to 'AddtoQueue'
		case 2:
		{
			Node *newNode = new Node;

			start->next = newNode;
			end->previous = newNode;

			newNode->iData = ac_iData;

			newNode->next = end;
			newNode->previous = start;

			break;
		}
		default:
		{
			Node *newNode = new Node;

			if (ac_iIndex == 1)
			{
				newNode->iData = ac_iData;

				newNode->next = start->next;
				newNode->previous = start;

				start->next = newNode;
				start->next->previous = newNode;
			}
			else if (ac_iIndex == iSize - 1)
			{
				newNode->iData = ac_iData;

				newNode->next = end;
				newNode->previous = end->previous;

				end->previous->next = newNode;
				end->previous = newNode;
			}
			else
			{
				Node *IndexNode = start;

				for (int i = 0; i < ac_iIndex; ++i)
				{
					IndexNode = IndexNode->next;
				}
				newNode->iData = ac_iData;

				newNode->next = IndexNode;
				newNode->previous = IndexNode->previous;

				IndexNode->previous->next = newNode;
				IndexNode->previous = newNode;
			}
			break;
		}
		}

		++iSize;
	}
}
void LinkedList::Append(const int ac_iData, const Node &ac_pNode)
{
	Node* IndexNode = start; // Will be used to find the index of the Node we Appending to

	int i;
	for (i = 0; IndexNode != &ac_pNode; ++i) // Loops until it reaches the Node passed as an argument
		IndexNode = IndexNode->next;

	Insert(ac_iData, ++i); // Send the index after the matching Node so that it is added after it
}

void LinkedList::Swap(Node &a_pNode1, Node &a_pNode2)
{
	int iTemp = a_pNode1.iData; // Temp holder for the first node's data
	a_pNode1.iData = a_pNode2.iData; // Sets the first node's value to the second node's value
	a_pNode2.iData = iTemp; // Sets the second node's value to the first node's value
}

void LinkedList::Delete(const Node &ac_pNode)
{
	Node* DeleteNode = start;
	while (DeleteNode != &ac_pNode)
		DeleteNode = DeleteNode->next;

	if (iSize <= 2) // When only the 'start' or 'end' node exist in the list
	{
		if (DeleteNode == start)
			start = end;
		else
			end = start;
	}
	else if (DeleteNode == start) // If you're attempting to delete the first node
	{
		DeleteNode = start->next;

		start->iData = start->next->iData;

		start->next = start->next->next;
		start->next->previous = start;
		delete DeleteNode;
	}
	else if (DeleteNode == end) // If you're attempting to delete the last node
	{
		DeleteNode = end->previous;

		end->iData = end->previous->iData;

		end->previous = end->previous->previous;
		end->previous->next = end;
		delete DeleteNode;
	}
	else // Regular deletion
	{
		if (DeleteNode->next != nullptr)
			DeleteNode->next->previous = DeleteNode->previous;
		if (DeleteNode->previous != nullptr)
			DeleteNode->previous->next = DeleteNode->next;

		delete DeleteNode;
	}

	--iSize;

	if (iSize == 0)
		ReInitialize();
}
void LinkedList::Clear()
{
	while (iSize)
		Delete(*start);

	//ReInitialize(); // Sets up the 'start' and 'end' Nodes to be used again, and sets the 'iSize' to 0
}
void LinkedList::ReInitialize()
{
	start = new Node;

	start->previous = nullptr;
	start->next = nullptr;

	start->iData = NULL;

	end = new Node;

	end->previous = nullptr;
	end->next = nullptr;

	end->iData = NULL;

	iSize = NULL;
}

int &LinkedList::operator[](const int ac_iIndex)
{
	Node *ReturnNode = start;
	for (int i = 0; i < ac_iIndex; ++i)
		ReturnNode = ReturnNode->next;

	return ReturnNode->iData;
}

void LinkedList::Print()
{
	Node *PrintNode = start;
	for (int i = 0; i < iSize; ++i)
	{
		std::cout << PrintNode->iData << " ";
		PrintNode = PrintNode->next;
	}
	std::cout << std::endl;
}

LinkedList::Node &LinkedList::Begin()
{
	return *start;
}
LinkedList::Node &LinkedList::End()
{
	return *end;
}

LinkedList::LinkedList()
{
	ReInitialize();
}
LinkedList::~LinkedList()
{
	while (iSize)
		Delete(*start);

	delete start;
	delete end;
}

LinkedList::Node &LinkedList::Node::operator+(const int ac_iIndex)
{
	Node *IndexNode = this;
	for (int i = 0; i < ac_iIndex; ++i)
		IndexNode = IndexNode->next;

	return *IndexNode;
}
