/*
 * product.h
 *
 *  Created on: May 5, 2020
 *      Author: Gabriel
 */

#ifndef PRODUCT_H_
#define PRODUCT_H_
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;

class Product
{
public:
	Product();
	Product(int i1, int i2, double d, string s);
	string getName();
	string getID();
	int getCount1();
	void setCount1(int i);
	int getProductcount();
	int getCount2();
	int getItemssold();
	void setItemssold(int i);
	void setProfit();
	double getProfit();
	friend istream& operator >> (istream& in, Product& p);
	friend ostream& operator << (ostream& out, const Product& p);
	friend bool operator == (const Product& p1, const Product& p2);
	void print(const Product& p);
	void restock();

	bool soldout();

private:
	string name;
	double cost;
	double profit;
	int count1;
	int count2;
	int productcount;
	int backcount;
	string id;
	bool out;
	int itemssold;
};



#endif /* PRODUCT_H_ */
