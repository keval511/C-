#include<iostream>
using namespace std;
int main()
{
    string a="keval";
    string b="prajapati";
    

    string c=a+b;
    cout<<c;

    b[0]='h';
    cout<<"\n"<<b;


    
cout << a.size();


string j;
cin >> j;

int size=j.length();
int p;

for(p=size;p>=0;p--)
{
    cout<<"\n"<<j[p];
}
}