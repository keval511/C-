#include<iostream>
using namespace std;
class society{
    public:
    string name;
    int houseno;
    string chairman;
    int fund;
    int maintanance;

    void create(string a,int b,string c,int d,int e){
        name=a;
        houseno=b;
        chairman=c;
        fund=d;
        maintanance=e;

    }
};
class duraganagar : public society{
    public:
    void get(){
        cout<<"society name="<<name;
        cout<<"\t"<<"society house no="<<houseno;
        cout<<"\t"<<"society chairman name="<<chairman;
        cout<<"\t"<<"society fund="<<fund;
        cout<<"\t"<<"society maintance="<<maintanance;
    }
};

class ganesh : public society{
    public:
    void get(){
        cout<<"gannesh society name="<<name;
        cout<<"\t"<<"ganesh society house no="<<houseno;
        cout<<"\t"<<"ganesh society chairman name="<<chairman;
        cout<<"\t"<<"ganesh society fund="<<fund;
        cout<<"\t"<<"ganesh society maintance="<<maintanance;
    }

};


int main()
{
    duraganagar d1;
    d1.create("dns",45,"patel",56789,1000);
    d1.get();
    ganesh d2;
    d2.create("gns",11,"jadeja",7894,1234);
    d2.get();
}