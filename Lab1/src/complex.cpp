/*
 * complex.cpp
 *
 *  Created on: Feb 5, 2020
 *      Author: gabe
 */

#include "complex.h"
#include <string>

Complex::Complex() : real(0), imag(0)
{
}
Complex::Complex(int r, int i) : real(r), imag(i)
{
}
istream& operator >> (istream& in, Complex& comp)
{
	char symbol;

	in >> comp.real >> symbol >> comp.imag;					//Real +/- Imag
	if(symbol == '-')
	{
		comp.imag = -comp.imag;
	}
	in >> symbol; 											//i
	return in;

}
ostream& operator << (ostream& out, const Complex& comp)
{
	out << comp.real;
	if (comp.imag >= 0)
	{
		out << "+" << comp.imag;
	}else
	{
		out << comp.imag;
	}
	out << "i";
	return out;
}
Complex operator +(const Complex& comp1, const Complex& comp2)
{
	int real, imag;
	real = comp1.real + comp2.real;
	imag = comp1.imag + comp2.imag;
	Complex temp(real, imag);
	return temp;
}



