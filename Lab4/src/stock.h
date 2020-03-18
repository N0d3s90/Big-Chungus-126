/*
 * stock.h
 *
 *  Created on: Mar 3, 2020
 *      Author: Gabriel
 */

#ifndef STOCK_H_
#define STOCK_H_
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;

class Stock
{
public:
	Stock();
	Stock(int i);
	friend ostream& operator << (ostream& out, const Stock& s);
	void print(const Stock& s);
private:
	string symbol;
	int shares;
	double cost;

};

#endif /* STOCK_H_ */
