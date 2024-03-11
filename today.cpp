#include<iostream>
using namespace std;
int main()
{
    int j;
    string k;

    cin>>k;
    int size=k.length();

    for(j=size;j>=0;j--)
    {
        cout<<k[j];
    }
}