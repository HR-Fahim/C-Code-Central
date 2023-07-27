#include<stdio.h>
int main()
{
    int *ip1, a[8]={1,2,3,4,5,9,6,7,8};
    int *ip2, b[8]={11,12,13,14,15,16,17,18};

    ip1 = &a[0];
    ip2=b;

    printf("\n%d", *(ip1 + 5));
    printf("\n%d", *(ip2 + 5));
}

