#pragma once

/*This is a "specification file" that specifies what it means to be an 
`Inventory` type*/


#include <iostream>

#include<string> 

using std::string; 

class Inventory
{
private: 
	
	string name; 
	int unitsAvailable; 
	double cost; 

public: 
	Inventory() = default; 

	/*parameterized constructor
	@param name -> the item name!
	*/
	Inventory(const string& name, const int unitsAvailable, const double cost);

	//void setAllInventoryAttributes(const string& name, const int unitsAvailable, const double cost);


	void printInventoryDeets();

	string getName();

	double getCost();

	int getUnitsAvailable(); 

	double calculateTotalValue(); 

};

