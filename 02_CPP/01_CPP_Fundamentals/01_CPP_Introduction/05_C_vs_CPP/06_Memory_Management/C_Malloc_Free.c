#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int size;

	printf("Enter number of elements: ");
	if(scanf("%d", &size) != 1 || size <= 0)
	{
		printf("Invalid size.\n");
		return 1;
	}

	int *numbers = (int *)malloc((size_t)size * sizeof(int));

	if(numbers == NULL)
	{
		printf("Memory allocation failed.\n");
		return 1;
	}

	for(int i=0; i<size; i++)
	{
		printf("Enter element %d: ", i+1);
		if(scanf("%d", &numbers[i]) != 1)
		{
			printf("Invalid input.\n");
			while(getchar() != '\n');
			free(numbers);
			return 1;
		}
	}

	printf("\nArray Elements:\n");

	for(int i=0; i<size; i++)
	{
		printf("%d ", numbers[i]);
	}

	printf("\n");

	free(numbers);
	numbers = NULL;

	printf("Memory released successfully.\n");

	return 0;
}