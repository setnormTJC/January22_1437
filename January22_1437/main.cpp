

#include"Person.h"
#include "Inventory.h"
using std::cout; 

/*this main function is often called the CLIENT PROGRAM*/
int main()
{
    //cout << UINT_MAX + 1<< "\n";
    //std::cout << "Hello World!\n";

    //Person me{ 36, "Seth" };

    //me.print(); 
    

    //string name = 
    //Inventory mySpecialInventoryItem{ "some shoes", 3, 11.99 };
    Inventory firstInventoryItem{ "Women's Crosbie Wide Leg Jeans ", 5, 300.00 };

    //cout << "Name of first inventory item: " << firstInventoryItem.getName() << "\n\a";

        //the dot is called the "member access operator" 
        //because it gives access to the (public) members of an "object" 
    //    firstInventoryItem.printInventoryDeets();

    //mySpecialInventoryItem.setAllInventoryAttributes("some OTHER shoes", 7, 22.99);

    cout << "The total value of the first inventory item is: " << firstInventoryItem.calculateTotalValue()
        << "\n";
    //cout << "Hadfadsf\n";

}
