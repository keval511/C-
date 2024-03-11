#include<iostream>
using namespace std;
int main()
{
    int a[2][3][2]={ {{3,5},{4,2},{1,6}},{{9,11},{10,8},{7,12}} };

    cout<<a[0][2][0]<<"\n";
    cout<<a[0][1][1]<<"\n";
    cout<<a[0][0][0]<<"\n";
    cout<<a[0][1][0]<<"\n";
    cout<<a[0][0][1]<<"\n";
    cout<<a[0][2][1]<<"\n";
     cout<<a[1][2][0]<<"\n";
      cout<<a[1][1][1]<<"\n";
     cout<<a[1][0][0]<<"\n";
     cout<<a[1][1][0]<<"\n";
      cout<<a[1][0][1]<<"\n";
       cout<<a[1][2][1]<<"\n";
}