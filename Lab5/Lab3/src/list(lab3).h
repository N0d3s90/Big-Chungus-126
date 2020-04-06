/*
 * list.h
 *
 *  Created on: Mar 4, 2020
 *      Author: Gabriel
 */

#ifndef LIST_LAB3__H_
#define LIST_LAB3__H_
#include "node(lab3).h"

class List
{
public:
	List();
	void addNode(Stock s);
	void makeList();
	void printList();
	void reverseprintList(Node* n);
	void printMid(Node * n);
	void splitList();
	void settemphead();
	Node * findMiddle();
	Node * getHead();
private:
	Node * head1;
	Node * head2;
	Node * slow;
	Node * fast;
	Node * temp;
};




#endif /* LIST_LAB3__H_ */
