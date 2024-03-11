#include<iostream>
using namespace std;
int main()
{
    int i,j,k;
    char a='!',b='@';
    for(i=1;i<=5;i++)
    {
        
        for(j=1;j<=i;j++)
        {
            if(j%2==0)
            {
                cout<<a;
            }
         cout<<j;
        }
           
        cout<<"\n";
    }
}