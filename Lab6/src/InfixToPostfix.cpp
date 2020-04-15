/*
 * InfixToPostfix.cpp
 *
 *  Created on: Apr 8, 2020
 *      Author: Gabriel
 */

#include <iostream>
#include <string>
#include <stack>
#include "stack.h"
#include "InfixToPostfix.h"

using namespace std;

InfixToPostfix::InfixToPostfix()
{
	infix = "";
	postfix = "";
}

void InfixToPostfix::convertToPostfix()
{
    Stack stk(50);
	//stack<char> stk;
    char stkOpr;


    postfix = "";

    int len = infix.length();

    for (int i = 0; i < len; i++)
    {
        if (infix[i] >= 'A' && infix[i] <= 'Z')
        {
            postfix = postfix + " " + infix[i];
        }
        else
        {
            switch (infix[i])
            {
            case '(':
                stk.push(infix[i]);
                break;

            case ')':
                stkOpr = stk.top();
                stk.pop();

                while (stkOpr != '(')
                {
                    postfix = postfix + " " + stkOpr;

                    if (!stk.empty())
                    {
                        stkOpr = stk.top();
                        stk.pop();
                    }
                    else
                        break;
                }
                break;

            case ' ':
                break;

            default:
                if (stk.empty())
                {
                    stk.push(infix[i]);
                }
                else
                {
                    stkOpr = stk.top();
                    stk.pop();

                    while (precedence(stkOpr,infix[i]))
                    {
                        postfix = postfix + " " + stkOpr;
                        if (!stk.empty())
                        {
                            stkOpr = stk.top();
                            stk.pop();
                        }
                        else
                            break;
                    }

                    if (!precedence(stkOpr,infix[i]))
                    {
                        stk.push(stkOpr);
                    }

                    stk.push(infix[i]);
                }

            }
        }
    }
    while (!stk.empty())
    {
        postfix = postfix + " " + stk.top();
        stk.pop();
    }

}




bool InfixToPostfix::precedence(char opr1, char opr2)
{
    int prec1, prec2;
    if (opr1 == '*' || opr1 =='/')
    {
    	prec1 = 2;
    }
    else if(opr1 == '+' || opr1 == '-')
    {
    	prec1 = 1;
    }
    else if(opr1 ='(')
    {
    	prec1 = 0;
    }

    if (opr2 == '*' || opr2 == '/')
    {
    	prec2 = 2;
    }
    else if(opr2 =='+' || opr2 == '-')
    {
    	prec2 = 1;
    }
    return (prec1 >= prec2);
}


void InfixToPostfix::getInfix(string s)
{
    infix = s;
    convertToPostfix();
}

void InfixToPostfix::showInfix()
{
	cout << "Infix: " << infix << endl;
}
void InfixToPostfix::showPostfix()
{
	cout << "Postfix: " << postfix << endl;
}




