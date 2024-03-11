#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the number of a";
    cin>>a;
    cout<<"enter the number of b";
    cin>>b;

    cout<<"1 for addition";
    cout<<"2 for subtraction";
    cout<<"3 for multiplication";
    cout<<"4 for didvision ";

    cin>>c;

    switch(c)
    {
        case 1:
        cout<<"answer is = "<<a+b;
        break;
        case 2:
        cout<<"answe is = "<<a-b;
        break;
        case 3:
        cout<<"answer is = "<<a*b;
        break;
        case 4:
        cout<<"answer is = "<<a/b;
        break;

        default:
        cout<<"incoreect num";

        
        
    }
}