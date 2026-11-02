#include<stdio.h>
int main(void)
{
	int number = 50;

	int *pointer = &number;

	printf("Original Value: %d\n", number);
	printf("Address of Number: %p\n", (void*)&number);
	printf("Pointer Value: %p\n", (void*)pointer);
	printf("Value Using Pointer: %d\n", *pointer);

	*pointer = 100;

	printf("\nAfter Modification:\n");
	printf("Update Value: %d\n", number);

	return 0;
}