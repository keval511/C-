#include<iostream>
using namespace std;
int main()
{
    int i,j,k=10,space;
    for(i=1;i<=4;i++)
    {
        for(space=4;space>=i;space--)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
                cout<<k;
                k--;
                
        }
        cout<<"\n";
    }
}