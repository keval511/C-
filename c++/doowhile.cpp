#include<iostream>
using namespace std;
int main()
{
    int  i,j=10,k=10;
    do{
        for(i=10;;i<=j;i--)
        {
            cout<<k;
            k--;
        }j--;
        cout<<"\n";
        
    }while(j<=4);
}