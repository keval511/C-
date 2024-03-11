#include<iostream>
using namespace std;
int main()
{
    int i,j=1,k=2;

    do
    {
       for(i=1;i<=j;i++)
       {
        cout<<k;
       }
       j++;
       cout<<"\n";
    }while(j<=5);
}