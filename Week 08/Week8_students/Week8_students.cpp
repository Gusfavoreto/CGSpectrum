

#include <iostream>
using namespace std;

float GetAverage(float theArray[], int size);


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
    float result = GetAverage(aptr, students);
    
    cout << result;

        

    cout << endl;
    delete [] aptr;



}

float GetAverage(float theArray[], int size)
{
	float sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += theArray[i];
	}
	return sum / size;
}