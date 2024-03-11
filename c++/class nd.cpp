#include<iostream>
using namespace std;

class human{
    public:
    string name;
    int income;
    private:
    string life;
    int money;
    public:
    void create(string a,int b){
        life=a;
        money=b;
    }
    void get(){
        cout<<life;
        cout<<money;
    }
};
int main()
{
    human h1;
    h1.name="person 1";
    h1.income=67899;
    cout<<h1.name;
    cout<<h1.income;

    h1.create("dreams",600000);
    h1.get();

}
