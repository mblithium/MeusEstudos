#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Top\n");
    sayHi("Matheus", 23);
    sayHi("Roberto", 40);
    sayHi("Álvaro", 26);
    printf("Bottom\n");
    return 0;
}

void sayHi(char name[], int age) {
    printf("Hello %s, you are %d!\n", name, age);
}