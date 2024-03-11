#include<iostream>
using namespace std;
class upi{
    public:
    string name;
    int balance;

    void create(string a,int b){
        name=a;
        balance=b;
        
    }
    void get(){
        cout<<name<<"\t";
        cout<<balance;
    }
};

class qr:public upi{
    public:
    void scan(){
    
    cout<<"payment scanning";
    }
};
class payment:public qr{
    public:
    int amount;
    void pay(int a){
        amount=a;
        cout<<"amount pay"<<amount;

    }
};

int main()
{
     payment c1;
     c1.create("keval",56789);
     c1.get();
     
}