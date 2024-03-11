#include<iostream>
using namespace std;
void laptop(string name,float price,int stock)
{
    cout<<"laptop name is "<<name<<"\n";
    cout<<"laptop price is "<<price<<"\n";
    cout<<"laptop stock in "<<stock<<"\n";
}
int main()
{
    laptop("dell",179099.8,100);
    laptop("hp",70000.12,77);
    laptop("lenovo",60000.32,76);
    laptop("asus",50000.32,98);
    laptop("macbook",100000,100);
    laptop("acer",100000,18);
}