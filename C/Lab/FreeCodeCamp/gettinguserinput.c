#include <stdio.h>
#include <stdlib.h>

int main() {
    int age;
    double gpa;
    char grade;
    char name[20];

    printf("Enter your age: ");
    scanf("%d", &age);
    printf("You are %d years old.\n", age);

    printf("Enter your gpa: ");
    scanf("%lf", &gpa);
    printf("You gpa is %f.\n", gpa);

    printf("Enter your grade: ");
    scanf("%c", &grade);
    printf("You grade is %c.\n", grade);

    printf("Enter your name: ");
    fgets(name, 20, stdin);
    printf("You name is %s.\n", name);

    return 0;
}