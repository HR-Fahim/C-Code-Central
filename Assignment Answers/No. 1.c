#include<stdio.h>
int main()
{
    int i,n,j;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    printf("Input up to the table number starting from 1: ");
    scanf("%d",&n);
    for(i=0;i<10;i++)
    {
        for(j=1;j<=n;j++)
        {

            printf("%dx%d=%d\t",j,arr[i],arr[i]*j);
            if(j==n)
                {
                    printf("\n");
                }

        }
    }
    return 0;
}
