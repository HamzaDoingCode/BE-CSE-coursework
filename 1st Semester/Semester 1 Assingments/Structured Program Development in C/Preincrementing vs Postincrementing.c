#include<stdio.h>
int main()
{
    int a = 4;
    printf("%d\n",a); // prints a
    printf("%d\n",++a); // pre increement operator first increement and then prints. it prints a+1 also update the value.
    printf("%d\n",a++); // post increement operator not prints the updated value since it updates after printing.  
    printf("%d\n",a);// It prints the value updated by post increement operator.\n
}