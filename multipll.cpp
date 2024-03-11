#include<iostream>
using namespace std;
class bank{
    public:
    string name;
    void create(string a){
        name=a;
    }
    void get()
    {
        cout<<"user name is="<<name<<"\n";
    }
};
class balance{
    public:
    int balance;
    void createb(int b){
        balance=b;
    }
    void getb(){
        cout<<"user balance is="<<balance<<"\n";
    }
};

class display:public bank,public balance{
    public:
    int otp;
    int mob;
    void created(int e,int f){
        otp=e;
        mob=f;
    }
    void getd(){
        cout<<"user get otp="<<otp<<"\n";
        cout<<"user mobile number is="<<mob<<"\n";
    }
};

int main()
{
 display d1;
 d1.create("keval");
 d1.get();
 d1.createb(453456);
 d1.getb();
 d1.created(5678,345678);
 d1.getd();

}