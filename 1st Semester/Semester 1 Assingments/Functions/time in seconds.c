#include <stdio.h>
long time(int, int, int);

int main()
{
    int hour, minutes, seconds;
    long TotalSecondsInGivenTime;
    for (int i = 1; i <= 3; i++)
    {
        printf("Enter Time in the 12 hour format(hour: minutes: seconds): ");
        scanf("%d:%d:%d", &hour, &minutes, &seconds);
        if (hour >= 0 && hour <= 12 && minutes >= 0 && minutes <= 60 && seconds >= 0 && seconds <= 60)
        {
            TotalSecondsInGivenTime = time(hour, minutes, seconds);
            printf("The total seconds in %d hours %d minutes and %d seconds are: %ld\n", hour, minutes, seconds, TotalSecondsInGivenTime);
        }
        else
        {
            printf("Enter Correct time with in 12 hours\n");
            i--;
        }
    }

    return 0;
}
long time(int hour, int minutes, int seconds)
{
    long TotalSeconds = 0;
    TotalSeconds += hour * 3600;  // converts hour into seconds.
    TotalSeconds += minutes * 60; // converts minutes into seconds.
    TotalSeconds += seconds;
    return TotalSeconds;
}
