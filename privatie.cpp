#include<iostream>
using namespace std;
class bank{
    public:
    string name;
    int accb;
    private:
    int otp;
    string bname;
    public:
   void create(int a,string b){
        otp=a;
        bname=b;
    }
    void get()
    {
        cout<<"\t"<<otp;
        cout<<"\t"<<bname;
    }
};
int main()
{
    bank b1;
    b1.name="keval";
    cout<<b1.name<<"\t";
    b1.accb=6789;
    cout<<b1.accb;
    b1.create(567,"sbi");
    b1.get();
}