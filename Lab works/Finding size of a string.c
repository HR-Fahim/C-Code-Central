#include<stdio.h>
int main()
{
    char a[]="mango";
    char b[]="name12";

    int asize=0;
    int i=0;
    while(a[i]!='\0')
    {
        asize++;
        i++;
    }
    printf("%d",asize);
    return 0;
}
