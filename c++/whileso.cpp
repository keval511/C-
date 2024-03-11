#include<iostream>
using namespace std;
int main()
{
    int i,j=1,k=10;
    do
    {
        for(i=1;i<=j;i++)
        {
        cout<<k--;
        } 
        cout<<"\n";
        j++;
  }  
  while (j<=4);
}

// 54321
// 5432
// 543
// 54
// 5