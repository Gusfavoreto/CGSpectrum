

#include <iostream>
using namespace std;

class Circle {
public:
   int radius;
   double Area() {
       return 3.141 * radius * radius;
   }
};

class Rectangle {
public:
    int height;
    int width;
    int area() {
        return height * width;
    }

};


int main()
{
    int shape;
    cout << "Enter 1 for Circle or 2 for Rectangle: ";
    cin >> shape;

    if (shape == 1)
    {

    }
}
