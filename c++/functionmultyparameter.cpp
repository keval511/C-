#include<iostream>
using namespace std;
void mobile(string mname,float price,int stock)
{
    cout<<"mobile name is "<<mname<<"\n";
    cout<<"price is mobile "<<price<<"\n";
    cout<<"mobile stock is "<<stock<<"\n";
}

int main()
{
    mobile("samsung",50000,100);
    mobile("apple",100000,1000);
    mobile("oppo",70000,60);
    mobile("vivo",70000,87);
    mobile("realme",56789,80);
}