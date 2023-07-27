#include<stdio.h>
#define MAX_CLASSES 10
#define MAX_STUDENTS 30
int main(void)
{
    int enrol[MAX_CLASSES][MAX_STUDENTS] = { {0} }, numClasses, numStudents;
    readInputs(enrol, &numClasses, &numStudents);
    return 0;
}

/** Read data into array enroll **/

void readInputs(int enrol[][MAX_STUDENTS],int *numClassesPtr, int *numStudentsPtr)
{
    int entries; /** number of data entries **/
    int i, class, student;
    printf("Number of classes and students: ");
    scanf("%d %d", numClassesPtr, numStudentsPtr);
    printf("Number of data entries: ");
    scanf("%d", &entries);
    printf("Enter %d data entries (student class): \n", entries);

    /** Read data into array enroll **/

    for (i = 0; i < entries; i++)
    {
        scanf("%d %d", &student, &class);
        enrol[class][student] = 1;
    }

}


