/*
 * node.cpp
 *
 *  Created on: Mar 11, 2020
 *      Author: Gabriel
 */

#include "node.h"


Node::Node()
{
	next = NULL;
	prev = NULL;
}

Node::Node(int i)
{
	Stock s(i);
	stock = s;
	next = NULL;
	prev = NULL;
}
