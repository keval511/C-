#include<iostream>
using namespace std;
class googlepe{
    public:
    string username;
    int balance;
    string accounttype;
        void create(string a,int b,string c){
            username=a;
            balance=b;
            accounttype=c;
        }
        void get(){
            cout<<username<<"\t";
            cout<<"\t"<<balance<<"\t";
            cout<<"\t"<<accounttype<<"\n";
        }
};
int main(){
googlepe g[10];
int x,y,num;
string a1,a2;
    cout<<"enter num";
    cin>>num;

for(int i=1;i<=num;i++)
{
    cout<<"enter the value of username";
    cin>>a1;
    cout<<"eneter the balance";
    cin>>x;
    cout<<"enter the accounttype";
    cin>>a2;
    g[i].create(a1,x,a2);
}

    cout<<"username="<<"\t";
    cout<<"balance="<<"\t";
    cout<<"\t"<<"branch="<<"\n";
    cout<<"========================================="<<"\n";
    cout<<"=========================================" <<"\n" ;
    for(int k=1;k<=num;k++)
    {
        g[k].get();
    }
}

