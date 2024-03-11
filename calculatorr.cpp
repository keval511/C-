#include<iostream>
using namespace std;
int main()
{
    int i,time;
    cin>>time;
    for(i=1;i<=time;i++)
    {    
    int a1,b1;
    cout<<"\n"<<"enter the value of a1= ";
    cin>>a1;
    cout<<"enter the value of b1= ";
    cin>>b1;

    char calculator;
    cout<<"enter the sign '+' '-' '/' '%' "<<"\n";
    cin>>calculator;
    switch(calculator)
    {
        case '+':
        cout<<"your answer addition is = ";
        cout<<a1+b1;
        break;

        case '-':
        cout<<"your answer subtraction is = ";
        cout<<a1-b1;
        break;

        case '/':
        cout<<"your answer division is = ";
        cout<<a1/b1;
        break;

        case '%':
        cout<<"your answer modulo is = ";
        cout<<a1%b1;
        break;

        default:
        cout<<"error"<<"\n";
    }
  }
}