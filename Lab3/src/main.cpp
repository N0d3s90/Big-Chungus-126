//============================================================================
// Name        : main.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <string>
#include <sstream>
#include <iostream>
#include <cstdlib>
#include "list.h"

using namespace std;


int main()
{
	List list;
	Stock s;
	Node * n;
	list.makeList();
	list.printList();
	n = list.findMiddle();
	list.printMid(n);
	list.splitList();
	return 0;
}

/*
 *
A1        Shares: 34      Cost: $65
A2        Shares: 78      Cost: $93.58
A3        Shares: 5       Cost: $81.45
A4        Shares: 61      Cost: $4.91
A5        Shares: 27      Cost: $54.36
A6        Shares: 2       Cost: $1.53
A7        Shares: 21      Cost: $87.16
A8        Shares: 47      Cost: $17.26
A9        Shares: 69      Cost: $99.12
A10       Shares: 35      Cost: $98.94
A11       Shares: 22      Cost: $3.33
A12       Shares: 41      Cost: $77.11
A13       Shares: 47      Cost: $76.44
A14       Shares: 37      Cost: $28.59
A15       Shares: 29      Cost: $7.78
A16       Shares: 90      Cost: $18.42
A17       Shares: 40      Cost: $89.42
A18       Shares: 46      Cost: $38.05
A19       Shares: 70      Cost: $53.5
A20       Shares: 93      Cost: $35.48

Middle Node is:
A10       Shares: 35      Cost: $98.94
Location is: 9

List 1:
A1        Shares: 34      Cost: $65
A2        Shares: 78      Cost: $93.58
A3        Shares: 5       Cost: $81.45
A4        Shares: 61      Cost: $4.91
A5        Shares: 27      Cost: $54.36
A6        Shares: 2       Cost: $1.53
A7        Shares: 21      Cost: $87.16
A8        Shares: 47      Cost: $17.26
A9        Shares: 69      Cost: $99.12
A10       Shares: 35      Cost: $98.94

List 2:
A11       Shares: 22      Cost: $3.33
A12       Shares: 41      Cost: $77.11
A13       Shares: 47      Cost: $76.44
A14       Shares: 37      Cost: $28.59
A15       Shares: 29      Cost: $7.78
A16       Shares: 90      Cost: $18.42
A17       Shares: 40      Cost: $89.42
A18       Shares: 46      Cost: $38.05
A19       Shares: 70      Cost: $53.5
A20       Shares: 93      Cost: $35.48
 *
 */
