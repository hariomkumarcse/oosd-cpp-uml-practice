#include <stdio.h>

int main(void)
{
	int firstNumber;
	int secondNumber;

	printf("Enter first number: ");
	scanf("%d", &firstNumber);

	printf("Enter second number: ");
	scanf("%d", &secondNumber);

	printf("Sum: %d\n", firstNumber + secondNumber);

	return 0;
}