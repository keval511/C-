#include<iostream>
using namespace std;


int main(){
   struct {
    string name;
    int price;
}m1,m2;

m1.name="vivo";
m1.price=50000;

m2.name="oppo";
m2.price=70000;

cout<<m1.name<<"\n";
cout<<m1.price<<"\n";

cout<<m2.name<<"\n";
cout<<m2.price<<"\n";

}



