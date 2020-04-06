/*
 * node.h
 *
 *  Created on: Mar 3, 2020
 *      Author: Gabriel
 */

#ifndef NODE_H_
#define NODE_H_
#include "stock(lab3).h"

class Node
{
public:
	Stock stock;
	Node *next;
};

#endif /* NODE_H_ */
