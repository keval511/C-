#include<iostream>
using namespace std;
int main()
{
    int a;
    int b[10]={1,2,3,4,5,6,7,8,9,10};

    for(a=9;a>=0;a--)
    {
        cout<<b[a];
    }
}