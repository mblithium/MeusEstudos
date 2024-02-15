#include <stdio.h>
#include <stdlib.h>

int main() {
    int age = 30;
    int * pAge = &age;

    printf("Age's memory address: %d\n", *pAge);
    printf("Age's memory address: %d\n", *&age);
    return 0;
}