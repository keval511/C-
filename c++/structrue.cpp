#include<iostream>
using namespace std;
struct car{
    string cname;
    int price;
    int stock;
    float size;
};
int main()
{
    car c1;
    c1.cname="bmw";
    c1.price=5000000;
    c1.stock=100;
    c1.size=21.7;

    cout<<c1.cname;
    cout<<c1.price;
    cout<<c1.stock;
    cout<<c1.size;

cout<<"\n";

    car c2;
    c2.cname="thaar";
    c2.price=1300000;
    c2.stock=99;
    c2.size=18.5;

    cout<<c2.cname;
    cout<<c2.price;
    cout<<c2.stock;
    cout<<c2.size;
    car c3;
    c3.cname="fortuner";
    c3.price=5000000;
    c3.stock=500;
    c3.size=23.5;
cout<<"\n";
    cout<<c3.cname;
    cout<<c3.price;
    cout<<c3.stock;
    cout<<c3.size;

    car c4;
    c4.cname="mercedes benz";
    c4.price=10000000;
    c4.stock=89;
    c4.size=20.9;

cout<<"\n";
    cout<<c4.cname;
    cout<<c4.price;
    cout<<c4.stock;
    cout<<c4.size;
    
    car c5;
    c5.cname="defender";
    c5.price=7000000;
    c5.stock=79;
    c5.size=21.9;
cout<<"\n";
    cout<<c5.cname;
    cout<<c5.price;
    cout<<c5.stock;
    cout<<c5.size;
}