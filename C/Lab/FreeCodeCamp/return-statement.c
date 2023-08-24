#include <stdio.h>
#include <stdlib.h>

double cube(double num); /* Prototyping, call the function above the main. */

int main() {
    printf("Answer: %f\n", cube(3.0));
    return 0;
}

double cube(double num) {
    double result = num * num * num;
    return result;
}