#include<iostream>
using namespace std;

struct laptop{
    string lname;
    float price;
    int stock;
    float size;
};
int main()
{
    laptop l1;
    l1.lname="dell ";
    l1.price=100000;
    l1.stock=100;
    l1.size=16.7;

    cout<<l1.lname;
    cout<<l1.price;
    cout<<l1.size;
    cout<<l1.stock;

cout<<"\n";
    laptop l2;
    l2.lname="hp";
    l2.price=75000;
    l2.stock=77;
    l2.size=19.5;

    cout<<l2.lname;
    cout<<l2.price;
    cout<<l2.stock;
    cout<<l2.size;
cout<<"\n";
    laptop l3;
    l3.lname="asus";
    l3.price=76000;
    l3.stock=70;
    l3.size=20.7;

    cout<<l3.lname;
    cout<<l3.price;
    cout<<l3.stock;
    cout<<l3.size;

    cout<<"\n";
    laptop l4;
    l4.lname="asus";
    l4.price=76000;
    l4.stock=70;
    l4.size=20.7;

    cout<<l4.lname;
    cout<<l4.price;
    cout<<l4.stock;
    cout<<l4.size;

    cout<<"\n";

    laptop l5;
    l5.lname="acer";
    l5.price=70000;
    l5.stock=40;
    l5.size=21.7;

    cout<<l5.lname;
    cout<<l5.price;
    cout<<l5.stock;
    cout<<l5.size;













string a;
int b;
float c;
int d;

cout<<"\n";
cin>>a;
cin>>b;
cin>>c;
cin>>d;

laptop l6;
l6.lname=a;
l6.price=b;
l6.size=c;
l6.stock=d;

cout<<l6.lname;
cout<<l6.price;
cout<<l6.size;
cout<<l6.stock;



}
