#include<stdio.h>

 int main()
 {
        int n1,n2,sum=0,i;
        printf("enter the value of n1");
        scanf("%d",&n1);
        printf("enter the value of n2");
        scanf("%d",&n2);

       
       for(;n1<=n2;)
       {
              sum=sum+n1;
              n1++;
       }
       printf("%d",sum);
        return 0;
 }