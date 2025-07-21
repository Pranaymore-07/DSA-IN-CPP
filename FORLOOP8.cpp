#include <iostream>
using namespace std;
int main()
{     
    int n;
    cout<<"Enter the no of lines :";
    cin>>n;

    
     
    for(int i=0;i<n;i++ )   //decide how many lines will print
    {   
        //space
        for(int j=0;j<i;j++)
        {
            cout << " ";
        }
      
        //number
        for(int j=0;j<(n-i);j++)
        {
            cout<<(i+1);

        }

        cout<<endl;
    }

    return 0;
}