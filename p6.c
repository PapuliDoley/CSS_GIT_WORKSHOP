#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// TODO: Keep track of the number of attempts
// TODO: Add a feature to restart the game.

int main()
{
    int secretNumber, guess, attempts = 0, choice;

    srand(time(0));
    secretNumber = rand() % 100 + 1;

    printf("Guess the Number Game (1 to 100)\n");

    do
    {
        attempts++;

        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess > secretNumber)
        {
            printf("Too high! Try again.\n");
        }
        else if (guess < secretNumber)
        {
            printf("Too low! Try again.\n");
        }
        else
        {
            printf("Congratulations! You guessed it.\n");
            printf("You took %d attempts\n", attempts);
            printf("Do you want to restart the game?\nEnter 1 to restart or 0 to exit:");
            scanf("%d", &choice);
            if (choice == 0)
            {
                printf("Exiting the program. Goodbye!\n");
                return 0;
            }
            else
            {
                secretNumber = rand() % 100 + 1;
            }
        }
    } while (guess != secretNumber);
}