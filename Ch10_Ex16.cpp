// Ch10_Ex16.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Checking gross pay for hours worked in 2 weeks.
// 80 hours is considered the regular hours with regular pay 
// Time and a half (1.5) is applied to hours over 80
// There is a "double time" function included that was part of a math problem for class, it can be ignored

#include <iostream>
#include <iomanip>
using namespace std;

//function prototypes 
void getReg(int hours, double pay, double& total);
void getHalf(int hours, double pay, double& total);
void getDouble(int hours, double pay, double& total);

//start main function
int main()
{
	//declaring variables 
	int hours = 0;
	double pay = 0.0;
	double total = 0.0;

	//ask for hours worked
	cout << "Enter hours worked (-1 to cancel): ";
	cin >> hours; 

	//start loop
	while (hours != -1)
	{

		cout << "Enter hourly wage: $";
		cin >> pay; 

		total = hours * pay;

		if (hours > 0 && hours <= 80)
		{
			getReg(hours, pay, total);
			cout << "Total gross pay is: $" << total <<endl <<endl;
		}

		else if (hours > 80)
		{
			getHalf(hours, pay, total); 
			cout << "Total gross pay is: $" << total << endl << endl;
		}
		//repeat the process 
		cout << "Enter hours worked (-1 to cancel): ";
		cin >> hours;
	}

}

//function definitions 

void getReg(int hours, double pay, double& total)
{
	total = hours * pay;
}
void getHalf(int hours, double pay, double& total)
{
	total = (hours - 80) * (pay * 1.5);
	total = total + 80 * pay; 
}
void getDouble(int hours, double pay, double& total)
{
	total = (hours - 50) * (pay * 2);
	total = 13 * (pay * 1.5) + total;
	total = 37 * pay + total;
}

