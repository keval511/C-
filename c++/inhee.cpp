#include<iostream>
using namespace std;
class googlepe{
    public:
    int amount;
    string username;
    int balance;
    char currency='$';

    void create(string a,int b,int c,char d){
        username=a;
        amount=b;
        balance=c;
        currency=d;
    }
};

class keval :public googlepe{
    public:
    void get(){
        cout<<"keval user name="<<username<<"\t";
        cout<<"keval amount is="<<amount<<"\t";
        cout<<"keval balance is="<<balance<<"\t";
        cout<<"keval currency is="<<currency<<"\n";
    }
};

class vishal :public googlepe{
    public:
    void get(){
        cout<<"vishal user name="<<username<<"\t";
        cout<<"vishal amount is="<<amount<<"\t";
        cout<<"vishal balance is="<<balance<<"\t";
        cout<<"vishal currency is="<<currency<<"\n";
    }
};

int main()
{
    keval k1;
    k1.create("keval511",1001,1000000,'$');
    k1.get();
    vishal v1;
    v1.create("vishal",1002,1000000,'$');
    v1.get();
}