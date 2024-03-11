#include<iostream>
using namespace std;
int main()
{
    int i=1,j,k;

    while(i<=4)
    {
        for(j=4;j>=1;j--)
        {
            if(i>=j)
            {
                cout<<j;
            }
            else
            {
                cout<<" ";
            }
        }
        i++;
        cout<<"\n";
    }
}
