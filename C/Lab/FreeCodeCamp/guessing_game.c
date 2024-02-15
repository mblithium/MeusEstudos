#include <stdio.h>
#include <stdlib.h>

int main () {
    int secretNumber = 5;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    int outGuesses = 0;

    while (guess != secretNumber && outGuesses == 0)
    {
        if (guessCount < guessLimit) {
            printf("Enter a number: ");
            scanf("%d", &guess);
            guessCount++;
        } else {
            outGuesses = 1;
        }
        
    }

    if (outGuesses == 1) {
        printf("Out of guesses... you lose.\n");
    } else {
        printf("You win!\n");
    }
    
    
    return 0;
}