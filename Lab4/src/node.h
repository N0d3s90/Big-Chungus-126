/*
 * node.h
 *
 *  Created on: Mar 3, 2020
 *      Author: Gabriel
 */

#ifndef NODE_H_
#define NODE_H_
#include "stock.h"

class Node
{
public:
	Node();
	Node(int i);
	Stock stock;
	Node *next;
	Node *prev;
};

#endif /* NODE_H_ */
