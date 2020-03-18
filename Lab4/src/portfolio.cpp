/*
 * list.cpp
 *
 *  Created on: Mar 4, 2020
 *      Author: Gabriel
 */

#include "portfolio.h"
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <fstream>

List::List() : head(NULL), tail(NULL), temp(NULL), temp2(NULL), temp3(NULL), count(0)
{
}

void List::addNode()
{
	count++;
	Node * newNode = new Node(count);
	if(count == 1)
	{
		head = newNode;
		tail = newNode;
	}else
	{
		temp = head;
		while(temp->next != NULL)
		{
			temp = temp->next;
			if(temp->next == NULL)
			{
				break;
			}
		}
		temp->next = newNode;
		newNode->prev = temp;
		tail = newNode;
	}
}

void List::addFront()
{
	cout << "Adding to the front of the list" << endl;
	count++;
	Node * newNode = new Node(count);

	newNode->next = head;
	head->prev = newNode;
	head = newNode;
}

void List::addMiddle()
{
	cout << "Adding to the middle of the list" << endl;
	count++;
	Node * newNode = new Node(count);

	temp = head;
	for (int i = 1; i < (count/2); i++)
	{
		temp = temp->next;
	}
	temp2 = temp->next;

	newNode->prev = temp;
	newNode->next = temp2;
	temp2->prev = newNode;
	temp->next = newNode;
}

void List::addEnd()
{
	cout << "Adding to the end of the list" << endl;
	count++;
	Node * newNode = new Node(count);

	newNode->prev = tail;
	tail->next = newNode;
	tail = newNode;
}

void List::deleteFront()
{
	cout << "Deleting the Front of the list" << endl;

	temp = head;
	head = head->next;
	head->prev = NULL;

	temp->prev = NULL;
	temp->next = NULL;
	delete temp;

	count--;
}

void List::deleteMiddle()
{
	cout << "Deleting the Middle of the list" << endl;

	temp = head;
	for (int i = 1; i < (count/2); i++)
	{
		temp = temp->next;
	}

	temp2 = temp->prev;
	temp3 = temp->next;

	temp2->next = temp3;
	temp3->prev = temp2;

	temp->prev = NULL;
	temp->next = NULL;
	delete temp;
	count--;
}

void List::deleteEnd()
{
	cout << "Deleting the End of the list" << endl;

	temp = tail;
	tail = tail->prev;
	tail->next = NULL;

	temp->prev = NULL;
	temp->next = NULL;
	delete temp;

	count--;
}

void List::loadList(int size)
{
	for (int i = 0; i < size; i++)
	{
		addNode();
	}
}

void List::printList()
{
	cout << "Printing:" << endl;
	int i = 1;
	temp = head;
	while(temp != NULL)
	{
		cout << setw(5) << left << i ;
		cout << temp->stock;
		temp = temp->next;
		i++;
	}
	cout << "\n";
}

void List::ReverseprintList()
{
	cout << "Reverse Printing:" << endl;
	int i = 1;
	temp = tail;
	while(temp != NULL)
	{
		cout << setw(5) << left << i ;
		cout << temp->stock;
		temp = temp->prev;
		i++;
	}
	cout << "\n";
}


void List::storeList()
{
	ofstream fout;
	fout.open("stock.txt");
	temp = head;
	int i = 1;
	while(temp != NULL)
	{
		fout << setw(5) << left << i ;
		fout << temp->stock;
		temp = temp->next;
		i++;
	}
}
