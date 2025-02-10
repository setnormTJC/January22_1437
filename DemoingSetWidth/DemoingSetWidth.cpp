#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main()
{
	cout << left << setw(16) << "First Name" << setw(16) << "Last Name" << setw(16) << "Age |" << endl;
	cout << "------------------------------------|" << endl;
	cout << left << setw(16) << "Gaby" << setw(16) << "Saboia" << setw(16) << "17  |" << endl;
	cout << left << setw(16) << "Lidia" << setw(16) << "Bonilla" << setw(16) << "19  |" << endl;
	cout << left << setw(16) << "Billie" << setw(16) << "Eilish" << setw(16) << "22  |" << endl;

	return 0;
}