#include <iostream>
using namespace std;
int main()
{
    float SI;
    float p,r,t;

    cout<<"\nEnter the principal amount:";
    cin>>p;
    cout<<"\nEnter the intrest rate:";
    cin>>r;
    cout<<"Enter time in years:";
    cin>>t;

    SI=p*r*t;

    cout<<"\nThe Simple Intrest is :"<<SI;

    return 0;
}