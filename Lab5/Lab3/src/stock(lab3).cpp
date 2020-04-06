/*
 * stock.cpp
 *
 *  Created on: Mar 4, 2020
 *      Author: Gabriel
 */

#include "stock(lab3).h"
#include <iostream>
#include <sstream>
#include <iomanip>


Stock::Stock()
{
	symbol = "A";
	shares = rand() % 100;
	cost = (double)(rand() % 10000) / 100;
}

Stock::Stock(int i)
{
	stringstream s;
	s << i;
	symbol = "A" + s.str();
	shares = rand() % 100;
	cost = (double)(rand() % 10000) / 100;
}

ostream& operator << (ostream& out, const Stock& s)
{
	out.width(10);
	out << left << s.symbol;
	out << left << "Shares: " << setw(5) << left << s.shares;

	out << setw(10) << right << "Cost: $" << setprecision(4) << s.cost << "\n";
	return out;
}

void Stock::print(const Stock& s)
{
	cout << s;
}
