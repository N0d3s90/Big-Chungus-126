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
#include <string>
using namespace std;
#include "complex.h"
int main()
{
	ifstream fin;
	ofstream fout;
	string string;
	Complex temp, sum;
	fin.open("complex.txt");
	fout.open("complexObj.txt");
	if (fin.fail() || fout.fail())
	{
		cerr << "Error opening file" << endl;
		exit(1);
	}
	while(!fin.eof())
	{
	fin >> temp;
	if(fin.fail())								//Check if fail
	{
		fin.clear();							//Clears input
		fin.ignore(100,'\n'); 					//ignores up until \n
		continue;
	}else
	sum = sum + temp;							//Adds complex number to total sum
	fout << temp << endl;						//Outputs complex number
	}
	fout << "The sum is " << sum << endl;						//Outputs sum
	fin.close();
	fout.close();
}
