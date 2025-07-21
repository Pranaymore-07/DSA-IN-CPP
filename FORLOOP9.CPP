#include <iostream>
using namespace std;
int main()
{     
    int n;
    cout<<"Enter the no of lines :";
    cin>>n;
  
    char ch='A';
    
     
    for(int i=0;i<n;i++ )   //decide how many lines will print
    {   
        //space
        for(int j=0;j<i;j++)
        {
            cout << " ";
        }
      
       //charecter
        for(int j=0;j<(n-i);j++)
        {    

               cout<<(ch);
              
        }
         ch++;

        cout<<endl;
    }

    return 0;
}