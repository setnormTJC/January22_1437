
#include <iostream>
#include"Person.h"
using std::cout; 

/*this main function is often called the CLIENT PROGRAM*/
int main()
{
    //cout << UINT_MAX + 1<< "\n";
    //std::cout << "Hello World!\n";

    Person me{ 36, "Seth" };

    me.print(); 
    
}
