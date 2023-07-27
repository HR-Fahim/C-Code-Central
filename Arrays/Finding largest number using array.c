#include<stdio.h>
int main()
{
    int i;
    int arr[10];

    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(i=1;i<10;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];

        }
    }
    printf("max: %d",arr[i]);
}
