/*
 * Search.h
 *
 *  Created on: Apr 27, 2020
 *      Author: Gabriel
 */

#ifndef SEARCH_H_
#define SEARCH_H_
#include "Node.h"
#include <iostream>
using namespace std;

class Search {
public:
	Search();
	void SearchMenu();

	void loadArray();
	void loadList();
	void printArray();
	void printList();
	void addNode(int num);
	void sort();
	void swap(int &v1, int &v2);

	int sequentialNoRecursion(int e);
	int sequentialRecursion(int size, int e);
	int binaryNoRecursion(int e, int left, int right);
	int binaryRecursion(int e, int left, int right);
	int listNoRecursion(int e);
	int listRecursion(int e, Node* head);

	//Lab9
	void loadHash();
	void printHash();
	int addLinear(int num);
	int searchLinear(int e);

	int hashLinear(int e);
	int hashQuadratic(int e);
	int hashChaining(int e);

private:
	int array[30];
	int ht[20];
	int htflag[20];
	Node * head;
	Node * temp;
	int count;
};


#endif /* SEARCH_H_ */
