#include<iostream>
using namespace std;
int main(){
    int i,j,k=2,l;
    for(i=1;i<=3;i++)
    {
        for(l=3;l>=i;l--)
        {
            cout<<"*";
        }
        for(j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<"\n";
    }

}

// 1
// 11
// 111
// 1111

// 1
// 12
// 123
// 1234

// 1
// 22
// 333
// 4444

// 1
// 23
// 456
// 78910

   