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
	list.printNode(n);
	list.splitList();
	return 0;
}
