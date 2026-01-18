#include<stdio.h>
# define pie 3.14159
int main()

{
    float radius;
    printf("Enter the radius of a circle: ");
    scanf("%f",&radius);
    float diameter,area,circumference;
    diameter = 2 * radius;
    area = pie * radius * radius;
    circumference = 2 * pie * radius;
    printf("The diameter of a circle is: %.2f\n",diameter);
    printf("The area of a circle is: %.2f\n",area);
    printf("The circumference of a circle is: %.2f\n",circumference);
    return 0;

}