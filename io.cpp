#include "io.h"
#include <iostream>

int readNumber()
{
	std::cout << "Enter a number to add: " << '\n';
	int input{};
	std::cin >> input;
	return input;
}

void writeAnser(int output)
{
	std::cout << "Answer is: " << output << '\n';
}
