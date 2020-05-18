/*
 * inventory.h
 *
 *  Created on: May 6, 2020
 *      Author: Gabriel
 */

#ifndef INVENTORY_H_
#define INVENTORY_H_
#include <stack>
#include "product.h"
#include "node.h"

using namespace std;

class Inventory
{
public:
	Inventory();
	void recordItems();
	void printItems();
	void sellItem(int i, Product& p);

	void addNode(Product& p);
	void printList();

	void countItems();

	void countInventory();
	void InventoryMenu();
	void sell();
private:
	Product product[15];
	double money;
	Node * head;
	Node * temp;
};



#endif /* INVENTORY_H_ */
