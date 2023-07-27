#include<stdio.h>
#include<string.h>

int main()
{
    int i, j, len;

    char str[50];

    printf("Enter a string: ");
    gets(str);

    len=strlen(str);


    for(i=0;i<=len;i++)
    {



        if(str[i]=='A' || str[i]=='a' ||
           str[i]=='E' || str[i]=='e' ||
           str[i]=='I' || str[i]=='i' ||
           str[i]=='O' || str[i]=='o' ||
           str[i]=='U' || str[i]=='u')

        {

           for(j=1;j<=len;j++)
           {


                     str[i+j-1]=str[i+j];


           }
           i--;

        }

    }

    printf("\n");

    printf("New string: %s\n",str);
}
