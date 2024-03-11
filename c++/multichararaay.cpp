#include<iostream>
using namespace std;
int main()
{
    char a[2][3][2]={{{'e','f'},{'a','d'},{'c','b'}}, {{'j','i'},{'g','k'},{'h','l'} } };

    cout<<a[0][1][0]<<"\n";
     cout<<a[0][2][1]<<"\n";
      cout<<a[0][2][0]<<"\n";
       cout<<a[0][1][1]<<"\n";
        cout<<a[0][0][0]<<"\n";
         cout<<a[0][0][1]<<"\n";
          cout<<a[1][1][0]<<"\n";
           cout<<a[1][2][0]<<"\n";
            cout<<a[1][0][1]<<"\n";
             cout<<a[1][0][0]<<"\n";
              cout<<a[1][1][1]<<"\n";
               cout<<a[1][2][1]<<"\n";
                
}
