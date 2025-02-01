#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getComputerChoice();
void showChoice(int choice);
void determineWinner(int playerChoice, int computerChoice);

int main()
{
    int playerChoice, computerChoice;

    printf("Welcome to Stone-Paper-Scissors Game!\n");
    printf("Enter your choice:\n");
    printf("1. Stone\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");

    printf("Your choice: ");
    scanf("%d", &playerChoice);

    if (playerChoice < 1 || playerChoice > 3)
    {
        printf("Invalid choice! Please choose between 1 and 3.\n");
        return 0;
    }

    computerChoice = getComputerChoice();

    printf("\nYou chose: ");
    showChoice(playerChoice);
    printf("Computer chose: ");
    showChoice(computerChoice);

    determineWinner(playerChoice, computerChoice);

    return 0;
}

int getComputerChoice()
{
    srand(time(0));
    return (rand() % 3 + 1);
}

void showChoice(int choice)
{
    if (choice == 1)
    {
        printf("Stone\n");
    }
    else if (choice == 2)
    {
        printf("Paper\n");
    }
    else
        printf("Scissors\n");
}

void determineWinner(int playerChoice, int computerChoice)
{
    if (playerChoice == computerChoice)
    {
        printf("It's a DRAW!\n");
    }
    else if (playerChoice == 1 || (playerChoice == 3 && computerChoice == 2))
    {
        printf("Congratulations! You are the WINNER!\n");
    }
    else if (playerChoice == 2 || (playerChoice == 3 && computerChoice == 1))
    {
        printf("Better luck next time! You LOST.\n");
    }
}