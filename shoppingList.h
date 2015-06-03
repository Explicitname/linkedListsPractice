/*
 * shoppingList.h
 *
 *  Created on: Jun 3, 2015
 *      Author: Explicitness
 */

#ifndef SHOPPINGLIST_H_
#define SHOPPINGLIST_H_

#include "itemNode.h"

class ShoppingList
{
    public:
        ShoppingList();
        void addToHead(Item* newOne);
        void addToTail(Item* newOne);
        void addAt(Item* newOne);
        int ShowSize();
        Item ShowHeads();
        Item ShowTails();

    private:
        Item* head;
        Item* tail;
        int size;
};




#endif /* SHOPPINGLIST_H_ */
