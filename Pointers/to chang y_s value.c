#include<stdio.h>
int main()
{
    int y=5;

    int *a=&y;


    *a=10;

    printf("%d",*a);
}
