/*
 * itemNode.h
 *
 *  Created on: Jun 3, 2015
 *      Author: Explicitness
 */

#ifndef ITEMNODE_H_
#define ITEMNODE_H_

#include <iostream>
#include <string>

class Item
{
    friend std::ostream& operator<<(std::ostream& os, const Item& c);
    friend class ShoppingList;

    public:

      Item(std::string name, double priceOfItem, std::string typeofItem);

    private:
      std::string name;
      double priceOfItem;
      std::string typeOfItem;
      Item* next;
      Item* previous;
};





#endif /* ITEMNODE_H_ */
