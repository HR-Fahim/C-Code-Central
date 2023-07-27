#include <stdio.h>

int main()
{
  int arr[6],i,j,swap;
  printf("Array input members sequentially:\n");
  for(i=0;i<6;i++)
    {
        scanf("%d",&arr[i]);
    }
  for(i=0;i<5;i++)
  {
    for(j=0;j<5-i;j++)
    {
      if(arr[j]>arr[j+1])
      {
        swap=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=swap;
      }
    }
  }
  printf("Sorted array:\n");
  for (i=0;i<6;i++)
     {
         printf(" %d",arr[i]);
         if(i!=5)
         {
             printf(",");
         }

     }
  return 0;
}
