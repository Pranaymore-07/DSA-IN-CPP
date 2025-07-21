#include <iostream>
using namespace std;
int main()
{     
    int n;
    cout<<"Enter the no of lines :";
    cin>>n;

    
     //upper part;

    for(int i=0;i<n;i++ )   //decide how many lines will print
    {   
        //spaces1
        for(int j=0;j<(n-i-1);j++)
        {
            cout << " ";
        }

          cout<<"*";

          //number1 : odd spaces 
        if(i!=0) {
        
       for(int j=0;j<(2*i-1);j++)
        {
            cout << " ";
        }
         
        cout<<"*";
    } 

        cout<<endl;
    }

    //bottom part

    for(int i=0;i<n-1;i++ )  
    {   
    //spaces
    for(int j=0;j<(i+1);j++)
        {
            cout << " ";
        }
 
          cout<<"*";

    if(i!=n-2) {
        //spaces
        for(int j=0; j<(2*(n-i)-5);j++) {

            cout << " ";
        }
     
        cout <<"*";
    }
    cout<<endl;

    }

    return 0;
}