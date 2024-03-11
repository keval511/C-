#include<iostream>
using namespace std;
class marksheet{
    public:
    string sname;
    int marks;
    string grade;

void Create(string a,int b,string c){
       sname=a;
       marks=b;
       grade=c;
}
void get(){
    cout << sname;
    cout<<marks;
    cout<<grade;
}

};

int main()
{
marksheet s1;

s1.sname="kp";
s1.marks=99;
s1.grade="a+";

cout<<s1.sname;
cout<<s1.marks;
cout<<s1.grade;


marksheet s2;
s2.Create("keval",80,"a");
s2.get();

marksheet s3;
s3.Create("vishal",88,"aa");
s3.get();
}