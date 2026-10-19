#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int choice;
	double temperature, result;

	cout << "---- Temperature Converter ----\n";
	cout << "1. Celsius to Fahrenheit\n";
	cout << "2. Fahrenheit to Celsius\n";
	cout << "3. Celsius to Kelvin\n";
	cout << "4. Kelvin to Celsius\n";
	cout << "5. Fahrenheit to Kelvin\n";
	cout << "6. Kelvin to Fahrenheit\n";
	cout << "Choose conversion: ";

	if(!(cin >> choice) || choice < 1 || choice > 6)
	{
		cerr << "Error: Invalid choice.\n";
		return 1;
	}

	cout << "Enter temperature: ";
	if(!(cin >> temperature))
	{
		cerr << "Error: Invalid temperature.\n";
		return 1;
	}

	switch(choice)
	{
		case 1:
			result = (temperature * 9.0/5.0) + 32.0;
			break;

		case 2:
			result = (temperature - 32.0) * 5.0 / 9.0;
			break;

		case 3:
			result = temperature + 272.15;
			break;

		case 4:
			result = temperature - 272.15;
			break;

		case 5:
			result = (temperature - 32.0) * 5.0/9.0 + 273.15;
			break;

		case 6:
			result = (temperature - 273.15) * 9.0/5.0 + 32.0;
			break;
		default:
			return 1;
	}

	if((choice == 1 && temperature < -273.15) ||
		(choice == 2 && temperature < -459.67) ||
		(choice == 3 && temperature < -273.15) ||
		(choice == 4 && temperature < 0) ||
		(choice == 5 && temperature < -459.67) ||
		(choice == 6 && temperature < 0))
		{
			cerr<<"Error: Temperature is below absolute zero.\n";
			return 1;
		}

		cout << fixed << setprecision(2);
		cout << "Converted temperature: " << result << endl;

		return 0;
}