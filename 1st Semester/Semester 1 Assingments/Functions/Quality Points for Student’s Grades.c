#include <stdio.h>
int toQualityPoints(float);

int main()
{
    float average;
    int points;
    printf("Enter (-1) to exit\n");
    printf("Enter student's Average:\n");
    while (1)
    {
        printf("> "); // simple input prompt
        scanf("%f", &average);
        if (average == -1)
        {
            printf("Exiting from program\n");
            break;
        }
        else
        {
            points = toQualityPoints(average);
            printf("There are %d points for obtaining %.2f average by student\n", points, average);
        }
    }

    return 0;
}
int toQualityPoints(float average)
{
    if (average >= 90 && average <= 100)
    {
        return 4;
    }
    else if (average >= 80 && average < 90)
    {
        return 3;
    }
    else if (average >= 70 && average < 80)
    {
        return 2;
    }
    else if (average >= 60 && average < 70)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}