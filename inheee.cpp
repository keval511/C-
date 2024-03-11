#include<iostream>
using namespace std;
class bank{
    public:
    string bank;
    int balance;
    string accounttype;
    char currency;

    void create(string a,int b,string c,char d){
        bank=a;
        balance=b;
        accounttype=c;
        currency=d;
    }
};

class hdfc :public bank{
    public:
        void get(){
            cout<<"bank holder name="<<bank;
            cout<<"\t"<<"holder bank balance="<<balance;
            cout<<"\t"<<"holder account type="<<accounttype;
            cout<<"\t"<<"holder currency="<<currency<<"\n";
        }

};

class axis : public bank{
    public:
        void get(){
            cout<<" bank holder name="<<bank;
            cout<<"\t"<<"holder bank balance="<<balance;
            cout<<"\t"<<"holder account type="<<accounttype;
            cout<<"\t"<<"holder currency="<<currency;
        }
};

int main(){
    hdfc k1;
    k1.create("keval",1000000,"current",'$');
    k1.get();

    axis v1;
    v1.create("vishal",100000,"current",'$');
    v1.get();
}