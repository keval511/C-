#include<iostream>
using namespace std;
int sum(int maths,int science,int english){
     int ans=maths+science+english/3;
        
    return ans;
    
}
int main()
{
    
    int x,y,z;
    cin>>x;
    cin>>y;
    cin>>z;
    cout<<sum(x,y,z);
    
}