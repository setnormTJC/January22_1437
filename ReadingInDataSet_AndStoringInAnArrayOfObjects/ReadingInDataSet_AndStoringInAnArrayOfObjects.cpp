// ReadingInDataSet_AndStoringInAnArrayOfObjects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> //input output stream
#include<fstream> 

#include<string> //for `getline` function
#include <vector>

using std::string; 
using std::ifstream; 
using std::cout; 

//using namespace std; 

struct SocialMediaRecord
{
    int UserID;
    int Age;
    string Gender; 
    string Platform;
    int DailyUsageMinutes;
};

struct Person
{
    int age; 
    double weight; 
};


void demoReadingSimpleTextFile()
{
    //how to read data from an input file?
    //like this: !
    ifstream fin{ "someTextFile.txt" }; //fin is analogous to cin (character input from keyboard) -> file input


    //check if the input file was found (before WASTING any time going further in this program)
    if (!fin.is_open())

    {
        //"early return" 
        cout << " File was NOT found! : (\n";
        return;
    }


    //fin >> firstWordFromFile; 
    string currentLine; //this variable will hold the contents of the current Line in the file 

    //cout << "The first (and ONLY the first) word from that file is: " << firstWordFromFile << "\n";
    while (!fin.eof()) //EOF -> End Of File
    {
        std::getline(fin, currentLine);
        cout << currentLine << "\n";
    }

    fin.close();
}

int main()
{

    //demoReadingSimpleTextFile(); 

    //demo getline for text and ints (and other data types) 


    ifstream fin{ "socialMediaRecords.csv" }; 

    if (!fin)
    {
        cout << "FNFE\n";
        return -1; //early return - waste no time looking through data if the file is not even there!
    }


    std::vector<SocialMediaRecord> recordList; 
    //let's just print the entire csv file contents in the terminal for now
    //we'll STORE the data and analyze 
    while (!fin.eof())
    {
        SocialMediaRecord currentRecord; 

        fin >> currentRecord.UserID >> currentRecord.Age >> currentRecord.Gender
            >> currentRecord.Platform >> currentRecord.DailyUsageMinutes; 

        //string currentLine; 

        //getline(fin, currentLine);

        //cout << currentLine << "\n";

        recordList.push_back(currentRecord);
        cout << "adsfasdf\n";
    }


    return 0; //NORMAL termination (return 0 by convention) 
}
