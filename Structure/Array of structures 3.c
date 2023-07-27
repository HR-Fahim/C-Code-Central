// Sort by number of students
void sortByEnrolment(module_t mod[], int size) {
int i, start, min_index;
module_t temp;
for (start = 0; start < size-1; start++) {
// find index of minimum element
min_index = start;
for (i = start+1; i < size; i++)
if (mod[i].enrolment < mod[min_index].enrolment)
min_index = i;

// swap minimum element with element at start index
temp = mod[start];
mod[start] = mod[min_index];
mod[min_index] = temp;
}
}
