#include <stdio.h>
#include <stdlib.h>

int main() {
    int index = 1;

    /* Check the condition and execute if true. */
    while(index <= 5) {
        printf("%d\n", index);
        index++;
    }

    /* Execute the code and check if true before. */
    do {
        printf("%d\n", index);
        index++;
    } while (index <= 5);
    
    return 0;
}