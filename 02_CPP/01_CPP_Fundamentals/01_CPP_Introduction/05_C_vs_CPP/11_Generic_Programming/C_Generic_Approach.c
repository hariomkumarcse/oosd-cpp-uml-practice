#include <stdio.h>

void printInteger(const void *value)
{
	printf("Integer: %d\n", *(const int *)value);
}

void printDouble(const void *value)
{
	printf("Double %.2f\n", *(const double *)value);
}

void printCharacter(const void *value)
{
	printf("Character: %c\n", *(const char *)value);
}

int main(void)
{
	int number = 100;
	double decimal = 25.75;
	char character = 'A';

	printInteger(&number);
	printDouble(&decimal);
	printCharacter(&character);

	return 0;
}