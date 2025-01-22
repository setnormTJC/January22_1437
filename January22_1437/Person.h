#pragma once
#include <string>
#include <iostream>




class Person
{
	//private: 
public: 

	/*measured in years (obviously)*/
	unsigned short age; //5.5 years -> let's disallow floating point ages 

	std::string name; 


	/*This is a "DEFAULT constructor"!*/
	Person() = default; 

	/*This is called a "parameterized constructor" */
	Person(unsigned short age, const std::string& name);//function declaration 

	void print(); 
};

