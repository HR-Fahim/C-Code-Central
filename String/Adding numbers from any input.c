#include<stdio.h>
#include<string.h>

int main()
{
    char str[50];
    int i, len, x, temp=0;

    printf("Enter input: ");

    scanf("%s",str);

    printf("\n");

    len=strlen(str);

    for(i=0;i<len;i++)
    {
        if(isdigit(str[i]))

           {

             x=str[i]-'0';
             temp=temp+x;

           }

    }
    printf("| IT COUNTES INTEGERS BERFORE WHITE SPACE |\n\n");
    printf("Sum = %d",temp);

}

