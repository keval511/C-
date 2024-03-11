#include<iostream>
using namespace std;

class marksheet{
    public:
string sname;
int mathes;
int science;
int eng;

// constructor
     marksheet(string a,int b,int c,int d){
        sname=a;
        mathes=b;
        science=c;
        eng=d;
    }
    void get(){
        cout<<sname;
        cout<<mathes;
        cout<<science;
        cout<<eng<<"\n";
    }

};
int main()
{
    marksheet m1("keval",77,87,69);
    m1.get();    

    marksheet m2("vishal",88,67,98);
    m2.get();

    marksheet m3("takshak",67,98,67);
    m3.get();

    marksheet m4("kuldeep",67,90,89);
    m4.get();

    marksheet m5("shivam",88,90,78);
    m5.get();
}