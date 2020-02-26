//============================================================================
// Name        : main.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include "student.h"
using namespace std;

int main()
{
	ifstream fin;
	ofstream fout;
	fin.open("students.txt");
	fout.open("top_3.txt");
	Student arr[10], sum, top[3], temp;
	int i(0);
	while(!fin.eof())
	{
	fin >> arr[i];
	sum = sum + arr[i];
	if(fin.eof())
	{
		break;
	}
	cout << arr[i];
	i++;
	}
	cout << "Average score is: ";
	printAvg(cout, sum, i);
	cout << "\n";
	fin.close();
	top[0] = arr[0];
	for(int c = 1; c < i; c++)
	{
		if(arr[c] > top[0])
		{
			top[0] = arr[c];
		}
	}
	fout << "Top 1 student is: " << top[0];
	top[1] = arr[0];
	for(int c = 1; c < i; c++)
	{
		if(arr[c] < top[0] && arr[c] > top[1])
		{
			top[1] = arr[c];
		}
	}
	fout << "Top 2 student is: " << top[1];
	top[2] = arr[0];
	for(int c = 1; c < i; c++)
	{
		if(arr[c] < top[1] && arr[c] > top[2])
		{
			top[2] = arr[c];
		}
	}
	fout << "Top 3 student is: " << top[2];
	fout.close();

}
