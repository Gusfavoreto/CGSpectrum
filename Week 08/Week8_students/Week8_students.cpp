

#include <iostream>
using namespace std;




int main()
{
    
    int students; //int static allocated
    float* aptr; //int pointer to aptr

    // asking the teacher how many students.
    cout << "How many students do you have: ";
    cin >> students;

    aptr = new float[students]; // create new array for students, but doesn't allow int

    //need populate the array with the grades
    for (int i = 0; i < students; i++)
    {
        cout << "Enter the grades of the students " << i << ":";
        cin >> aptr[i]; // saves the input to the aptr pointer
    }

  

cout << endl;
delete [] aptr;



}

