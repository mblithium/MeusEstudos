#include <stdio.h>
#include <stdlib.h>

int main() {
    /* w = write; a = append; */
    FILE * fpointer = fopen("teste.txt", "w");

    fprintf(fpointer, "My favorite color is purple.\nSecond line.");


    fclose(fpointer);
    return 0;
}