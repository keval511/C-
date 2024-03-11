#include<iostream>
using namespace std;
int main()
{
    struct{
        string name ;
        int price;
        int stock;
        string model; 
    }c1,c2,c3;
    c1.name="lenovo";
    c1.price=100000;
    c1.stock=99;
    c1.model="rayy6";

    c2.name="dell";
    c2.price=115000;
    c2.stock=100;
    c2.model="de657";

    c3.name="asus";
    c3.price=10000;
    c3.stock=59;
    c3.model="asu57";

    cout<<c1.name<<"\t";
    cout<<c1.price<<"\t";
    cout<<c1.stock<<"\t";
    cout<<c1.model<<"\n";

    cout<<c2.name<<"\t";
    cout<<c2.price<<"\t";
    cout<<c2.stock<<"\t";
    cout<<c2.model<<"\n";

    cout<<c3.name<<"\t";
    cout<<c3.price<<"\t";
    cout<<c3.stock<<"\t";
    cout<<c3.model<<"\n";
}
