#include<iostream>
using namespace std;
class bank{
    public:
    string name;
    private:
    int money;
    
    public:
    void create(int a){
        money=a;
    }
    void get(){
        cout<<money;
    }

};
int main()
{
    bank b1;
    b1.name="sbi";
    cout<<b1.name;
    b1.create(56788);
    b1.get();


}