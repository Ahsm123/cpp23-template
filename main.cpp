#include "io.h"

int readNumber();
void writeAnser(int x);

int main()
{
	int firstNumber { readNumber() };
	int secondNumber { readNumber() };
	writeAnser(firstNumber+secondNumber);

	return 0;
}


