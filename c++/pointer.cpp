#include<iostream>
using namespace std;
int main()
{
    int a=20,b,c;

    cout << a;
    cout<<"\n";

    cout << &a;

    int *z=&a;


    cout<<"\n"<<z;

    cout<<"\n"<<*z;
}