/*
 * Search.cpp
 *
 *  Created on: Apr 27, 1111
 *      Author: Gabriel
 */

#include "Search.h"
#include "Node.h"
#include <iostream>
#include <fstream>
using namespace std;

Search::Search()
{
	count = 0;
	head = NULL;
	temp = NULL;
	for (int i = 0; i < 30; i++)
	{
		array[i]=0;
	}
	for (int i=0; i < 11; i++)
	{
		htflag[i] = -1;
	}
}
void Search::loadArray()
{
	ifstream fin;
	fin.open("data.txt");
	int num=0;
	while (fin >> num)
	{
		array[count]=num;
		count++;
	}
	fin.close();
}
void Search::loadList()
{
	ifstream fin;
	fin.open("data.txt");
	int num=0;
	while (fin >> num)
	{
		addNode(num);
	}
	fin.close();
}
void Search::addNode(int num)
{
	Node * newNode = new Node();
	newNode->element = num;
	newNode->next = NULL;
	if (head == NULL)
	{
		head = newNode;
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
	}
}
void Search::printArray()
{
		for (int i = 0; i < count; i++)
		{
			cout<<array[i]<<" ";
		}
}
void Search::printList()
{
	temp = head;
	while(temp != NULL)
	{
		cout << temp->element << " ";
		temp = temp->next;
	}
}
void Search::sort()
{
	for (int i = 0; i < count; i++)
	{
		int smallest = array[i];
		int min = i;
		for (int i2 = min + 1; i2 < count; i2++)
		{
			if (array[i2] < smallest)
			{
				smallest= array[i2];
				min = i2;
			}

		}
		swap(array[i], array[min]);
	}
}
void Search::swap(int &i1, int &i2)
{
	int t;
	t = i1;
	i1 = i2;
	i2 = t;
}
int Search::sequentialNoRecursion(int e)
{
	for (int i = 0; i < count; i++)
	{
		if(array[i]==e)
		{
			return i;
		}
	}
	return -1;
}
int Search::sequentialRecursion(int size, int e)
{
	if (size==0)
	{
		return -1;
	}
	if (array[size] == e)
	{
		return size;
	}
	return sequentialRecursion(size - 1, e);
}
int Search::binaryNoRecursion(int e, int left, int right)
{
	while (left <= right)
	{
		int middle = (left + right) / 2;
		if (array[middle] == e)
		{
			return middle;
		}
		else if (array[middle] > e)
		{
			right = middle - 1;
		}
		else if (array[middle] < e)
		{
			left = middle + 1;
		}
	}
	return -1;
}
int Search::binaryRecursion(int e, int left, int right)
{
	int middle = (left + right) / 2;
	if (left>right)
	{
		return -1;
	}
	if (array[middle] == e)
	{
		return middle;
	}
	else if (array[middle] > e)
	{
		return binaryRecursion(e, left, middle - 1);
	}
	else if (array[middle] < e)
	{
	return binaryRecursion(e, middle + 1, right);
	}
	return -1;
}
int Search::listNoRecursion(int e)
{
	temp = head;
	while(temp != NULL)
	{
		if (e == temp->element)
		{
			return count;
		}
		temp = temp->next;
		count++;
	}
	cout << "\n";
	return -1;
}
int Search::listRecursion(int e, Node* t)
{
	if (t==NULL)
	{
		return -1;
	}
	if (e == t->element)
	{
		return count;
	}
	count++;
	return listRecursion(e, t->next);
}
//Lab9
void Search::loadHash()
{
	ifstream fin;
	fin.open("data.txt");
	int num=0;
	while (fin >> num)
	{
		addLinear(num);
	}
	fin.close();
}
int Search::addLinear(int num)
{
	if (count == 11)
	{
		return -1;
	}
	int e = hashLinear(num);
	for (int i = 0; i < 11; i++)
	{
		if (htflag[e] != 0)
		{
			ht[e] = num;
			htflag[e] = 0;
			count++;
			return e;
		}
		e = (e + 1) % 11;
	}
	return -1;
}
int Search::hashLinear(int e)
{
	return (e % 11);
}
int Search::searchLinear(int num)
{
	int e = hashLinear(num);
	for (int i = 0; i < 11; i++)
	{
		if (htflag[e] == -1)
		{
			return -1;
		}
		if (htflag[e] == 0 && ht[e] == num)
		{
			num = ht[e];
			return e;
		}
		e = (e + 1) % 11;
	}
	return -1;
}
void Search::printHash()
{
		for (int i = 0; i < 11; i++)
		{
			if(htflag[i] == 0)
			{
				cout << ht[i] << " ";
			}
		}
}
void Search::SearchMenu()
{
	int choice = 0;
	int element = 0;
	Search s;
	s.count = 0;
	s.loadList();
	s.count = 0;
	s.loadHash();
	do
	{
		cout<<"\nChoose your search type:";
		cout<<"\n1. Arrays: Sequential Search without recursion";
		cout<<"\n2. Arrays: Sequential Search with recursion";
		cout<<"\n3. Ordered Arrays: Binary Search without recursion";
		cout<<"\n4. Ordered Arrays: Binary Search with recursion";
		cout<<"\n5. Linked List: Search without recursion";
		cout<<"\n6. Linked List: Search with recursion";
		cout<<"\n7. Hashing with linear probing";
		cout<<"\nEnter 0 to exit.\nYour choice: ";
		cin>>choice;
		if (choice == 1)
		{
			s.count = 0;
			s.loadArray();
			cout<<"Elements: ";
			s.printArray();
			cout<<"\nSpecify the element to be searched for: ";
			cin >> element;
			cout << "Element index(-1 means element not in list): " << s.sequentialNoRecursion(element);
		}
		if (choice == 2)
		{
			s.count = 0;
			s.loadArray();
			cout<<"Elements: ";
			s.printArray();
			cout<<"\nSpecify the element to be searched for: ";
			cin >> element;
			cout << "Element index(-1 means element not in list): " << s.sequentialRecursion(s.count - 1, element);
		}
		if (choice==3)
		{
			s.count = 0;
			s.loadArray();
			s.sort();
			cout<<"Elements: ";
			s.printArray();
			cout<<"\nSpecify the element to be searched for: ";
			cin >> element;
			cout << "Element index(-1 means element not in list): " << s.binaryNoRecursion(element, 0, s.count);
		}
		if (choice==4)
		{
			s.count = 0;
			s.loadArray();
			s.sort();
			cout<<"Elements: ";
			s.printArray();
			cout<<"\nSpecify the element to be searched for: ";
			cin >> element;
			cout << "Element index(-1 means element not in list): " << s.binaryRecursion(element, 0, s.count);
		}
		if (choice==5)
		{
			cout<<"Elements: ";
			s.printList();
			cout<<"\nSpecify the element to be searched for: ";
			cin >> element;
			s.count = 0;
			cout << "Element index(-1 means element not in list): " << s.listNoRecursion(element);
		}
		if (choice==6)
		{
			cout<<"Elements: ";
			s.printList();
			cout<<"\nSpecify the element to be searched for: ";
			cin >> element;
			s.count = 0;
			cout << "Element index(-1 means element not in list): " << s.listNoRecursion(element);
		}
		if (choice==7)
		{
			cout<<"Elements: ";
			s.printHash();
			cout<<"\nSpecify the element to be searched for: ";
			cin >> element;
			cout << "Element index(-1 means element not in list): " << s.searchLinear(element);
		}
	}while(choice!=0);
}
