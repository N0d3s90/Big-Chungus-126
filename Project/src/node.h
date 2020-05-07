/*
 * node.h
 *
 *  Created on: May 6, 2020
 *      Author: Gabriel
 */

#ifndef NODE_H_
#define NODE_H_

#include <cstdlib>
#include "product.h"
using namespace std;

class Node
{
public:
	Node();
	Product p;
	Node *next;
};



#endif /* NODE_H_ */
