#include<stdio.h>
int main()
{
    int a = 7, table = 1;
    printf("A\tA+3\tA+6\tA*9\n");
    for (int i = 1; i <= 5; i++)
    {
        printf("%d\t%d\t%d\t%d\n",a*i,a*i+3,a*i+6,a*i*9);
    }
    
}