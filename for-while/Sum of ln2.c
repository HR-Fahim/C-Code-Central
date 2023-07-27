#include<stdio.h>
int main()
{
    int i,ln2,n;
    printf("n:");
    scanf("%d",&n);
    ln2=0;
    for(i=1;i<=n;i++)
        {
            if(i%2==0)
        ln2=ln2-(1.0/i);
    else
        ln2=ln2+(1.0/i);
        }
    printf("%d",ln2);
}
