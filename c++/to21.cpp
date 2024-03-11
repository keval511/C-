#include<iostream>
using namespace std;
class bank{
    public:
    string name;
    string branch;
    int balance;
    
    void create(string a,string b,int c)
    {
        name=a;
        branch=b;
        balance=c;
        
    }
    void get(){
        cout<<name<<"\t";
        cout<<branch<<"\t";
        cout<<balance<<"\t";
        int prize;
        balance=prize;

        if(100>prize)
        {
            
            cout<<"very rich"<<"\n";
        }
        else if(90>prize)
        {
            cout<<"rich"<<"\n";
        }
        else if(80>prize)
        {
            cout<<"richer"<<"\n";
        }
    }
};
int main()
{
    bank b[10];
    string a,q;
    int c,i,j,num,z;
        cout<<"enter the loop for num";
        cin>>num;
    for(i=1;i<=num;i++)
    {
        cout<<"enter the name ";
        cin>>a;
        cout<<"enter the branch ";
        cin>>q;
        cout<<"enetr the balance";
        cin>>c;
        b[i].create(a,q,c);
    }

    cout<<"name"<<"\t";
    cout<<"branch"<<"\t";
    cout<<"balance"<<"\t";
    cout<<"prize"<<"\n";
    cout<<"................................"<<"\n";
    cout<<"................................"<<"\n";

    for(j=1;j<=num;j++)
    {
        b[j].get();
    }
}