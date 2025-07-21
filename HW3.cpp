#include <iostream>
using namespace std;
int main()
{
    int i,n,f;

    cout<<"\nEnter the number for Factorial:";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        f=i*n;
    }

    cout<<"The factorial is :"<<f;

    return 0;
}