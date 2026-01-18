#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main()
{
    int guess;
    char choice = 'y';
    srand(time(0));
    while (1)
    {
        if (choice == 'n')
        {
            break; // keeps the game continue until user enter n(no)
        }

        int randomNumber = 1 + rand() % 1000; // stores random number between 1 and 1000
        printf("\nI have a number between 1 and 1000.\nCan you guess my number? \nPlease type your first guess.\n");
        guess = -1; // reset for each new round
        while (guess != randomNumber)
        {
            printf("> ");
            scanf("%d", &guess);
            if (guess == randomNumber)
            {
                printf("1. Excellent! You guessed the number! Would you like to play again (y or n)?");
                choice = getche();
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