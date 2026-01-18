#include<stdio.h>
int main()
{
    int seconds_elapsed,hour,min,sec;
    printf("Enter total elapsed time in seconds: ");
    scanf("%d", &seconds_elapsed);
    hour = seconds_elapsed / 3600;
    seconds_elapsed = seconds_elapsed % 3600;
    min =  seconds_elapsed / 60 ;
    seconds_elapsed = seconds_elapsed % 60;
    sec = seconds_elapsed;
    printf("%d hours : %d minutes : %d seconds", hour, min, sec);
    return 0;
    
    
    
    
    
    
    
    
    
    /* int seconds_elapsed,hour,min,sec;
    printf("Enter total elapsed time in seconds: ");
    scanf("%d", &seconds_elapsed);
    hour = seconds_elapsed / 3600;
    min = (seconds_elapsed - hour*3600)/60;
    sec = seconds_elapsed - hour*3600 - min*60;
    printf("%d hours : %d minutes : %d seconds", hour, min, sec);
    return 0; */

}