#include <stdio.h>
int main()
{
    printf("BMI values index: \n");
    printf("Underweight: lessthan 18.5\nNormal: between 18.5 and 24.9\n\
overweight: between 25 and 29.9\nObese:\t30 or greater\n");
    int weight;
    float height;
    printf("Enter your weight in kg: ");
    scanf("%d", &weight);
    printf("Enter your height in meters: ");
    scanf("%f", &height);
    float bmi;
    bmi = weight / (height * height);
    printf("\nYour BMI is %.02f", bmi);
    return 0;
}