#include <stdio.h>
#include <errno.h>

int divideNumbers(int a, int b, int *result)
{
	if(b==0)
	{
		errno = EDOM;
		return 0;
	}

	*result = a/b;
	return 1;
}

int main(void)
{
	int firstNumber = 20;
	int secondNumber = 10;
	int result;

	if(divideNumbers(firstNumber, secondNumber, &result))
	{
		printf("Result: %d\n", result);
	}

	else
	{
		perror("Division Error");
		printf("Cannot divide by zero.\n");
	}

	return 0;
}