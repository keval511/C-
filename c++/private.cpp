#include<iostream>
using namespace std;
class car{
    public:
    string name;
    private:
    int price;
public:
    void create(int b){
        price=b;
    }
    void get(){
        cout<<price;
    }
};
int main()
{
    car c1;
    c1.name="alto";
    cout<<c1.name;

c1.create(300000);
c1.get();
    // c1.price=7899;
    // cout<<c1.price;
}