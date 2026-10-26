#include <stdio.h>

int calculateTotal(int math, int science, int english)
{
	return math + science + english;
}

int main(void)
{
	int math = 85;
	int science = 90;
	int english  = 80;

	int total = calculateTotal(math, science, english);

	printf("Student Marks - C\n");
	printf("Math: %d\n", math);
	printf("Science: %d\n", science);
	printf("English: %d\n", english);
	printf("Total Marks: %d\n", total);

	return 0;
}