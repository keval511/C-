#include<iostream>
using namespace std;

void name(string name1)
{
    cout<<"your name is"<<name1<<"\n";
}
void price(int kp)
{
    cout<<"price is"<<kp<<"\n";
}
void num(float num)
{
    cout<<"\n"<<"float num is "<<num;
}
void alpha(char na)
{
    cout<<"\n"<<"alpha is"<<na<<"\n";
}
void l123(long pk)
{
    cout<<"num is this"<<pk<<"\n";
}
int main()
{
    name("keval");
    price(2345);
    num(789.87);
    alpha('k');
    l123(2345645);

    
}