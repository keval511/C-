#include<iostream>
using namespace std;

// public
// private
// protected
class mobile{
public:

string name;
float price;
int stock;


};


int main(){

mobile p1;
p1.name="vivo";
p1.price=30000;
p1.stock=20;

cout << p1.name;
cout << p1.price;
cout << p1.stock;

}