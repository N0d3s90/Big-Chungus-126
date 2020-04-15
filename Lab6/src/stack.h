/*
 * stack.h
 *
 *  Created on: Apr 8, 2020
 *      Author: Gabriel
 */
#include <string>
using namespace std;
#ifndef STACK_H_
#define STACK_H_

class Stack
{
public:
	Stack(int max);
	~Stack();
	void push(char item);
	char pop();
	char top();
	bool empty();
private:
	int size;
	int t;
	char *list;
};




#endif /* STACK_H_ */
