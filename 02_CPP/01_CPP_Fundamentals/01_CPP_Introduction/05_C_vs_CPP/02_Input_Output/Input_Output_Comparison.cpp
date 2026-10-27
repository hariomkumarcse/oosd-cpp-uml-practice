#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int number = 25;

	printf("Using printf(): %d\n", number);

	cout<<"Using cout: "<<number<<endl;

	int input1, input2;

	printf("Enter two integers: ");
	scanf("%d %d", &input1, &input2);

	cout<<"Sum using cout: "<<input1 + input2<<endl;

	return 0;
}