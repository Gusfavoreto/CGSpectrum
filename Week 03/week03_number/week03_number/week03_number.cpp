
#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Please enter a number: ";
    cin >> number;

    if (number > 0)
    {
        cout << "The number you entered is positive" << endl;
    }
    if (number < 0)
    {
        cout << "The number you entered is negative" << endl;
    }
    if (number == 0)
    {
        cout << "The number you entered is zero" << endl;
    }
    bool isEven = (number % 2) == 0;
    if (isEven == true)
    {
        cout << "The number is even" << endl;   
    }
    if (isEven == false)
    {
        cout << "The number is odd" << endl;
    }

}

