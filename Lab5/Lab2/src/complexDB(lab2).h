/*
 * complexDB.h
 *
 *  Created on: Feb 18, 2020
 *      Author: Gabriel
 */

#ifndef COMPLEXDB_H_
#define COMPLEXDB_H_
#include "complex(lab2).h"
using namespace std;

class DB
{
public:
	DB();
	~DB();
	void choices();

	void add(Complex& comp);
	void del(int num);
	void load();
	void list();
	void save(ostream& out);


	void swap(Complex* a, Complex* b);
	void largest(Complex a[], int n);
private:
	Complex* arr1;
	Complex* arr2;
	int count;
	int option;
	int size;
	Complex biggest;
};




#endif /* COMPLEXDB_H_ */
