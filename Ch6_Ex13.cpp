// Ch6_Ex13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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