/*
 * complexDB.cpp
 *
 *  Created on: Feb 18, 2020
 *      Author: Gabriel
 */

#include "complexDB(lab2).h"
#include <fstream>
#include <stdlib.h>
#include <cstring>
DB::DB() : count(0), option(0), size(10)
{
	arr1 = new Complex[size];
	if(count == size - 1)
	{
		arr2 = new Complex[count];			//if too small, makes new one thats bigger and deletes the old one
		memcpy(arr2, arr1, count);
		delete[] arr1;
		size++;
		arr1 = new Complex[size];
		memcpy(arr1, arr2, count);
		delete[] arr2;
	}
}
DB::~DB()
{
	delete [] arr1;
}

void DB::choices()
{
	/*
	cout << "1.  Add\n2.  Delete\n3.  Load(List Numbers)\n4.  List(Sorts Numbers)\n5.  Save\n";
	cout << "Enter an option: ";
	cin >> option;
	ofstream fout;
	DB db1;
	Complex temp1;
	int temp2;
	if(option == 1)
	{
		cout << "Enter a complex number to add(a+bi):";
		cin >> temp1;
		add(temp1);
		choices();
	}else if(option == 2)
	{
		for (int i = 0; i < count; i++)
		{
			cout << i+1 << ".  "<< arr1[i] << endl;
		}
		cout << "Which number do you want to delete:";
		cin >> temp2;
		del(temp2 - 1);


		choices();
	}else if(option == 3)
	{
		load();
		choices();
	}
	else if(option == 4)
	{
		list();
		choices();
	}else if(option == 5)
	{
		fout.open("126export.txt");
		if (fout.fail())
		{
			cerr << "Error opening file" << endl;
			exit(1);
		}
		save(fout);
		fout.close();
		cout << "Saved numbers to 126export.txt" << endl;
		choices();
	}else
	{

	}
*/
	largest(arr1, size);
	cout << "Largest is "<< biggest;
}

void DB::add(Complex& comp)
{

	arr1[count] = comp;
	count++;
}
/*
void DB::del(int num)
{
	for (int i = num; i < count; i++)
	{
		arr1[i] = arr1[i+1];
	}
	count--;
}
*/
void DB::load()
{
	for (int i = 0; i < count; i++)
	{
		cout << i+1 << ".  " << arr1[i] << endl;
	}
}
/*
void DB::list()
{
	load();
}
void DB::save(ostream& out)
{
	for (int i = 0; i < count; i++)
		{
			out << arr1[i] << endl;
		}
}

void DB::swap(Complex* val1, Complex* val2) //swaps two array values
{
    Complex temp = *val1;
    *val1 = *val2;
    *val2 = temp;
}
*/
void DB::largest(Complex *arr, int n) //sort array, n is size
{
if(n == 1)
{
	return;
}
if(arr[n] > biggest)
{
	biggest = arr[n];
}
largest(arr, n - 1);
}

