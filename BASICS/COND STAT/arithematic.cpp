#include<iostream>

using namespace std;

int main()
{
int x,y,choice;
cout<<"enter two numbers";
cin>>x>>y;
cout<<"1.addition 2.subtraction 3.multiplication 4.division";
cin>>choice;

 switch(choice)
    {
        case 1: cout<<x+y;
            break;
        case 2: cout<<x-y;
            break;
        case 3: cout<<x*y;
            break;
        case 4: cout<<x/y;
            break;
    }
    return 0;
}

