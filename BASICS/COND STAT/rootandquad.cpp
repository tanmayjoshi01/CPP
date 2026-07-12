#include<iostream>
#include<cmath>
using namespace std;

int main()    
   {

    float a,b,c;
    float d,r1,r2;
    cout<<"enter a,b,c";
    cin>>a>>b>>c;
    
    d=b*b-4*a*c;
    
    if(d==0)
    {
        r1=-b/(2*a);
        cout<<"real and equal "<<r1;
    }
    else
    {
        if(d>0)
        {
            r1=(-b+sqrt(d))/(2*a);
            r2=(-b-sqrt(d))/(2*a);
            cout<<"real and unequal "<<r1<<" "<<r2;
        }
        else
        {
            cout<<"imaginary";
        }
    }
    return 0;
}