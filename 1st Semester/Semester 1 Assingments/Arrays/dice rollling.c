#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
    int sumArray[11] = {0};
    srand(time(NULL)); // Changes the random number sequence 
    int dice1, dice2, sum;
    for (int i = 0; i <= 36000; i++)
    {
        sum = 0; // each time dice roll sum set to 0
        dice1 = 1 + rand() % 6; // roll the dice and value stored from 1-6 
        dice2 = 1 + rand() % 6; // roll the dice and value stored from 1-6  
        sum = dice1 + dice2;
        switch (sum)
        {
        case 2:
            sumArray[0]++; // stores how many times sum of 2 appear
            break;
        case 3:
            sumArray[1]++;
            break;
        case 4:
            sumArray[2]++;
            break;
        case 5:
            sumArray[3]++;
            break;
        case 6:
            sumArray[4]++;
            break;
        case 7:
            sumArray[5]++;
            break;
        case 8:
            sumArray[6]++;
            break;
        case 9:
            sumArray[7]++;
            break;
        case 10:
            sumArray[8]++;
            break;
        case 11:
            sumArray[9]++;
            break;
        case 12:
            sumArray[10]++;
            break;
        }
    }
    printf("Sum\tNumber of times\n");
    for (int i = 0; i < 11; i++)
    {
        printf("%d\t%d\n",i+2,sumArray[i]); // prints sum and number of times that sum has appeared.
    }
    

    
    return 0;
}