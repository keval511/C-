#include<iostream>
using namespace std;
int main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        if(i==5){
            break;
        }
        cout<<i;
    }
    for(i=20;i>=0;i--)
    {
        if(i==15)
        {
            break;
        }
        cout<<i;
    }


    for(i=100;i<=110;i++)
    {
        if(i==105){
            continue;
        }
        cout<<"\n"<<i;
    }
    for(i=0;i<=10;i=i+2)
    {
        if(i==6)
        {
            continue;
        }
        cout<<i;
    }


    int age=20;

    string ans=(age>18)?"aadhar card valid " : "not validd";
    cout<<ans;
}