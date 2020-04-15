/*
 * stack.cpp
 *
 *  Created on: Apr 8, 2020
 *      Author: Gabriel
 */
#include "stack.h"
#include <iostream>
#include <cstdlib>


Stack::Stack(int max)
{
	size = max;
	t = 0;
	list = new char(max);
}
Stack::~Stack()
{
	delete list;
}
void Stack::push(char item)
{
	t++;
	list[t] = item;
}
char Stack::pop()
{
	return list[--t];
}
char Stack::top()
{
	return list[t];
}
bool Stack::empty()
{
	return t == 0;
}
