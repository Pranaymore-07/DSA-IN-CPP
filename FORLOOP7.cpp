#include <iostream>
using namespace std;
int main()
{     
    int n;
    cout<<"Enter the no of lines :";
    cin>>n;

    int num=1;   

    for(int i=0;i<n;i++ )   //decide how many lines will print
    {   
        
        for(int j=i+1;j>0;j--)   //inner loop start then lines printing start
        {
               
        cout << num <<" ";
            num++;
            
        }
        cout<<endl;
    
    }

    return 0;
}