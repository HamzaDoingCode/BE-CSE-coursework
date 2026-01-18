#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int game(void);
int gameStatus; // globally declared so that win and loss condition can also be seen by main

int main()
{
    srand(time(NULL));
    int Totalrolls = 0;
    float AverageLenghth;
    float probabilityOfWins = 0;
    int TotalWins = 0;
    int rolls;
    int rollNumberWins[21] = {0};
    int rollNumberLoss[21] = {0};

    for (int i = 1; i <= 1000; i++)
    {
        rolls = game();
        if (gameStatus == 1)
        {
            if (rolls <= 20)
            {
                rollNumberWins[rolls - 1]++; // when game wins with 1 roll then value increments at index 0 and so on
            }
            else
            {
                rollNumberWins[20]++; // when rolls are more than 20 then value increments at index 20
            }
        }
        else if (gameStatus == 0)
        {
            if (rolls <= 20)
            {
                rollNumberLoss[rolls - 1]++; // when game loss with 1 roll then value increments at index 0 and so on
            }
            else
            {
                rollNumberLoss[20]++; // when rolls are more than 20 then value increments at index 20
            }
        }
    }
    printf("-------------------------------\n");
    printf("Rolls\tNo.of Wins\n");
    printf("-------------------------------\n");
    for (int i = 0; i < 20; i++)
    {
        printf("%d\t%d\n", i + 1, rollNumberWins[i]); // prints rolls and no of wins in that rolls in tabular format
    }
    printf(">20\t%d\n", rollNumberWins[20]);
    printf("-------------------------------\n"); // Seperation between wins and loss
    printf("Rolls\tNo.of Loss\n");
    printf("-------------------------------\n");
    for (int i = 0; i < 20; i++)
    {
        printf("%d\t%d\n", i + 1, rollNumberLoss[i]); // prints rolls and no of loss in that rolls in tabular format
    }
    printf(">20\t%d\n", rollNumberLoss[20]);

    // Finding probability of wins
    for (int j = 0; j < 21; j++)
    {
        TotalWins += rollNumberWins[j]; // calculates total number of wins
    }
    probabilityOfWins = (TotalWins / 1000.0) * 100.0;
    printf("\nThere are %.2f%% chances of winning at craps\n", probabilityOfWins);

    // Finding average length of game
    for (int k = 0; k < 21; k++)
    {
        Totalrolls = Totalrolls + rollNumberWins[k] * (k+1) + rollNumberLoss[k] * (k+1); // calculates total number of rolls by multliplying each roll with its number of occurence.
    }
    AverageLenghth = (Totalrolls) / 1000.0; // Finds average by dividing total number of rolls with total number of games
    printf("The average length of game is %.2f\n", AverageLenghth);

    return 0;
}
int game(void)
{
    gameStatus = 0;
    int rolling = 0;
    int roll1, roll2, sum, points;
    roll1 = 1 + rand() % 6;
    roll2 = 1 + rand() % 6;
    sum = roll1 + roll2;
    rolling++;
    if (sum == 7 || sum == 11)
    {
        gameStatus = 1; // Increment value when game wins
    }
    else if (sum == 2 || sum == 3 || sum == 12)
    {
        gameStatus = 0; // set the value to zero when game loss
    }
    else
    {
        points = sum;
        while (1)
        {
            roll1 = 1 + rand() % 6;
            roll2 = 1 + rand() % 6;
            sum = roll1 + roll2;
            rolling++;
            if (sum == points)
            {
                gameStatus = 1;
                break;
            }
            else if (sum == 7)
            {
                gameStatus = 0;
                break;
            }
        }
    }
    return rolling;
}