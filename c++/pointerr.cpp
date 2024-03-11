#include<iostream>
using namespace std;
int main()
{
    string abc="kp";

string *html=&abc;

cout<<*html;
cout<<"\n"<<&abc;

*html="css";
cout<<"\n"<<abc;
cout<<"\n"<<*html;
}