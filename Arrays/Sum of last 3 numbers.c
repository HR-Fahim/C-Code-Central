#include<stdio.h>
int sumLast3(int [], int );
void main()
{
    int i,arr[10];
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("sum: %d",sumLast3(arr, 10));
}
int sumLast3(int arr[], int size)
{
    int i,count=0,sum=0;
    for(i=size-1;(i>=0)&&(count<3);i--)
    {
        sum+=arr[i];
        count++;
    }
    return sum;
}
