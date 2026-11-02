#include <iostream>
using namespace std;

int main()
{
	int size;

	cout <<"Enter number of elements: ";

	if(!(cin >> size) || size <= 0)
	{
		cout<<"Invalid size.\n";
		return 1;
	}

	int* numbers = new int[size];

	for(int i=0; i<size; i++)
	{
		cout<<"Enter element: "<<i+1<<":";

		if(!(cin >> numbers[i]))
		{
			cout << "Invalid input.\n";
			//while(getchar() != '\n');
			delete[] numbers;
			return 1;
		}
	}

	cout<<"\nArray Elements:\n";

	for(int i = 0; i<size; i++)
	{
		cout << numbers[i] << " ";
	}

	cout<<'\n';

	delete[] numbers;
	numbers = nullptr;

	cout<<"Memory released successfully.\n";

	return 0;
}