#include <stdio.h>
#define MAX_MODULES 10 // maximum number of modules
#define CODE_LENGTH 7 // length of module code
typedef struct {
char code[CODE_LENGTH+1];
int enrolment;
} module_t;
// Function prototypes omitted here for brevity
int main(void) {
module_t modules[MAX_MODULES];
int num_modules;
num_modules = scanModules(modules);
sortByEnrolment(modules, num_modules);
printModules(modules, num_modules);
return 0;
}
