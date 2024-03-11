#include<iostream>
using namespace std;
int main()
{
    int i,j;

    for(i=2;i<=10;i++)
    {
        for(j=2;j<=i;j++)
        {
            cout<<j;
            j++;
        }
        cout<<"\n";
        
        
    }
}