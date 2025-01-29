#pragma once

#include<iostream> 
#include<iomanip> 

using std::string, std::cout, std::setw, std::left; 

class Animal
{
private: 
	int age; 
	string name; 
	string species = "default species name";
	double weight; 

public: 
	Animal() = default; //constructor function 
	/*The function declaration below is an "OVERLOAD" of the Animal constructor*/
	Animal(int clientSpecifiedAge, string clientSpecifiedName, string clientSpecifiedpecies,
		double clientSpecifiedWeight);

	void print() const; 
};

