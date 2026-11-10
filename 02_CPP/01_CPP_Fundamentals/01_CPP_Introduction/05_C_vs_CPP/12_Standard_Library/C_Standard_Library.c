#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void)
{
	printf("C Standard Library Demonstration\n\n");

	char firstName[30] = "Hariom";
	char lastName[] = " Kumar";

	strcat(firstName, lastName);

	printf("Full Name: %s\n", firstName);
	printf("Name Length: %zu\n", strlen(firstName));

	printf("Square Root of 64: %.2f\n", sqrt(64.0));
	printf("Power of 2^5: %.2f\n", pow(2.0, 5.0));

	int number = 100;
	char numberText[20];

	snprintf(numberText, sizeof(numberText), "%d", number);

	printf("Number as String: %s\n", numberText);
	printf("Absolute Value: %d\n", abs(-50));

	return 0;
}