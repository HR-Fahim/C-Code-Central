/** *fruits[] indicating fruits[i] **/

#include<stdio.h>
int main()
{
    int i;
    char *fruits[] = {"apple", "banana", "cherry"};
    fruits[0] = "pear";
    for (i=0; i<3; i++)
    printf("%s\n", fruits[i]);
}
