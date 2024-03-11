#include<iostream>

using namespace std;
int main()
{
    // 5 type of operator
    // 1=arithmetic operator (maths work)
    // 2=assignment operator (value assign kare)
    // 3=logical operator (check value)
    // 4=comparison operator (compare value)
    // 5=bitwise operator (find byte )

    int a=10, b=5;


    cout<<  a+b<<"\n" ;
    cout<<a-b<<"\n";
    cout<<a*b<<"\n";
    cout<<a/b<<"\n";
    cout<<a%b<<"\n";
    cout<<++a<<"\n";
    cout<<--b<<"\n";
   
cout <<"------------------------------------------------";
cout <<"------------------------------------------------\n";
   
   int x=5;

   int y=x;

   cout<<y;

   y+=10;
   cout<<"\n"<<y;
   y-=10;
   cout<<"\n"<<y;
   y*=10;
   cout<<"\n"<<y;
   y/=10;
   cout<<"\n"<<y;
   y%=10;
   cout<<"\n"<<y;

cout <<"------------------------------------------------";
cout <<"------------------------------------------------\n";
   
   int m=1;
   int n=1;
   cout<<(m&&n)<<"\n";
   cout<<(m||n)<<"\n";
   cout<<!(m&&n);
   
cout <<"------------------------------------------------";
cout <<"------------------------------------------------\n";
   
   int aa=10;
   int bb=110;
//    <,>.<=,>=,==

cout<<(aa<bb);
cout<<(aa>bb);
cout<<(aa<=bb);
cout<<(aa>=bb);
cout<<(aa==bb);
}