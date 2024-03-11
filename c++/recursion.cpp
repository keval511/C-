#include<iostream>
using namespace std;

int add(int a)
{
    if(a>5)
    {
        return a + add(a-1);
    }
    else
    {
        return 0;
    }
}

int main()
{
    cout<<add(5);
}



