#include<iostream>
using namespace std;
class laptop{
    public:
    string name;
    int stock;
    int price;
    int book;

    laptop(string a,int b,int c,int d){
        name=a;
        stock=b;
        price=c;
        book=d;

    }
    void get(){
        cout<<name;
        cout<<"\t"<<stock;
        cout<<"\t"<<price;
        cout<<"\t"<<book;

    }
};
int main ()
{
 laptop l1("dell",100,80000,70);
 l1.get();

}