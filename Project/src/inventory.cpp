/*
 * inventory.cpp
 *
 *  Created on: May 6, 2020
 *      Author: Gabriel
 */

#include "inventory.h"
#include <stack>
#include <iostream>
#include <sstream>
#include <fstream>
#include <iomanip>

Inventory::Inventory()
{
	money = 0;
	temp = NULL;
	head = NULL;
}

void Inventory::recordItems()
{
	ifstream fin;
	fin.open("products.txt");
	Product temp;
	for(int i = 0; i < 15; i++)
	{
		fin >> temp;
		product[i] = temp;
	}
	fin.close();
}
void Inventory::printItems()
{
	for(int i = 0; i < 15; i++)
	{
		cout << product[i];
	}
}
void Inventory::sellItem(int i1, Product& p)	//(How Many Items, Item ID)
{
	for(int i2 = 0; i2 < i1; i2++)
	{
		addNode(p);
	}
}
void Inventory::countItems()
{
	temp = head;
	Product ptemp;
	while(temp != NULL)
	{
		for(int i = 0; i < 15; i++)
		{
			ptemp = temp->p;
			if(product[i] == ptemp)
			{
				int itemp = product[i].getItemssold();
				product[i].setItemssold(itemp + 1);
			}
		}
		temp = temp->next;
	}
}
void Inventory::InventoryMenu()
{
	for(int i = 0; i < 15; i++)
	{
		cout << i + 1 << " "<< product[i].getName() << endl;
	}
}

void Inventory::sell()
{
	int option1 = 0;
	int option2 = 0;
	InventoryMenu();
	cout << "Enter which product you are buying(0 to end): " << endl;
	cin >> option1;
	if(option1 ==0)
	{
		countItems();
		for(int i = 0; i < 15; i++)
		{
			if(product[i].getItemssold() == 0)
			{
				cout << "We haven't sold any " << product[i].getName() << " today. " << endl;
			}
			else
			{
				cout << "We have sold " << product[i].getItemssold() << " "
						<< product[i].getName() << ".";
				if(product[i].soldout())
				{
					cout << " We need to buy more " << product[i].getName() << " to restock our inventory. "<< endl;
				}
				else
				{
					cout << " There are " << product[i].getCount2()
								<< " items left in inventory and " << product[i].getCount1()
								<< " items still on the shelves.";
					product[i].setProfit();
					money = money + product[i].getProfit();
					if(product[i].getCount2() < product[i].getProductcount())
					{
						cout << " We need to buy more " << product[i].getName() << " to restock our inventory. " << endl;
					}
					else
					{
						cout << " Obtain " << product[i].getProductcount() - product[i].getCount1() << " items from inventory to restock the shelves. " << endl;
					}
				}
			}
		}
		cout << "We have made $" << fixed << setprecision(2) << money << " today."<< endl;
	}
	else
	{
		cout << "There are currently " << product[option1 - 1].getCount1() << " items on the shelf." << endl;
		cout << "Enter how many items you are buying: " << endl;
		cin >> option2;
		if(option2 > product[option1 - 1].getCount1())
		{
			cout << "Cannot buy that many" << endl;
		}
		else
		{
		sellItem(option2, product[option1 - 1]);
		product[option1 - 1].setCount1(product[option1 - 1].getCount1() - option2);
		if(product[option1 - 1].getCount1() == 0)
		{
			product[option1 - 1].restock();
		}
		}
		sell();
	}
	stringstream tempstr;
	string s = tempstr.str();

}

void Inventory::addNode(Product& ptemp)
{
	Node * newNode = new Node();
	newNode->p = ptemp;
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
void Inventory::printList()
{
	temp = head;
	while(temp != NULL)
	{
		cout << temp->p << " ";
		temp = temp->next;
	}
}


