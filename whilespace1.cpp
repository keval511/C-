#include<iostream>
using namespace std;
int main()
{
    int i=1,j,k=10,space;
    while(i<=4)
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
        i++;
        cout<<"\n";
        
    }
}