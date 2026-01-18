#include<stdio.h>
int main()
{
    for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            printf("* ");
        }
        if (i % 2 != 0)
        {
            printf("\n ");// newline with gap
        }
        else
         printf("\n");// only new line
        
        
    }
    
} // Question asked to use %s,but miss we have not learn about strings yet.