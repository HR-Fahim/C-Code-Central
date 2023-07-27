#include<stdio.h>
int main()
{
    char a[]="racecar";
    int asize=strlen(a)/2;
    int i;
    int length=strlen(a);
    int flag=0;
    for(i=0;i<asize;i++)

        {
            if(a[i]=a[length-i-1])
        {
            flag=1;
        }
        else
        {
            flag=0;
            break;
        }
        }
        if(flag==1)
        {
            printf("palindrome");
        }
        else
        {
            printf("not palindrome");
        }
}


