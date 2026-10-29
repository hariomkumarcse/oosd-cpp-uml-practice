#include <stdio.h>

int calculateSquare(int number)
{
	return number * number;
}

int main(void)
{
	int number = 7;
	int result = calculateSquare(number);

	printf("Number: %d\n", number);
	printf("Square: %d\n", result);

	return 0;
}