#include "stdio.h"
#include "ctype.h"
//Forward Declarations
void countCharacters(FILE* fp, char* fName);

int main(void)
{

    FILE* fp;
    fp = fopen(“test.txt”, “r”);
    if(fp == NULL)
    {

        printf(“File does not exist!");
               exit(1);

    }
    countCharacters(fp, “test.txt”);
    fclose(fp);
    return 0;

}
