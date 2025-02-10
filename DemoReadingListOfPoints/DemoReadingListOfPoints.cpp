// DemoReadingListOfPoints.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<fstream> 
#include <iostream>
#include<string> 
#include <vector>

struct Point
{
	int x; 
	int y; 
	//int z; //zed (for 3 dimensions)
};


void demoSomeStuffAboutArrays()
{
	std::string groceryList[3] = //C-style, static array
	{
		"eggs", "bacon", "tuna"
	};

	//make a LIST of points (a std::vector is a DYNAMIC array (list size can grow and SHRINK as needed) 

	Point firstPoint = { 1, 2 };
	Point secondPoint = { 12341, 12312333 };

	std::vector<Point> listOfPoints =
	{
		firstPoint,
		secondPoint
	};


	//std::cout << somePoint.x << "," << somePoint.y << "\n";
	//std::cout << "\n\n\n\n";
}


void demoOneApproachToReadingInputFromFile()
{
	std::ifstream fin{ "points.txt" };

	if (!fin)
	{
		std::cout << "FNFE\n";
		return;
	}

	std::vector<Point> listOfPoints;

	std::string currentLine;
	int sumOfAllXAndYs = 0;
	while (getline(fin, currentLine, ','))
	{
		std::cout << currentLine << "\n";

		int currentXOrY = std::stoi(currentLine); //string to int

		sumOfAllXAndYs = sumOfAllXAndYs + currentXOrY;

	}

	std::cout << "Sum is: " << sumOfAllXAndYs << "\n";

}
int main()
{

	std::ifstream fin{ "points.txt" };

	if (!fin)
	{
		std::cout << "FNFE\n";
		return -1; 
	}

	std::vector<Point> listOfPoints; 

	while (!fin.eof())
	{
		int x, y; 
		fin >> x; 
		fin.ignore(1); //ignore the comma
		fin >> y; 

		Point currentPoint = { x, y }; 

		listOfPoints.push_back(currentPoint); //what is this "push_back"? 
	}

	int sumOfXValues = 0; 
	//print the list of points using the dynamic array that we stored
	for (const auto& currentPoint : listOfPoints) //the range-based for loop 
		//for (int i = 0; i < listOfPoints.size(); ++i) //an alternative loop approach
	{
		//std::cout << currentPoint.x << "," << currentPoint.y << "\n";

		sumOfXValues += currentPoint.x; 
		//sumOfXValues = sumOfXValues + currentPoint.x;  //another way of writing the line above
	}

	std::cout << "Sum of all x values: " << sumOfXValues << "\n";
	std::cout << "SIZE of the dynamic array: " << listOfPoints.size() << "\n";

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
