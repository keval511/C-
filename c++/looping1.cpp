#include<iostream>
using namespace std;
int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        for(j=4;j>=1;j--)
        {
if(j<=i){
    cout << j;
}
else{
    cout << " ";
}
        }   
            cout<<"\n";
    }
}




//       10
//      910
//     8910
//    78910 