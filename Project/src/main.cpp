//============================================================================
// Name        : main.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "product.h"
#include "inventory.h"
#include <iostream>
using namespace std;

int main()
{
	Inventory i;
	i.recordItems();
	i.sell();
}
