#include <stdio.h>

struct Student
{
	char name[50];
	int rollNumber;
	float marks;
};

int main(void)
{
	struct Student student = {"Hariom", 101, 88.5f};

	printf("Student Information\n");
	printf("Name: %s\n", student.name);
	printf("Roll Number: %d\n", student.rollNumber);
	printf("Marks: %.2f\n", student.marks);

	return 0;
}