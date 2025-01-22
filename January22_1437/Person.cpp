#include "Person.h"

void Person::print()
{
	std::cout << "Person's' age: " << Person::age
		<< "Person's other attribute that I forgot " << Person::name << "\n";
}

Person::Person(unsigned short age, const std::string& name)
	:age(age), name(name)
{
	//empty!
}