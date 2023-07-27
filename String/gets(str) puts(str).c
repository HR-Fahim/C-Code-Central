#include <stdio.h>
#define LENGTH 10
int main(void)
{
    char str[LENGTH];
    printf("Enter string (at most %d characters): ", LENGTH-1);
    gets(str);
    printf("str = ");
    puts(str);
    return 0;
}
