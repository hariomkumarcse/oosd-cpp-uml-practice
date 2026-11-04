#include <stdio.h>

int addInteger(int a, int b)
{
	return a+b;
}

double addDoubles(double a, double b)
{
	return a+b;
}

int main(void)
{
	int integerResult = addInteger(10, 20);
	double decimalResult = addDoubles(5.5, 2.5);

	printf("Integer Addition: %d\n", integerResult);
	printf("Decimal Addition: %2.f\n", decimalResult);

	printf("\nC uses different function names here.\n");

	return 0;
}