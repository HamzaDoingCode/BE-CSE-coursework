#include<stdio.h>
#include<conio.h>
int main()
{
    printf("character = integer (ASCII) values\n");
    printf("A = %d\n", 'A');
    printf("B = %d\n", 'B');
    printf("C = %d\n", 'C');
    printf("a = %d\n", 'a');
    printf("b = %d\n", 'b');
    printf("c = %d\n", 'c');
    printf("0 = %d\n", '0');
    printf("1 = %d\n", '1');
    printf("2 = %d\n", '2');
    printf("$ = %d\n", '$');
    printf("* = %d\n", '*');
    printf("+ = %d\n", '+');
    printf("  = %d\n", ' ');
    char ch;
    printf("Enter a character to check integer (ASCII) value: ");
    ch = getche();
    printf("\nThe integer (ASCII) value of %c is %d\n", ch,ch);

return 0;
}