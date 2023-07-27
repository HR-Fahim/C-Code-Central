#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("n:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("^");
        for(j=2;j<i;j++)
        {
            printf(" ");
        }
        if(i!=1)

        printf("^");
        for(k=n;k>i;k--)
        {
        printf(" ");

        }

        printf("^");


        printf("\n");
        if(i==n)
        {
            printf("^");
        for(j=2;j<=i;j++)
        {
            printf(" ");
        }

        printf("^");
        }


    }
}
