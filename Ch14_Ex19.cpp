// Ch14_Ex19.cpp : Create a program that saves a company’s payroll amounts in a sequential access file. 
// Save the amounts in fixed-point notation with two decimal places. 
// Name the sequential access file Introductory19.txt and open the file for append. Use a negative number as the sentinel value. 
// Save and then run the program. Enter the following payroll amounts and sentinel value: 45678.99, 67000.56, and –1. Now, run the program again. 
// This time, enter the following payroll amounts and sentinel value: 25000.89, 35600.55, and –1. 
// Open the Introductory19.txt file in a text editor. The file should contain four payroll amounts, with each amount appearing on a separate line in the file. 
// Close the Introductory19.txt file.

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;


int main()
{
	ofstream fout;
	fout.open("Introductory19.txt", ios::app);

	double value;

	cout << "Enter the payroll amounts (negative for stop): " << endl;
	cin >> value;

	// use a negative number as the sentinel value //
	while (value >= 0)
	{
		// save the amounts in fixed-point notation with two decimal places //
		fout << setprecision(2) << setw(10) << fixed << value << endl;

		cin >> value;
	}


	fout.close();

	cout << endl;
	return 0;
}

