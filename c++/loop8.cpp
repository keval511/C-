#include<iostream>
using namespace std;
int main()
{
    int i,j,k,space;

    for(i=1;i<=5;i++)
    {

        for(space=5;space>=i;space--){
            cout << " ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<"\n";
    }
}