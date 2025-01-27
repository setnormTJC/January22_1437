#include "Inventory.h"
#include<iomanip>

using std::cout; 

Inventory::Inventory(const string& name, const int unitsAvailable, const double cost)
	:name(name), unitsAvailable(unitsAvailable), cost(cost)
{

}


void Inventory::printInventoryDeets()
{
	//std::setw(); std::left
	cout << Inventory::name << " " <<  unitsAvailable << " " << cost << "\n";
}

string Inventory::getName()
{
	//return Inventory::name; 
	return name; 
}

double Inventory::getCost()
{
	return cost;
}

int Inventory::getUnitsAvailable()
{
	return unitsAvailable;
}

double Inventory::calculateTotalValue()
{
	return cost * unitsAvailable; 
}
