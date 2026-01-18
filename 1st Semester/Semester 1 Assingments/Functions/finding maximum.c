#include <stdio.h>
float largest(float, float, float, float);
int main()
{
    float num1, num2, num3, num4;
    printf("Enter first number -1 to exit\n");
    printf("Enter four numbers and check largest of them: \n");
    while (1)
    {
        printf("> "); // simple input prompt
        scanf("%f", &num1);
        if (num1 == -1)
        {
            printf("Exiting from program\n");
            break;
        }
        else
        {
            scanf("%f %f %f", &num2, &num3, &num4);

            printf("Largest number: %.3f\n", largest(num1, num2, num3, num4));
        }
    }

    return 0;
}
float largest(float num1, float num2, float num3, float num4)
{
    if (num1 > num2 && num1 > num3 && num1 > num4)
    {
        return num1;
    }
    else if (num2 > num1 && num2 > num3 && num2 > num4)
    {
        return num2;
    }

    else if (num3 > num1 && num3 > num2 && num3 > num4)
    {
        return num3;
    }
    else
    {
        return num4;
    }
}