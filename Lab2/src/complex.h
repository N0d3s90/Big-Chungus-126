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
	Complex(double r, double i);

	friend istream& operator >> (istream& in, Complex& comp);
	friend ostream& operator << (ostream& out, const Complex& comp);
	friend bool operator < (const Complex& comp1, const Complex& comp2);
private:
	double real;
	double imag;
};
#endif /* COMPLEX_H_ */
