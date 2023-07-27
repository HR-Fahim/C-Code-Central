#include<stdio.h>
int main()
{
    int i,j,arr[6];
    printf("Array input members sequentially:\n");
    for(i=0;i<6;i++)
    {
        scanf("%d",&arr[i]);
    }
    arr[i]=arr[j];
    printf("Sorted array: ");
    for(j=6;j>0;j--)
    {
        printf("%d",arr[i]);
        if(j!=1)
        {
            printf(", ");
        }
    }
    return 0;

}
