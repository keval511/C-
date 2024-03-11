#include<iostream>
using namespace std;
class upi{
public:
void get1(){
        cout <<"payment success";
    }
  
};
class phonepe :public upi{
    public:
    
    void status(){
        cout <<"payment processing";
    }
};
class qr :public phonepe{
    
            private:
    string name;
    int balance;
    int num;
    public:
    void create(string a,int b,int c){
        name=a;
        balance=b;
        num=c;
    }
      void get(){
           
        cout<<name<<"\n";
        cout<<balance<<"\n";
        cout<<num<<"\n";        
    }
};

int main()
{
    qr c1;
    c1.create("keval",500,8989);
    c1.status();
    c1.get();
    c1.get1();
  qr c2;
  
}