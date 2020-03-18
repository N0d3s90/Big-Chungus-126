/*
 * list.h
 *
 *  Created on: Mar 4, 2020
 *      Author: Gabriel
 */

#ifndef PORTFOLIO_H_
#define PORTFOLIO_H_
#include "node.h"

class List
{
public:
	List();
	void addNode();
	void loadList(int size);
	void printList();
	void storeList();
	void ReverseprintList();

	void addFront();
	void addMiddle();
	void addEnd();

	void deleteFront();
	void deleteMiddle();
	void deleteEnd();
private:
	Node * head;
	Node * tail;

	Node * temp;
	Node * temp2;
	Node * temp3;

	int count;
};




#endif /* PORTFOLIO_H_ */
