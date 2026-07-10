#include<iostream>
using namespace std;

int main()
{
float radius, height;

    float volume;
    cout<<"Enter radius and height of cylinder";
    cin>>radius>>height;
    
    volume=(float)3.14*radius*radius*height;//Write expression here
    cout<<"Volume of cylinder is"<<volume<<endl;
    return volume;
}