/*
 * InfixToPostfix.h
 *
 *  Created on: Apr 8, 2020
 *      Author: Gabriel
 */

#include <string>
using namespace std;
#ifndef INFIXTOPOSTFIX_H_
#define INFIXTOPOSTFIX_H_

class InfixToPostfix
{
public:
	InfixToPostfix();
	void convertToPostfix();
	bool precedence(char opr1, char opr2);
	void getInfix(string s);
	void showInfix();
	void showPostfix();
private:
	string infix;
	string postfix;
};




#endif /* INFIXTOPOSTFIX_H_ */
