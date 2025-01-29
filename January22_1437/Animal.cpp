#include "Animal.h"

Animal::Animal(int clientSpecifiedAge, string clientSpecifiedName, string clientSpecifiedpecies,
	double clientSpecifiedWeight)
{
	age = clientSpecifiedAge; 
	name = clientSpecifiedName;
	species = clientSpecifiedpecies; 
	weight = clientSpecifiedWeight;
}

void Animal::print() const//:: is called the "scope resolution operator" (high-fallutin' name) 
{
	//age = 0; //cannot modify member variable if `const` is specified in function header!

	cout << left << setw(20) << Animal::name; 
	cout << left << setw(20) << Animal::species; //canis familiaris
	cout << left << setw(15) << Animal::age << " years old";
	cout << left << setw(5) << Animal::weight << "\n";
}
