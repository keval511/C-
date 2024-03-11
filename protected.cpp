#include<iostream>
using namespace std;
class phonepe{
    public:
    string uname;
    int balance;
    protected:
    int otp;
    int bpass;
    string process;
    public:
    void news(int a, int b, string c){
         otp=a;
         bpass=b;
         process=c;
    }
    void get(){
        cout<<"\t"<<otp<<"\t";
        cout<<"\t"<<bpass<<"\t";
        cout<<"\t"<<process<<"\t";
    }
};
int main()
{
    phonepe p1;
    p1.news(468,677709,"contact");
    p1.get();
    p1.uname="keval11";
    cout<<"\t"<<p1.uname<<"\t";
    p1.balance=34567;
    cout<<"\t"<<p1.balance;
}