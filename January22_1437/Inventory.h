#pragma once

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
};

