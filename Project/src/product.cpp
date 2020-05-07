/*
 * product.cpp
 *
 *  Created on: May 5, 2020
 *      Author: Gabriel
 */

#include "product.h"
#include <iostream>
#include <sstream>
#include <iomanip>
#include <stack>

Product::Product()
{
	cost = 0;
	profit = 0;
	count1 = 0;
	count2 = 0;
	productcount = 0;
	backcount = 0;
	itemssold = 0;
	out = false;
}

istream& operator >> (istream& in, Product& p)
{
	int tempint = 0;
	double tempdouble = 0;
	char tempchar;
	string tempstring;
	in >> p.id >> p.name;
	in >> tempchar;
	if(tempchar >= 'A')
	{
		p.name = p.name + " ";
		p.name = p.name + tempchar;
		in >> tempstring;
		p.name = p.name + tempstring;
		in >> p.cost;
	}
	else
	{
		tempint = (int)tempchar - '0';
		in >> tempchar;
		if(tempchar == '.')
		{
			p.cost = tempint;
			in >> tempdouble;
			tempdouble = tempdouble/100;
			p.cost = p.cost + tempdouble;
		}
		else
		{
			tempint = tempint*10 + ((int)tempchar - '0');
			p.cost = tempint;
			in >> tempdouble;
			p.cost = p.cost + tempdouble;
		}

	}
	in >> p.productcount >> p.backcount;
	p.count1 = p.productcount;
	p.count2 = p.backcount;
	return in;
}

ostream& operator << (ostream& out, const Product& p)
{
	out.precision(10);
	out << p.id;
	out << " ";
	out << p.name;
	out << " ";
	out << p.cost;
	out << " ";
	out << p.productcount;
	out << " ";
	out << p.backcount;
	out << endl;
	return out;
}

string Product::getName()
{
	return name;
}
string Product::getID()
{
	return id;
}
int Product::getCount1()
{
	return count1;
}
void Product::setCount1(int i)
{
	count1 = i;
}
int Product::getProductcount()
{
	return productcount;
}
int Product::getCount2()
{
	return count2;
}
int Product::getItemssold()
{
	return itemssold;
}
void Product::setItemssold(int i)
{
	itemssold = i;
}
void Product::setProfit()
{
	profit = itemssold * cost;
}
double Product::getProfit()
{
	return profit;
}
bool Product::soldout()
{
	return out;
}


void Product::restock()
{
	cout << "Restocking Shelves" << endl;
	if(count2 == 0)
	{
		out = true;
	}
	else if(count2 - count1 >= 0)
	{
		count1 = productcount;
		count2 = count2 - count1;
	}

}

bool operator == (const Product& p1, const Product& p2)
{
	return(p1.id == p2.id);
}


