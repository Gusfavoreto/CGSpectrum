

#include <iostream>
using namespace std;



int main()
{
    float myGrades[5] = { 90.5f, 56.5f, 60.6f, 95.5f, 59.9f };

    //Calculate Average
    float sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += myGrades[i];
    }
    float average = sum / 5;
    
    cout << "My Grades for the Fall semester are: ";
    for (int i = 0; i < 5; i++)
    {
        cout << myGrades[i] << " ";
    }
    cout << endl;
    cout << "Average grade is: " << average << endl;
}
