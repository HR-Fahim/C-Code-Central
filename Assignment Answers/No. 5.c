#include <stdio.h>
int main()
{
    int x,y;
    int array[10],i;
    printf("Enter elements:\n");
    for (i=0;i<10;i++)
        {
            scanf("%d",&array[i]);
        }
    if (array[0]<array[1])
    {
        x = array[0];
        y = array[1];
    }
    else
    {
      x=array[1];
      y=array[0];
    }
    for(i=2;i<10;i++)
    {
        if(array[i]<x)
        {
        y = x;
        x = array[i];
        }
        else if (array[i]<y)
        {
            y =array[i];
        }
    }
    printf("\nSecond smallest element is %d",y);
    return 0;
}
