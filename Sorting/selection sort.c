#include<stdio.h>
int main()
{
    int i,j,size,max,arr[size];

    printf("Enter size:");
    scanf("%d",&size);
    for(j=0;j<size;j++)
    {
        max=arr[0];
        for(i=j;i<size;i++)
            if(arr[i]>arr[0])
            max=arr[i];
    }
    printf("%d",max);



}
