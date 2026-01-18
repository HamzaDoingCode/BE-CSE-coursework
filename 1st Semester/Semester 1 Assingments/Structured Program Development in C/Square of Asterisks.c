#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number for square asterisks(from 1 to 20): ");
    scanf("%d",&x);
    if(x>= 1 && x<=20)
    {
        for (int i = 1; i <= x; i++)
        {
            for (int i = 1; i <= x; i++)
            {
                printf("*");
            }
            printf("\n");
        }
        

    }
}