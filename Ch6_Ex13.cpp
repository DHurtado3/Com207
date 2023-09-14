// Ch6_Ex13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Karlton Learning wants a program that displays the amount of money a company owes for a seminar. The fee per person is based on the number of people the company registers, as shown in Figure 6-42. For example, if the company registers seven people, then the total amount owed is $700. If the user enters a number that is less than or equal to 0, the program should display an appropriate error message. Fee per person (1-5 people = $125 per person. 6-20 people = $100 per person. 21+ = $75 per person.

#include <iostream>

int main()
{
	//declaring variables 
	int people = 0;
	int cost = 0;

	std::cout << "Number of people registering: ";
	std::cin >> people;

	if (people >= 1 && people <= 5)
	{
		cost = people * 125;
		std::cout << "Amount owed:$ " << cost;
	}
	else if (people >= 6 && people <= 20)
	{
		cost = people * 100;
		std::cout << "Amount owed:$ " << cost;
	}
	else if (people >= 21)
	{
		cost = people * 100;
		std::cout << "Amount owed:$ " << cost;
	}
	else
		std::cout << "Invalid option";
}
