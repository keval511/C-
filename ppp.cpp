#include<iostream>
using namespace std;
int main()
{
int i,j,k=12;

for(j=8;j>=2;j=j-2)
{
    for(i=2;i<=j;i=i+2)
    {
        k=k-2;
        cout<<k;
        cout<<" ";
    }
    
    cout<<"\n";  
    
}
}