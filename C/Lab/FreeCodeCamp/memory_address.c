#include <stdio.h>
#include <stdlib.h>

int main() {
    int age = 30;
    double gpa = 3.4;
    char grade = 'A';

    /* %p = pointer */
    printf("Age: %p\nGPA: %p\nGrade: %p\n", &age, &gpa, &grade);

    return 0;
}