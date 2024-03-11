#include<iostream>
using namespace std;

class mobile{
    public:
    string name;
    int stock,price;
    void create(string a,int b,int c){
        name=a;
        stock=b;
        price=c;
    }
    

};
class oppo:public mobile{
    public:
    void get(){
        cout<<"oppo model name="<<name<<"\n";
        cout<<"oppo stock="<<stock<<"\n";
        cout<<"oppo price="<<price<<"\n";
    }
};
class vivo:public mobile{
    public:
    void get(){
        cout<<"vivo model name="<<name<<"\n";
        cout<<"vivo stock="<<stock<<"\n";
        cout<<"vivo price="<<price<<"\n";
    }
};

int main()
{
 oppo p1;
 p1.create("k",89,67);
 p1.get();
 
 vivo v1;
 v1.create("vivo y83",567,87);
 v1.get();
}