//============================================================================
// Name        : main.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;
#include "complex(lab2).h"
#include "complexDB(lab2).h"
int main()
{
	ifstream fin;
	Complex temp;
	DB db1;

	fin.open("126import.txt");

	if (fin.fail())
	{
		cerr << "Error opening file" << endl;
		exit(1);
	}
	while(!fin.eof())
	{

	fin >> temp;
	if(!fin.eof())
	{
		db1.add(temp);
	}
	if(fin.fail())								//Check if fail
	{
		fin.clear();							//Clears input
		fin.ignore(100,'\n'); 					//ignores up until \n
		continue;
	}
	}
	db1.load();
	db1.choices();
	fin.close();

}
