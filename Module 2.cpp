// Module 2.cpp : This is an exercise from a textbook. This was to create a method of knowing an end of month balance.
//Allows the input of beginning month balance, total deposits, and withdrawls. 

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

