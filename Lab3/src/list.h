/*
 * list.h
 *
 *  Created on: Mar 4, 2020
 *      Author: Gabriel
 */

#ifndef LIST_H_
#define LIST_H_
#include "node.h"

class List
{
public:
	List();
	void addNode(Stock s);
	void makeList();
	void printList();
	void printMid(Node * n);
	void splitList();
	Node * findMiddle();
private:
	Node * head1;
	Node * head2;
	Node * slow;
	Node * fast;
	Node * temp;
};




#endif /* LIST_H_ */
