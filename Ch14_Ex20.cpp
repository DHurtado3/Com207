// Ch14_Ex20.cpp : Create a program that saves prices in a sequential access file. 
// Save the prices in fixed-point notation with two decimal places. 
// Name the sequential access file Introductory20.txt and open the file for append. 
// Use a negative number as the sentinel value. Save and then run the program. 
// Enter the following prices and sentinel value: 10.50, 15.99, and –1. Now, run the program again. 
// This time, enter the following prices and sentinel value: 20, 76.54, 17.34, and –1. 
// Open the Introductory20.txt file in a text editor. The file should contain five prices, with each price appearing on a separate line in the file. 
// Close the Introductory20.txt file.

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("Introductory20.txt", ios::app);

    double price;

    cout << "Enter price: $ ";
    cin >> price;

    //using a negatie number as the sentinel value 
    while (price >= 0)
    {
        fout << fixed << setprecision(2) << price << endl;
        cin >> price; 
    }

    fout.close(); 
    cout << endl;
}


