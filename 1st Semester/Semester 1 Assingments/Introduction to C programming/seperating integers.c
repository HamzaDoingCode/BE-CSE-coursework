#include<stdio.h>
int main()
{
    int integer,first,second,third,fourth,fifth;
    printf("Enter five digit integer: ");
    scanf("%d", &integer);
    fifth = integer % 10;
    fourth = (integer / 10) % 10;
    third = (integer / 100) % 10;
    second = (integer / 1000) % 10;
    first = (integer / 10000) % 10;
    printf("%d\t%d\t%d\t%d\t%d", first, second, third, fourth, fifth);
return 0;


}