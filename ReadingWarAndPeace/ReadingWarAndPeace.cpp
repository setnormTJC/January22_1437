// ReadingWarAndPeace.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<fstream> 
#include <iostream>
#include<string> 


int main()
{
	std::ifstream fin{ "warAndPeace.txt" }; //this is a "RELATIVE" filepath 

	if (!fin.is_open())
	{
		std::cout << "That file wasn't found\n";
	}

	else
	{
		//std::cout << "file WAS found\n";

		std::string currentWord; 
		//while(!fin.eof()) //this is ONE way to read to the end of an input file 
		
		int numberOfWords = 0; 
		while (std::getline(fin, currentWord, ' '))
		{
			//std::cout << currentWord << "\n";
			//how do we get the number of WORDS? 
			numberOfWords = numberOfWords + 1; 
		}

		std::cout << "\n\nTOTAL number of lines: " << numberOfWords << "\n";
	}
}

