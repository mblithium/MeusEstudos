#include <stdio.h>
#include <stdlib.h>

int main() {
    int age = 30;
    int * pAge = &age;
    double gpa = 3.4;
    double * pGpa = &gpa;
    char grade = 'A';
    char * pGrade = &grade;

    /* & aponta para o endereço físico da memória. */
    /* printf("Age's memory address: %p\n", &age); */

    printf("Conteúdo = %d\n", age);
    printf("Endereço = %p\n", &pAge);
    printf("Conteúdo apontado = %p\n", *pAge);
    return 0;
}