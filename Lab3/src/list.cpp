/*
 * list.cpp
 *
 *  Created on: Mar 4, 2020
 *      Author: Gabriel
 */

#include "list.h"
#include <iostream>
#include <string>
#include <sstream>

List::List() : head1(NULL), temp(NULL)
{
}
void List::addNode(Stock s)
{
	Node * newNode = new Node;
	newNode->next = NULL;
	newNode->stock = s;
	if(head1 == NULL)
	{
		head1 = newNode;
	}else
	{
		temp = head1;
		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newNode;
	}
}
void List::makeList()
{
	for (int i = 0; i < 20; i++)
	{
		Stock s(i + 1);
		addNode(s);
	}
}
void List::printList()
{
	temp = head1;
	while(temp != NULL)
	{
		cout << temp->stock;
		temp = temp->next;
	}
}
void List::printNode(Node * n)
{
	cout << "Middle Node is: \n" << n->stock;
}
Node * List::findMiddle()
{
	slow = head1;
	fast = head1;
	while(fast != NULL)
	{
		fast = fast->next;
		fast = fast->next;
		if(fast == NULL)
		{
			return slow;
		}
		slow = slow->next;
	}
	return slow;
}
void List::splitList()
{
	head2 = slow->next;
	slow->next = NULL;
	cout << "List 1: \n";
	temp = head1;
	while(temp != NULL)
	{
		cout << temp->stock;
		temp = temp->next;
	}

	cout << "List 2: \n";
	temp = head2;
	while(temp != NULL)
	{
		cout << temp->stock;
		temp = temp->next;
	}

}








