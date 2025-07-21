#include <iostream>
using namespace std;
int main()
{     
    int n;
    cout<<"Enter the no of lines :";
    cin>>n;

    char ch='A'; //declare outside due to avoid reset value of num;
     
    for(int i=0;i<n;i++ )   //decide how many lines will print
    {   
        
        for(int j=0;j<i+1;j++)   //inner loop start then lines printing start
        {
               
        cout << ch <<" ";    
            
        }
        ch++;   //writing outside to avoid the incrementation in inner loop
        cout<<endl;
    
    }

    return 0;
}