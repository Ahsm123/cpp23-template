#include "calculator.h"
#include <iostream>

int doubleNumber(int x)
{
    return x * 2;
}

int getUserInput()
{
    std::cout << "Enter first number: " << '\n';
    int input{};
    std::cin >> input;

    return input;
}
