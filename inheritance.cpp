#include<iostream>
using namespace std;
class mobile{
    public:
    string name;
    float price;
    int stock;
    void create(string a,float b,int s){
        name=a;
        price=b;
        stock=s;
    }
 
};


class mi : public mobile{

public :


   void get(){
      cout <<"mi model is : "<<name;
      cout <<"mi price is : "<<price;
      cout <<"mi stock is : "<<stock;
    }

};

class vivo : public mobile{
    public:
    void get(){
     cout << "vivo model is : "<<name;
      cout <<"vivo price is : "<<price;
      cout <<"vivo stock is : "<<stock;
    }

};

int main()
{
  
mi p1;
p1.create("redmi 13",13000,20);
p1.get();

vivo p2;
p2.create("vivo v29",50000,10);
p2.get();
 

}