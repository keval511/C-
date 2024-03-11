#include<iostream>
using namespace std;
int sum(int  a,int  b){
cin>>a;
cin>>b;
    if(b<a){
        return a;
    }
    else{
        return b;
    }
   
}
int main()
{
    int x,y;
    
    
    cout<<sum("valid","not valid");
}