
#include <iostream>
using namespace std;

int main()
{
   
	int number;

	

	do
	{
		cout << "Enter a number: ";
		cin >> number;

		if (cin.fail())
		{
			cin.clear();
			cin.ignore(99, '\n');
			cout << "That is not a number!" << endl;
		}
		else
		{
			break;
		}

	} while (true);
}

