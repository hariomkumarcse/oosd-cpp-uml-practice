#include <iostream>

template <typename T>
T maximum(T a, T b)
{
	return (a > b) ? a : b;
}

int main()
{
	std::cout << maximum(10,20) << std::endl;
	std::cout << maximum(10.5, 8.2) << std::endl;

	return 0;
}