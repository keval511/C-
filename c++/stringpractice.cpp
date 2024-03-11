#include<iostream>
using namespace std;
int main()
{
    int i,j,k;
    string p;

    cin>>p;
    j=p.length();
    cout << j<<"\n";
    for(i=j;i>=0;i--)
    {
        cout<<p[i];
    }
}