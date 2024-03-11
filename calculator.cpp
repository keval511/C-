#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char c; 
    cout<<"enter the value of a";
    cin>>a;
    cout<<"enter the value of b";
    cin>>b;
    cout<<"enter the symbol + - * % /";
    cin>>c;

    switch(c)
    {
        case '+':
        cout<<a+b;
        break;

        case '-':
        cout<<a-b;
        break;

        case '*':
        cout<<a*b;
        break;

        case '%':
        cout<<a%b;
        break;

        case '/':
        cout<<a/b;
        break;
         
        default:
        cout<<"incorrect";
        break;
    }
      
}