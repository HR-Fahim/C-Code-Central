#include<stdio.h>
int main()
{
    int i,k,n;
    printf("n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
    }
    printf("\n");
    for(k=n-1;k>1;k--)
    {

    for(i=1;i<k;i++)
    {
        printf("  ");
    }
    printf("%d",i);
    printf("\n");

    }
    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
    }
}

