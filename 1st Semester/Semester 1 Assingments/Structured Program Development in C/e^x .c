#include<stdio.h>
#include<math.h>

int main()
{
    double fact = 1,e = 1;
    int num;
    printf("Enter a number for the power of e: ");
    scanf("%d",&num);
    int n;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    for (int i = 1; i < n; i++) // i<n beacuse 1st term is already stored in variable e.
    {
        fact *= i;
        e = pow(num,i)/fact + e;
    }
    printf("The approximate value of e^%d is %.3lf",num,e);
    return 0;
    

}