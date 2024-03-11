#include<iostream>
using namespace std;
class cricket{
    public:
    string name;
    int age;

    private:
    int money;
    string bankacc;

    public:
    void create(int a,string b){
        money=a;
        bankacc=b;
    }
    void get(){
        cout<<money<<"\n";
        cout<<bankacc<<"\n";
    }
};
int main()
{
    cricket c1;
    c1.name="ms dhoni";
    c1.age=50;
    cout<<c1.name<<"\n";
    cout<<c1.age<<"\n";
    c1.create(7000000,"sbi");
    c1.get();

    cout<<"\n";

    cricket c2;
    c2.name="yuvraj singh";
    c2.age=56;
    cout<<c2.name<<"\n";
    cout<<c2.age<<"\n";
    c2.create(567899,"bob");
    c2.get();

    cout<<"\n";


    cricket c3;
    c3.name="kL rahul";
    c3.age=33;
    cout<<c3.name<<"\n";
    cout<<c3.age<<"\n";
    c3.create(4567678,"hdfc");
    c3.get();

    cout<<"\n";


    cricket c4;
    c4.name="raina";
    c4.age=40;
    cout<<c4.name<<"\n";
    cout<<c4.age<<"\n";
    c4.create(345678,"axis bank");
    c4.get();

    cout<<"\n";

    cricket c5;
    c5.name="rohit sharma";
    c5.age=41;
    cout<<c5.name<<"\n";
    cout<<c5.age<<"\n";
    c5.create(345678,"punjab bank");
    c5.get();

    


}