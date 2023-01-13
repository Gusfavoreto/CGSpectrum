
#include <iostream>
using namespace std;

// function declaration
void PrintMessage(string message);
int Add(int number1, int number2);

int main()
{
    //function calls
    PrintMessage("Testing Add");
    int r = Add(1, 2);
    cout << " 1 + 2 = " << r << endl;
}


// function definition
void PrintMessage(string message)
{
    cout << message << endl;
}

int Add(int number1, int number2)
{
    return number1 + number2;
}