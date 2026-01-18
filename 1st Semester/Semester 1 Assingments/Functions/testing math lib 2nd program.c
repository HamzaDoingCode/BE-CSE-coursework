#include <stdio.h>
#include<math.h>

int main()
{

    printf("%.2f\n", fabs(10.85)); // 10.85
    printf("%.2f\n", floor(10.85)); // 
    printf("%.2f\n", fabs(-0.678));
    printf("%.2f\n", ceil(-fabs(-12 - floor(-9.5)))); // -22
    printf("%.2f\n", ceil(-34.87)); // -34
    return 0;
}