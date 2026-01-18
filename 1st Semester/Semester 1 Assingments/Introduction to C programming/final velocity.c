#include<stdio.h>
int main()
{   
    int u,t,a;
    printf("Enter initial velocity: ");
    scanf("%d",&u);
    printf("Enter accelaration of an object: ");
    scanf("%d", &a);
    printf("Enter time that has elapsed: ");
    scanf("%d",&t);
    printf("The final velocity(v) of an object is %d units\n", u + a*t);
    printf("The distance traversed(s) is %.1f units", u*t + (0.5*a*t*t));
    return 0;


    
}