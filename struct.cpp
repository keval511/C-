#include<iostream>
using namespace std;
struct mob{
    string mname;
    float price;
    int stock;
};


 int main()
 {

mob vivo;
vivo.mname="vivo y83";
vivo.price=50000;
vivo.stock=50;

cout << vivo.mname;
cout << vivo.price;
cout << vivo.stock;


mob oppo;
oppo.mname="oppo reno";
oppo.price=70000;
oppo.stock=70;

cout << oppo.mname;
cout << oppo.price;
cout << oppo.stock;

}