// 
// #include<iostream>
// using namespace std;
// int main()
// {
//     int i=1,j,k=1;
//     while(i<=4)
//     {
//         for(j=1;j<=i;j++)
//         {
//             cout<<k;
//             k=k+1;
//         }
//         cout<<"\n";
//         i++;
//     }
// }

// 
// #include<iostream>
// using namespace std;
// int main()
// {
//     int i=1,j,k=5,space;
//     while(i<=5)
//     {
//         for(space=4;space>=i;space--)
//         {
//             cout<<" ";
//         }
//         for(j=1;j<=i;j++)
//         {
//             cout<<j;


// #include<iostream>
// using namespace std;
// int main()
// {
//     int i=2,j;

//     do
//     {
//         cout<<i;
//         i=i+2;
//     } while (i<=8);
    
// }
// }

#include<iostream>
using namespace std;
int main()
{
    int i=1,j;

    do
    {
        for(int space=4;space>=i;i--)
        {
            cout<<" ";
        }
      for(j=1;j<=i;j++)
      {
        cout<<j;
      }
      cout<<"\n";
      i++;
    } while (i<=5);
    
}

    
