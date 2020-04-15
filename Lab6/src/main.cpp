//============================================================================
// Name        : main.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include "stack.h"
#include "InfixToPostfix.h"

int main()
{
	InfixToPostfix itp;

	itp.getInfix("A + B - C");
	itp.showInfix();
	itp.showPostfix();

	itp.getInfix("(A + B) * C");
	itp.showInfix();
	itp.showPostfix();

	itp.getInfix("(A + B) * (C - D)");
	itp.showInfix();
	itp.showPostfix();

	itp.getInfix("A + ( (B + C) * (E - F) - G) / (H - I)");
	itp.showInfix();
	itp.showPostfix();

	itp.getInfix("A + B * (C + D) - E / F * G + H");
	itp.showInfix();
	itp.showPostfix();

}
