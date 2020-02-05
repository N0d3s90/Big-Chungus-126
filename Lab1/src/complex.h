/*
 * complex.h
 *
 *  Created on: Feb 5, 2020
 *      Author: gabe
 */

#ifndef COMPLEX_H_
#define COMPLEX_H_
#include <iostream>
#include <fstream>
using namespace std;
class Complex
{
public:
	Complex();
	Complex(int r, int i);

	friend istream& operator >> (istream& in, Complex& comp);
	friend ostream& operator << (ostream& out, const Complex& comp);
	friend Complex operator + (const Complex& comp1, const Complex& comp2);
private:
	int real, imag;
};
#endif /* COMPLEX_H_ */
