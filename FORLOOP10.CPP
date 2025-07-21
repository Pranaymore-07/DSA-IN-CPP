#include <iostream>
using namespace std;
int main()
{     
    int n;
    cout<<"Enter the no of lines :";
    cin>>n;

    
     
    for(int i=0;i<n;i++ )   //decide how many lines will print
    {   
        //spaces1
        for(int j=0;j<(n-i-1);j++)
        {
            cout << " ";
        }
      
        //number1 :i+1
        for(int j=1;j<=(i+1);j++)
        {
            cout<<j;

        }

        //numbers2
       for(int j=i;j>=1;j--)
        {
            cout<<j;    
        }

        cout<<endl;
    }

    return 0;
}