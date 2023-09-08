// Module 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    //declare variables
    double beginBalance = 0.0;
    double deposits = 0.0;
    double withdrawals = 0.0;
    double endDeposits = 0.0;
    double endBalance = 0.0;

    //enter input items
    std::cout << "Enter beginning balance: ";
    std::cin >> beginBalance;
    std::cout << "Enter deposits: ";
    std::cin >> deposits;
    std::cout << "Enter withdrawals: ";
    std::cin >> withdrawals;

    //calculate end of month balance
    endDeposits = beginBalance + deposits;
    endBalance = endDeposits - withdrawals;

    //display output item
    std::cout << "End of month balance: $" << endBalance;
} //end of main function

