#include <stdio.h>
#include <string.h>
int main(void)
{
    char name[12] = "Chan Tan";
    char *namePtr = "Chan Tan";

    printf("name = %s\n\n", name);
    printf("namePtr = %s\n\n", namePtr);
    printf("Address of 1st array element for name = %p\n\n", name);
    printf("Address of 1st array element for namePtr = %p\n\n",namePtr);
    strcpy(name, "Lee Hsu");
    namePtr = "Lee Hsu";

    printf("name = %s\n\n", name);
    printf("namePtr = %s\n\n", namePtr);
    printf("Address of 1st array element for name = %p\n\n", name);
    printf("Address of 1st array element for namePtr = %p\n\n",namePtr);
}
