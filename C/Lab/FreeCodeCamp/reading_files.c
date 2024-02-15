#include <stdio.h>
#include <stdlib.h>

int main() {
    /* r = read; a = append; */
    char line[255];
    FILE * fpointer = fopen("teste.txt", "r");

    fgets(line, 255, fpointer);
    printf("%s", line);

    fgets(line, 255, fpointer);
    printf("%s", line);

    fclose(fpointer);
    return 0;
}