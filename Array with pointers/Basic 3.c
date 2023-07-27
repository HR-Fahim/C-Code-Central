#include<stdio.h>
int main()
{
    int a[5] = {2,4,6,8,55};
    int *p=&a[1];
    printf("%d\n%d\n", *p, *p+2);
}
