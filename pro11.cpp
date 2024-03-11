#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the number of a";
    cin>>a;
     cout<<"enter the number of b";
    cin>>b;

    cout<<"enter 1 for plus"<<"\n";
    cout<<"enter 2 for minus"<<"\n";
    cout<<"enter 3 for divison"<<"\n";
    cout<<"enter 4 for multiplication"<<"\n";

    cin>>c;

    switch(c)
    {
        case 1:
        cout<<"answer is : "<<a+b;
        break;
        case 2:
        cout<<"answer is : "<<a-b;
        break;
        case 3:
        cout<<"answer is : "<<a/b;
        break;

        default:
        cout<<"incorrect number";
    }

}