#include<iostream>
using namespace std;
int main()
{
    string a[2][3][2]={{{"1","3"},{"b","a"},{"2","c"}},{{"5","4"},{"6","d"},{"f","e"}}};

    cout<<a[0][0][0]<<"\n";
    cout<<a[0][2][0]<<"\n";
    cout<<a[0][0][1]<<"\n";

    cout<<a[1][0][1]<<"\n";
    cout<<a[1][0][0]<<"\n";
    cout<<a[1][1][0]<<"\n";

    cout<<a[0][1][1]<<"\n";
    cout<<a[0][1][0]<<"\n";
    cout<<a[0][2][1]<<"\n";

    cout<<a[1][1][1]<<"\n";
    cout<<a[1][2][1]<<"\n";
    cout<<a[1][2][0]<<"\n";
    
}