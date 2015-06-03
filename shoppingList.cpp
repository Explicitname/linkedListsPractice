#include "shoppingList.h"

using namespace std;

ShoppingList::ShoppingList():head(0),tail(0), size(0)
{}


void ShoppingList::addToHead(Item* newOne)
{
    if(head == 0)
    {
        head = newOne;
        tail = newOne;
    }
    else
    {
        newOne->next = head;
        head->previous = newOne;
        head = newOne;
    }

    size++;
}

void ShoppingList::addToTail(Item* newOne)
{
    if(tail == 0)
    {
        head = newOne;
        tail = newOne;
    }
    else
    {
        newOne->previous = head;
        head->next = newOne;
        tail = newOne;
    }

    size++;
}

int ShoppingList::ShowSize()
{
	return size;
}

Item ShoppingList::ShowHeads()
{
	return *head;

}

Item ShoppingList::ShowTails()
{
	return *tail;
}
