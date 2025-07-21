#include <iostream>
using namespace std;
int main()
{     
    int n;
    cout<<"Enter the no of lines :";
    cin>>n;
     
    for(int i=1;i<=n;i++ )   //decide how many lines will print
    {   
        char ch='A';

        for(int j=1;j<=n;j++)   //inner loop start then lines printing start
        {
             cout<<ch;
             ch = ch+1;    //using typeconversion the A=65 when increase it become 66 so B will print       
        }
       
        cout<<endl;
    }
    return 0;
}