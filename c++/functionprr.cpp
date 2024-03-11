#include<iostream>
using namespace std;
void car(string name,int price,char firstl)
{
    cout<<"car name is "<<name<<"\n";
    cout<<"car price is "<<price<<"\n";
    cout<<"car firstl is "<<firstl<<"\n";
}

int main()
{
    string a;
    int b;
    char c;
    for(int i=1;i<=2;i++)
    {
    cout<<"enter the car name"<<"\n";
    cin>>a;
    cout<<"enter the car price"<<"\n";
    cin>>b;
    cout<<"enter the car first latter"<<"\n";
    cin>>c;

    car(a,b,c);
    }
}
