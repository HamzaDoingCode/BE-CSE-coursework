#include<stdio.h>
int main()
{
    printf("Centigrade\tFahrenheit\n");
    for(int temp = 30; temp<=50;temp++)
    {
        printf("%d\t\t%d\n",temp,(9*temp/5) + 32);
    }



}