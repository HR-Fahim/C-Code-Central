#include <stdio.h>
#include <string.h>
int main(void) {
char str[10];

str[0] = 'a';
str[1] = 'p';
str[2] = 'p';
str[3] = 'l';
str[4] = 'e';

printf("Length = %d\n", strlen(str));
printf("str = %s\n", str);

return 0;
}
