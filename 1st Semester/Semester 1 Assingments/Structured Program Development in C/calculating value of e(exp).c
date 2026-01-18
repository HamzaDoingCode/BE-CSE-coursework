#include<stdio.h>
int main()
{
    double fact = 1,e = 0;
    int num = 7;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
        e = (i/fact) + e;


    }
    printf("The approximate value of e is %lf",e);
    

}