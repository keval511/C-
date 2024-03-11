#include<iostream>
using namespace std;
class laptop{
    public:
    string name;
    float price;
    int stock;
    int discount;

    void create(string a,float b,int c,int d)
    {
        name=a;
        price=b;
        stock=c;
        discount=d;
    }
};

class dell :public laptop{
    public:
    void get(){
        cout<<"dell name is "<<name<<"\n";
        cout<<"dell price is "<<price<<"\n";
        cout<<"dell stock is "<<stock<<"\n";
        cout<<"dell discount is "<<discount<<"\n";
    }
};
    class lenovo :public laptop{
        public:
        void get(){
        cout<<"lenovo name is "<<name<<"\n";
        cout<<"lenovo price is "<<price<<"\n";
        cout<<"lenovo stock is "<<stock<<"\n";
        cout<<"lenovo discount is "<<discount<<"\n";
        }
    };

int main()
{
    dell l1;
    l1.create("dell",80000,90,1500);
    l1.get();
    lenovo l2;
    l2.create("lenovo",77000,88,1000);
    l2.get();
}
