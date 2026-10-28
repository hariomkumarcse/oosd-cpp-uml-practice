#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int age = 20;
	float height = 5.8f;
	double salary = 25000.50;
	char grade = 'A';
	bool isStudent = true;

	printf("Age: %d\n", age);
	printf("Height: %.2f\n", height);
	printf("Salary: %.2f\n", salary);
	printf("Grade: %c\n", grade);
	printf("Is Student: %d\n", isStudent);

	printf("Size of int: %zu bytes\n", sizeof(int));
	printf("Size of double: %zu bytes\n", sizeof(double));

	return 0;
}