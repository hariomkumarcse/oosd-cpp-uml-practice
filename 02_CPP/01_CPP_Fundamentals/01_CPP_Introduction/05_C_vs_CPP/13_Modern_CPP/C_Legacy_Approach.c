#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
	char name[50];
	int age;
	float marks;
};

void displayStudent(const struct Student *student)
{
	printf("\nStudent Information\n");
	printf("Name: %s\n", student->name);
	printf("Age: %d\n", student->age);
	printf("Marks: %.2f\n", student->marks);
}

int main(void)
{
	int *numbers = (int *) malloc(3 * sizeof(int));

	if(numbers == NULL)
	{
		printf("Memory allocation failed.\n");
		return 1;
	}

	numbers[0] = 10;
	numbers[1] = 20;
	numbers[2] = 30;

	printf("C Legacy Approach\n");
	printf("Array Elements: ");

	for(int i = 0; i<3; i++)
	{
		printf("%d ", numbers[i]);
	}

	struct Student student;

	strcpy(student.name, "Hariom");
	student.age = 20;
	student.marks = 88.5f;

	displayStudent(&student);

	free(numbers);
	numbers = NULL;

	printf("\nMemory released successfully.\n");

	return 0;
}