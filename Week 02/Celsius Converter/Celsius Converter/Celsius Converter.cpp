#include <iostream>

using namespace std;

int main()
{
  // Prompt user to enter temp in celsius
	cout << "Please enter a temperature in celsius: ";

	// Get temperature
	float celsius;
	cin >> celsius;

	// convert the temp to fahrenheit
	float fahrenheit = (celsius * 9.0f) / 5.0f + 32;

	// display the temp
	cout << celsius << " celsius in fahrenheit is " << fahrenheit << endl;
}


