// Fig. 5.14: fig05_14.c
// Simulating the game of craps.

#include <stdio.h>
#include <stdlib.h>
#include <time.h> // contains prototype for function time
void chatter(void);
void playCraps(void);
void Wager(void);

// randomize random number generator using current time

// enumeration constants represent game status
enum Status
{
    CONTINUE,
    WON,
    LOST
};

int rollDice(void);            // function prototype
int bankBalance = 1000, wager; // globally initialized so that these can be accessed by all functions
int main(void)
{
    // randomize random number generator using current time
    srand(time(NULL));
    Wager(); // prompts the user to enter wager
    playCraps(); // Run one game of craps

    return 0;
}

// roll dice, calculate sum and display results
int rollDice(void)
{
    int die1 = 1 + (rand() % 6); // pick random die1 value
    int die2 = 1 + (rand() % 6); // pick random die2 value

    // display results of this roll
    printf("Player rolled %d + %d = %d\n", die1, die2, die1 + die2);
    return die1 + die2; // return sum of dice
}

void chatter(void)
{
    int message = 1 + rand() % 3; // stores 1 or 2 or 3
    switch (message)
    {
    case 1:
        printf("Oh, you're going for broke, huh?\n");
        break;
    case 2:
        printf("Aw cmon, take a chance!\n");
        break;
    case 3:
        printf("You're up big. Now's the time to cash in your chips!\n");
        break;
    }
}
void playCraps(void)
{

    int myPoint;            // player must make this point to win
    enum Status gameStatus; // can contain CONTINUE, WON, or LOST

    int sum = rollDice(); // first roll of the dice
    chatter();

    // determine game status based on sum of dice
    switch (sum)
    {

    // win on first roll
    case 7:  // 7 is a winner
    case 11: // 11 is a winner
        gameStatus = WON;
        break;

    // lose on first roll
    case 2:  // 2 is a loser
    case 3:  // 3 is a loser
    case 12: // 12 is a loser
        gameStatus = LOST;
        break;

    // remember point
    default:
        gameStatus = CONTINUE; // player should keep rolling
        myPoint = sum;         // remember the point
        printf("Point is %d\n", myPoint);
        break;
    }

    // while game not complete
    while (CONTINUE == gameStatus)
    {                     // player should keep rolling
        sum = rollDice(); // roll dice again
        chatter();

        // determine game status
        if (sum == myPoint)
        { // win by making point
            gameStatus = WON;
        }
        else if (7 == sum)
        { // lose by rolling 7
            gameStatus = LOST;
        }
    }

    // display won or lost message
    if (WON == gameStatus)
    {
        puts("Player wins\n");
        bankBalance += wager;
    }
    else
    {
        puts("Player loses\n");
        bankBalance -= wager;
    }
    printf("Your new bank balance is: %d\n", bankBalance);
    if (bankBalance == 0)
    {
        printf("Sorry. You busted!\n");
    }
}
void Wager(void)
{
    printf("Your bank balance is: %d\n", bankBalance);
    printf("Enter a wager\n> ");
    scanf("%d", &wager);
    while (wager > bankBalance)
    {
        printf("Enter a valid wager\n> \n");
        scanf("%d", &wager);
    }
}
