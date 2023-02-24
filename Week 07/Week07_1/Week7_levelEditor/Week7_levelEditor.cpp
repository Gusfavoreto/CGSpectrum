
#include <iostream>

using namespace std;

void GetLevelDimensions(int& width, int& height);

int main()
{
    int levelWidth;
    int levelHeight;

    GetLevelDimensions(levelHeight, levelHeight);

    char* pLevel = new char[levelWidth * levelHeight];




    delete[] pLevel;
    pLevel = nullptr;



}
void GetLevelDimensions(int& width, int& height)
{
    cout << "Enter the width of your level: ";
    cin >> width;

    cout << " Enter the height of your level: ";
    cin >> height;

}