/*#include<iostream>
using namespace std;

int main()
{
    int n,i;
    int sum=0;

    cout<<"Enter a number";
    cin>>n;

    for (int i=1;i<=n;i++)
   { if (n%2==0)
    {
       
        sum=sum+i;
    }
}
    
if (sum==2*n)
    cout<<"Perfect number";

    cout<<"Not a Perfect number";
    return 0;
}*/
//Above code is wrong keep for future reference


#include<iostream>
using namespace std;

int main()
{
    int n, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    for(int i = 1; i < n; i++)
    {
        if(n % i == 0)
        {
            sum = sum + i;
        }
    }

    if(sum == n)
        cout << "Perfect Number";
    else
        cout << "Not a Perfect Number";

    return 0;
}

