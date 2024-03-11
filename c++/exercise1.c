#include<stdio.h>
int even();
int even()
{
        int n,i;
        printf("enter the value of n= ");
        scanf("%d",&n);

            if(n%2==0)
            {
                    return 1;
            }
            else
            {
                return 0;
            }
}
    int main()
    {
            int ans;
            ans=even();
            if(ans==1)
            {
                printf("even");
            }       
            else
            {
                printf("odd");
            }
            return 0;
    }

    
