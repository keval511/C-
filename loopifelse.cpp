#include<iostream>
using namespace std;
int main()
{
    int i,j,k;
    for(i=10;i>=7;i--)
    {
        for(j=7;j<=10;j++)
        {
            if(j>=i)
            {
                cout<<j;
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}