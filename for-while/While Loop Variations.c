#include<stdio.h>
int main()
{
    int i=1;
    while(i<=5)
    {
        printf("%d ",i++);
        if (i>2)
            printf("donot fix it ");
    }
    printf("donot fix it ");
    return 0;
}
