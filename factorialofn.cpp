/*include<iostream>
using namespace std;

int main()
{
    int n,i;
    int fact=1;
{

    cout<<"Enter a number";
    cin>>n;
    for(i=0;i<=n;i++)
    {
        fact=fact*i;
    }

cout<<fact;
return 0;
}*/

#include<iostream>
using namespace std;

int n,i;  //declared before the scope of main function
int fact=1; //used tostore the start value of factorial
int main()
{
    cout<<"Enter a number";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<fact;
    return 0;
}