#include<iostream>
using namespace std;
int main()
{
    int i,j,k=10;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout <<k<<"\t";
            k--;
        }
        cout<<"\n";
    }
}