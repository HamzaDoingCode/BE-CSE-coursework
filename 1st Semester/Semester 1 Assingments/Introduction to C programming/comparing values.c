#include<stdio.h>
int main()
{
    int highest_rainfall,current_rainfall;
    printf("Enter the highest rainfall ever in one season for a country (in mm): \n");
    scanf("%d", &highest_rainfall);
    printf("Enter the rainfall in the current year for that country (in mm): \n");
    scanf("%d", &current_rainfall);
    if(current_rainfall > highest_rainfall){
        printf("current rainfall exceeds the higest rainfall!\n");
        highest_rainfall = current_rainfall;
    }
    printf("Now the highest rainfall is set to: %d mm", highest_rainfall);
return 0;
}