/** char fruits[MAXNUM][STRSIZE];
// where MAXNUM is the maximum number of names
// and STRSIZE is the size of each name
// null on each word and strings **/


#include<stdio.h>
int main()
{

    /** char fruits[][6] = {"apple", "mango", "pear"}; or **/

    char fruits[3][6] = {"apple", "mango", "pear"};
    printf("fruits: %s %s\n", fruits[0], fruits[1]);
    printf("character: %c\n", fruits[2][1]);
}
