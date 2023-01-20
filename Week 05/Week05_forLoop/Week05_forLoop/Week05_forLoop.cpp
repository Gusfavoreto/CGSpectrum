
#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a number";
    int number;
    cin >> number;

    for (int i = 0; i < number; i++);
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }

    }
    cout << endl;
}
