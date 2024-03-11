#include<iostream>
using namespace std;
int main()
{
    int i=1,j,k;

    while(i<=6)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<"\n";
        i++;
    }
}