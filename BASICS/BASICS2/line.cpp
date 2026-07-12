#include<cmath>
#include<iostream>
using namespace std;

int main()
{
float  x1, y1, x2, y2;


    float dist;
    cout<<"Enter coordinates of four points";
    cin>>x1>>y1>>x2>>y2;
    
    dist=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    cout<<"Distance between two points is"<<dist<<endl;
    return dist;
}
