#include<iostream>
using namespace std;
int main()
{
    int i;
    string j;

    cin>>j;
    i=j.length();
    
    for(int k=i;k>=0;k--)
    {
        cout<<j[k];
    }
}