#include<iostream>
using namespace std;
void mobile(string name,int price)
{
    cout<<"mobile name is "<<name<<"\n";
    cout<<"mobile price "<<price<<"\n";
}
int main()
{
    string a;
    int b;


    
for(int i=1;i<=5;i++)
{
    cin>>a;
    cin>>b;
    mobile(a,b);
}

}