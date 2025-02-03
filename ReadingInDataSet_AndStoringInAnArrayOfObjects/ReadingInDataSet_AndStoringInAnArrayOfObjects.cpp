// ReadingInDataSet_AndStoringInAnArrayOfObjects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> //input output stream
#include<fstream> 

#include<string> //for `getline` function

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
    int PostsPerDay;
    int LikesPerPost;
    int CommentsPerPost;
    int SharesPerPost;
};

struct Person
{
    int age; 
    double weight; 
};

int main()
{
    //how to read data from an input file?
    //like this: !
    ifstream fin{"someTextFile.txt"}; //fin is analogous to cin (character input from keyboard) -> file input


    //check if the input file was found (before WASTING any time going further in this program)
    if (! fin.is_open())

    {
        //"early return" 
        cout << " File was NOT found! : (\n";
        return -1; 
    }

    //read in the data of the file: 
    //string firstWordFromFile; 

    //fin >> firstWordFromFile; 
    string currentLine; 

    //cout << "The first (and ONLY the first) word from that file is: " << firstWordFromFile << "\n";
    while (!fin.eof()) //EOF -> End Of File
    {
        std::getline(fin, currentLine);
        cout << currentLine << "\n";
    }

    fin.close(); 



    //demo getline for text and ints (and other data types) 

    return 0; //NORMAL termination (return 0 by convention) 
}
