#include "itemNode.h"

using namespace std;

Item::Item(string n, double price, string type)
{
	name = n;
	typeOfItem = type;
	priceOfItem = price;
	next = 0;
	previous = 0;


}

ostream& operator<<(ostream& os, const Item& c)
{
    return os << "Name: " << c.name << endl << "Price: " << c.priceOfItem << endl << "Type of Item: " << c.typeOfItem << endl;
}
