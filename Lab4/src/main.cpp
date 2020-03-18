//============================================================================
// Name        : main.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <string>
#include <sstream>
#include <iostream>
#include <cstdlib>

#include "portfolio.h"

using namespace std;


int main()
{
	List list;
	Stock s;
	list.loadList(7);
	list.storeList();

	list.printList();
	list.ReverseprintList();

	list.addFront();
	list.printList();
	list.ReverseprintList();

	list.addMiddle();
	list.printList();
	list.ReverseprintList();

	list.addEnd();
	list.printList();
	list.ReverseprintList();

	list.deleteFront();
	list.printList();
	list.ReverseprintList();

	list.deleteMiddle();
	list.printList();
	list.ReverseprintList();

	list.deleteEnd();
	list.printList();
	list.ReverseprintList();

	return 0;
}

/*

Printing:
1    Symbol: A1   Shares: 69   Cost: $57.24
2    Symbol: A2   Shares: 62   Cost: $44.64
3    Symbol: A3   Shares: 81   Cost: $68.27
4    Symbol: A4   Shares: 95   Cost: $19.42
5    Symbol: A5   Shares: 91   Cost: $46.04
6    Symbol: A6   Shares: 92   Cost: $23.82
7    Symbol: A7   Shares: 18   Cost: $98.95

Reverse Printing:
1    Symbol: A7   Shares: 18   Cost: $98.95
2    Symbol: A6   Shares: 92   Cost: $23.82
3    Symbol: A5   Shares: 91   Cost: $46.04
4    Symbol: A4   Shares: 95   Cost: $19.42
5    Symbol: A3   Shares: 81   Cost: $68.27
6    Symbol: A2   Shares: 62   Cost: $44.64
7    Symbol: A1   Shares: 69   Cost: $57.24

Adding to the front of the list
Printing:
1    Symbol: A8   Shares: 71   Cost: $15.38
2    Symbol: A1   Shares: 69   Cost: $57.24
3    Symbol: A2   Shares: 62   Cost: $44.64
4    Symbol: A3   Shares: 81   Cost: $68.27
5    Symbol: A4   Shares: 95   Cost: $19.42
6    Symbol: A5   Shares: 91   Cost: $46.04
7    Symbol: A6   Shares: 92   Cost: $23.82
8    Symbol: A7   Shares: 18   Cost: $98.95

Reverse Printing:
1    Symbol: A7   Shares: 18   Cost: $98.95
2    Symbol: A6   Shares: 92   Cost: $23.82
3    Symbol: A5   Shares: 91   Cost: $46.04
4    Symbol: A4   Shares: 95   Cost: $19.42
5    Symbol: A3   Shares: 81   Cost: $68.27
6    Symbol: A2   Shares: 62   Cost: $44.64
7    Symbol: A1   Shares: 69   Cost: $57.24
8    Symbol: A8   Shares: 71   Cost: $15.38

Adding to the middle of the list
Printing:
1    Symbol: A8   Shares: 71   Cost: $15.38
2    Symbol: A1   Shares: 69   Cost: $57.24
3    Symbol: A2   Shares: 62   Cost: $44.64
4    Symbol: A3   Shares: 81   Cost: $68.27
5    Symbol: A9   Shares: 67   Cost: $62.99
6    Symbol: A4   Shares: 95   Cost: $19.42
7    Symbol: A5   Shares: 91   Cost: $46.04
8    Symbol: A6   Shares: 92   Cost: $23.82
9    Symbol: A7   Shares: 18   Cost: $98.95

Reverse Printing:
1    Symbol: A7   Shares: 18   Cost: $98.95
2    Symbol: A6   Shares: 92   Cost: $23.82
3    Symbol: A5   Shares: 91   Cost: $46.04
4    Symbol: A4   Shares: 95   Cost: $19.42
5    Symbol: A9   Shares: 67   Cost: $62.99
6    Symbol: A3   Shares: 81   Cost: $68.27
7    Symbol: A2   Shares: 62   Cost: $44.64
8    Symbol: A1   Shares: 69   Cost: $57.24
9    Symbol: A8   Shares: 71   Cost: $15.38

Adding to the end of the list
Printing:
1    Symbol: A8   Shares: 71   Cost: $15.38
2    Symbol: A1   Shares: 69   Cost: $57.24
3    Symbol: A2   Shares: 62   Cost: $44.64
4    Symbol: A3   Shares: 81   Cost: $68.27
5    Symbol: A9   Shares: 67   Cost: $62.99
6    Symbol: A4   Shares: 95   Cost: $19.42
7    Symbol: A5   Shares: 91   Cost: $46.04
8    Symbol: A6   Shares: 92   Cost: $23.82
9    Symbol: A7   Shares: 18   Cost: $98.95
10   Symbol: A10  Shares: 3    Cost: $38.11

Reverse Printing:
1    Symbol: A10  Shares: 3    Cost: $38.11
2    Symbol: A7   Shares: 18   Cost: $98.95
3    Symbol: A6   Shares: 92   Cost: $23.82
4    Symbol: A5   Shares: 91   Cost: $46.04
5    Symbol: A4   Shares: 95   Cost: $19.42
6    Symbol: A9   Shares: 67   Cost: $62.99
7    Symbol: A3   Shares: 81   Cost: $68.27
8    Symbol: A2   Shares: 62   Cost: $44.64
9    Symbol: A1   Shares: 69   Cost: $57.24
10   Symbol: A8   Shares: 71   Cost: $15.38

Deleting the Front of the list
Printing:
1    Symbol: A1   Shares: 69   Cost: $57.24
2    Symbol: A2   Shares: 62   Cost: $44.64
3    Symbol: A3   Shares: 81   Cost: $68.27
4    Symbol: A9   Shares: 67   Cost: $62.99
5    Symbol: A4   Shares: 95   Cost: $19.42
6    Symbol: A5   Shares: 91   Cost: $46.04
7    Symbol: A6   Shares: 92   Cost: $23.82
8    Symbol: A7   Shares: 18   Cost: $98.95
9    Symbol: A10  Shares: 3    Cost: $38.11

Reverse Printing:
1    Symbol: A10  Shares: 3    Cost: $38.11
2    Symbol: A7   Shares: 18   Cost: $98.95
3    Symbol: A6   Shares: 92   Cost: $23.82
4    Symbol: A5   Shares: 91   Cost: $46.04
5    Symbol: A4   Shares: 95   Cost: $19.42
6    Symbol: A9   Shares: 67   Cost: $62.99
7    Symbol: A3   Shares: 81   Cost: $68.27
8    Symbol: A2   Shares: 62   Cost: $44.64
9    Symbol: A1   Shares: 69   Cost: $57.24

Deleting the Middle of the list
Printing:
1    Symbol: A1   Shares: 69   Cost: $57.24
2    Symbol: A2   Shares: 62   Cost: $44.64
3    Symbol: A3   Shares: 81   Cost: $68.27
4    Symbol: A4   Shares: 95   Cost: $19.42
5    Symbol: A5   Shares: 91   Cost: $46.04
6    Symbol: A6   Shares: 92   Cost: $23.82
7    Symbol: A7   Shares: 18   Cost: $98.95
8    Symbol: A10  Shares: 3    Cost: $38.11

Reverse Printing:
1    Symbol: A10  Shares: 3    Cost: $38.11
2    Symbol: A7   Shares: 18   Cost: $98.95
3    Symbol: A6   Shares: 92   Cost: $23.82
4    Symbol: A5   Shares: 91   Cost: $46.04
5    Symbol: A4   Shares: 95   Cost: $19.42
6    Symbol: A3   Shares: 81   Cost: $68.27
7    Symbol: A2   Shares: 62   Cost: $44.64
8    Symbol: A1   Shares: 69   Cost: $57.24

Deleting the End of the list
Printing:
1    Symbol: A1   Shares: 69   Cost: $57.24
2    Symbol: A2   Shares: 62   Cost: $44.64
3    Symbol: A3   Shares: 81   Cost: $68.27
4    Symbol: A4   Shares: 95   Cost: $19.42
5    Symbol: A5   Shares: 91   Cost: $46.04
6    Symbol: A6   Shares: 92   Cost: $23.82
7    Symbol: A7   Shares: 18   Cost: $98.95

Reverse Printing:
1    Symbol: A7   Shares: 18   Cost: $98.95
2    Symbol: A6   Shares: 92   Cost: $23.82
3    Symbol: A5   Shares: 91   Cost: $46.04
4    Symbol: A4   Shares: 95   Cost: $19.42
5    Symbol: A3   Shares: 81   Cost: $68.27
6    Symbol: A2   Shares: 62   Cost: $44.64
7    Symbol: A1   Shares: 69   Cost: $57.24

 */

