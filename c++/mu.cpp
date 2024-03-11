#include<iostream>
using namespace std;
class bank{
    public:
    string user;
    string bank;

    void create(string a,string b){
        user=a;
        bank=b;
    }
    void get(){
        cout<<"user name is "<<user<<"\n";
        cout<<"bank name is "<<bank<<"\n";
    }
};

class balance:public bank{
    public:
    int balance;
    void createbalance(int c) {
        balance=c;
    }
    void getbalance(){
        cout<<"balance is "<<balance<<"\n";
    }
};

class branch:public balance{
    public:
    string name;
    void branchcreate(string d){
        name=d;
    }
    void branchget(){
        cout<<"branch name is "<<name<<"\n";
    }
};

int main()
{
    branch b1;
    b1.create("kp","sbi");
    b1.get();
    b1.createbalance(5678);
    b1.getbalance();
    b1.branchcreate("naroda");
    b1.branchget();
}