#include<iostream>
using namespace std;
int main()
{
    int i=1,j,k,space;
    while(i<=5)
    {
        for(space=4;space>=i;space--)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
        i++;
    }
}