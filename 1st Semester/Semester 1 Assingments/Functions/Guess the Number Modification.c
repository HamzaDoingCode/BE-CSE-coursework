#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main()
{
    int guess, guesses;
    char choice = 'y';
    srand(time(0));
    while (choice == 'y' || choice == 'Y')
    {

        int randomNumber = 1 + rand() % 1000; // stores random number between 1 and 1000
        guesses = 0;                          // reset for each new game
        printf("\nI have a number between 1 and 1000.\nCan you guess my number? \nPlease type your first guess.\n");
        guess = -1; // reset for each new round
        while (1)
        {
            printf("> ");
            scanf("%d", &guess);
            guesses++;
            if (guess == randomNumber)
            {
                printf("1. Excellent! You guessed the number! in %d tries\n", guesses);
                if (guesses == 10)
                {
                    printf("Ahah! You know the secret!\n");
                }
                else if (guesses < 10)
                {
                    printf("Either you know the secret or you got lucky!\n");
                }
                else
                {
                    printf("You should be able to do better!\n");
                }
                printf("Would you like to play again (y or n)? ");
                scanf(" %c",&choice);
                printf("\n");
                break;
            }
            else if (guess < randomNumber)
            {
                printf("Too low. Try again.\n");
            }
            else
            {
                printf("Too high. Try again.\n");
            }
        }
    }

    return 0;
}