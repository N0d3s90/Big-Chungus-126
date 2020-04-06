/*
 * complex.cpp
 *
 *  Created on: Feb 5, 2020
 *      Author: gabe
 */

#include "complex(lab2).h"
#include <cmath>

Complex::Complex() : real(0), imag(0)
{
}
Complex::Complex(double r, double i) : real(r), imag(i)
{
}
istream& operator >> (istream& in, Complex& comp)
{
	char symbol;
	int temp1, temp2, count(0), sign(1);
	double deci;

	in >> comp.real >> symbol;					//Real +/- Imag
	if(symbol == '.')
	{
		in >> temp1;
		temp2 = temp1;
		while(temp1 > 0)
		{
			temp1 = temp1 / 10;
			count++;
		}
		temp1 = 1;
		for(int i=0; i < count; i++)
		{
			temp1 = 10 * temp1;
		}
		deci = (double)temp2 / temp1;
		comp.real = comp.real + deci;
		in >> symbol;
	}
	if(symbol == '-')
	{
		in >> comp.imag;
		sign = -1;
	}else
	{
		in >> comp.imag;
	}

	in >> symbol; 											//i
	if(symbol == '.')
	{
		in >> temp1;
		temp2 = temp1;
		while(temp1 > 0)
		{
			temp1 = temp1 / 10;
			count++;
		}
		temp1 = 1;
		for(int i=0; i < count; i++)
		{
			temp1 = 10 * temp1;
		}
		deci = (double)temp2 / temp1;
		comp.imag = comp.imag + deci;
		in >> symbol;
	}
	comp.imag = (double)comp.imag * sign;
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
bool operator > (const Complex& comp1, const Complex& comp2)
{
	double value1, value2, value3;
	value3 = comp1.real*comp1.real+comp1.imag*comp1.imag;
	value1 = sqrt(value3);
	value3 = comp2.real*comp2.real+comp2.imag*comp2.imag;
	value2 = sqrt(value3);
	return value1 > value2;
}



