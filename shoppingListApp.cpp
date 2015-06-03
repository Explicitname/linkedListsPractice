/*
 * shoppingListApp.cpp
 *
 *  Created on: Jun 3, 2015
 *      Author: Explicitness
 */

#include "shoppingList.h"

int main()
{
    /*Item* item1 = new Item("Pencil");
    Item* item2 = new Item("Paper");
    Item* item3 = new Item("Soap");

    ShoppingList* itemList1 = new ShoppingList();

    itemList1->addToHead(item1);
    itemList1->addToHead(item2);
    itemList1->addToHead(item3);*/

Item* item1 = new Item("Pencil", .50, "Office Supplies");
Item* item2 = new Item("Paper", 1.05, "Office Supplies");
Item* item3 = new Item("Soap", .75, "Toiletry");
Item* item4 = new Item("Toothbrush", 1.50, "Toiletry");


ShoppingList itemList1; //= new ShoppingList();

itemList1.addToHead(item1);
itemList1.addToHead(item2);
itemList1.addToHead(item3);
itemList1.addToTail(item4);

//std::cout << itemList1.size() << std::endl;
std::cout << "*** HEAD ***" << std::endl << itemList1.ShowHeads() << std::endl;
std::cout << "*** TAIL ***" << std::endl << itemList1.ShowTails() << std::endl;

}
