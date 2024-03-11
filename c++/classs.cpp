#include<iostream>
using namespace std;
class mobile{
    public:
    string name;
    int stock;
    float price;

    mobile (string a,int b,float c){
        name=a;
        stock=b;
        price=c;
    }
    void get()
    {
        cout<<name<<"\n";
        cout<<stock<<"\t";
        cout<<price<<"\n";
    }
};
int main()
{
    mobile m1("samsung",100,100000);
    m1.get();

    mobile m2("oppo",99,90000);
    m2.get();

    mobile m3("vivo",88,88888);
    m3.get();

    mobile m4("realme",89,67899);
    m4.get();

    mobile m5("apple",88,78900);
    m5.get();
}