#include <stdio.h>
#define MAX_MODULES 10 // maximum number of modules
#define CODE_LENGTH 7 // length of module code
typedef struct {
char code[CODE_LENGTH+1];
int enrolment;
} module_t;

int scanModules(module_t mod[]) {
int size, i;
printf("Enter number of modules: ");
scanf("%d", &size);
printf("Enter module codes and student enrolment:\n");
for (i=0; i<size; i++)
scanf("%s %d", mod[i].code, &mod[i].enrolment);
return size;
}
void printModules(module_t mod[], int size) {
int i;
printf("Sorted by student enrolment:\n");
for (i=0; i<size; i++)
scanf("%s\t%3d\n", mod[i].code, mod[i].enrolment);

}
