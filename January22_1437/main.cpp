

//#include"Person.h"
#include "Inventory.h"
#include "Animal.h"

using std::cout; 


void demoInventoryClassCreation()
{
    //Inventory mySpecialInventoryItem{ "some shoes", 3, 11.99 };
    Inventory firstInventoryItem{ "Women's Crosbie Wide Leg Jeans ", 5, 300.00 };

    //cout << "Name of first inventory item: " << firstInventoryItem.getName() << "\n\a";

        //the dot is called the "member access operator" 
        //because it gives access to the (public) members of an "object" 
    //    firstInventoryItem.printInventoryDeets();

    //mySpecialInventoryItem.setAllInventoryAttributes("some OTHER shoes", 7, 22.99);

    cout << std::fixed << setprecision(2);
    cout << "The total value of the first inventory item is: " << firstInventoryItem.calculateTotalValue()
        << "\n";
    //cout << "Hadfadsf\n";

}

/*this main function is often called the CLIENT PROGRAM*/
int main()
{
    cout << "The amount of RAM needed by an integer is: " << sizeof(int) << " bytes\n";
    cout << sizeof(Animal) << "\n";
    Animal myDog{ 11, "Doris", "canis familiaris", 80.5 };

    myDog.print(); 


}
