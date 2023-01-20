
#include <iostream>
using namespace std;

//functions declarations
void AnalyzeNumber(int number, bool& isEven, bool& isOdd, bool& isZero, bool& isPositive, bool& isNegative);


int main()
{
    //function calls
    int number = -21;
    bool isEven = false;
    bool isOdd = false;
    bool isPositive = false;
    bool isNegative = false;
    bool isZero = false;

    AnalyzeNumber(number, isEven, isOdd, isZero, isPositive, isNegative);

    cout << "Analyzing number: " << number << endl;
    if (isOdd)
    {
        cout << "The number is odd!" << endl;
    }
    if (isEven)
    {
        cout << "The number is even!" << endl;
    }
    if (isZero)
    {
        cout << "The number is zero!" << endl; 
    }
    if (isPositive)
    {
        cout << "The number is Positive!" << endl;
    }
    if (isNegative)
    {
        cout << "The number is negative!" << endl;
    }
}


// Function definition

void AnalyzeNumber(int number, bool& isEven, bool& isOdd,  bool& isZero, bool& isPositive, bool& isNegative)
{
    if(number % 2 == 0)
    {
        isEven = true;
        isOdd = false;
    }
    else
    {
        isOdd = true;
        isEven = false;
    }

    if (number > 0)
    {
        isPositive = true;
        isNegative = false;
        isZero = false;
    }
    else if (number < 0)
    {
        isPositive = false;
        isNegative = true;
        isZero = false;
    }
    else
    {
        isZero = true;
        isPositive = false;
        isNegative = false;
    }
}