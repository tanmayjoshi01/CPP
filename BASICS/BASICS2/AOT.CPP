#include <iostream>
using namespace std;

int main()
{
    int b, h;
    float area;

    cout << "Enter base and height of triangle: ";
    cin >> b >> h;

    area = (float)b * h / 2;

    cout << "Area = " << area << endl;

    return 0;
}