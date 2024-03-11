#include<iostream>
using namspace std;
int main()
{
    int marks;
    cout<<"enter your marks";
    cin>>marks;

    if(marks<100)
    {
        cout<<"a+ grade";
    }
    else if(marks<90)
    {
        cout<<"a grade";
    }
    else if(marks<70)
    {
        cout<<"b grade";
    }
    else if (marks<50)
    {
        cout<<"c grade";
    }
    else if(marks>40)
    {
        cout<<"d grade";
    }
    else
    {
        cout<<"fail";
    }
}