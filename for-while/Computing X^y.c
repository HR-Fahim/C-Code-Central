#include<stdio.h>
int main()
{
    int x,y,i,res;
    printf("x:");
    scanf("%d",&x);
    printf("y:");
    scanf("%d",&y);
    res=1;
    for(i=1;i<=y;i++)
    {
        res=res*x;
    }
    printf("%d",res);


}
