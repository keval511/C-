#include<iostream>
using namespace std;
int main()
{
    int i,j=1,k;

    do
    {
        for(i=5;i>=j;i--)
        {
            cout<<i;
        }
        cout<<"\n";
        j++;
      }    while(j<=4); 
}