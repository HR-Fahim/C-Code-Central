#include<stdio.h>
int main()
{
    int i,arr[]={2,4,9,56,4,7,5,6};
    int temp=arr[0];
    for(i=1;i<8;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[7]=temp;
    for(i=0;i<8;i++)
    {
        printf("%d ",arr[i]);
    }
}
