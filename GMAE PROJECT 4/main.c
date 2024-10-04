#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Initialize random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_Guesses = 0;
    int guessed;

    // Output the random number
    // printf("Random number between 1 and 100: %d\n", randomNumber);

    do
    {
        printf("Guess the number :");
        scanf("%d", &guessed);
        if (guessed > randomNumber)
        {
            printf("Lower number please ! \n");
        }
        else if(guessed < randomNumber)
        {
            printf("higher number please! \n");
        }
        else{
            printf("congrats !!\n");
        }
        no_of_Guesses++;

    } while (guessed != randomNumber);

    printf("You guessed the number in%dgusses", no_of_Guesses);
    return 0;
}
