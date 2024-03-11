#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string name,num;
    cout<<"enter name ";
    cin>>name;
    cout<<"enter no ";
    cin>>num;

    ofstream hhh("notice.txt");
    hhh<<name;
    hhh<<num;
    
}