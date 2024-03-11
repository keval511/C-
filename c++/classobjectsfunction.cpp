#include<iostream>
using namespace std;
class laptop{
    public:
    string name;
    float price;
    int stock;


void create(string i,float j,int k)
{
   name=i;
   price=j;
   stock=k;
}
void get()
{
    cout<<name;
    cout<<price;
    cout<<stock;
}
};

int main()
{
    laptop l1;
    l1.create("dell",90000,100);
    l1.get();


}