#include<stdio.h>
#define MAX_CLASSES 10
#define MAX_STUDENTS 30
int main(void)
{
    int enrol[MAX_CLASSES][MAX_STUDENTS] = { {0} }, numClasses, numStudents;
    readInputs(enrol, &numClasses, &numStudents);
    return 0;
}

int classWithMostStudents(int enrol[][MAX_STUDENTS],int numClasses, int numStudents)
{
    int classSizes[MAX_CLASSES];
    int r, c; // row and column indices
    int maxClass, i;
    for (r = 0; r < numClasses; r++)
    {
        classSizes[r] = 0;
        for (c = 0; c < numStudents; c++)
            classSizes[r] += enrol[r][c];
    }
// find the one with most students
    maxClass = 0; // assume class 0 has most students
    for (i = 1; i < numClasses; i++)
        if (classSizes[i] > classSizes[maxClass])
            maxClass = i;
}
