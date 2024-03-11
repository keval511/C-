#include<stdio.h>
int main()
{
    int n,m,a[100][100],i,j;
    printf("enter the size of n :");
    scanf("%d",&n);
    printf("enter the size of m :");
    scanf("%d",&m);

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the elements\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\n",a[i][j]);
        } 
    }
    printf("\n");
    
    return (0);
}