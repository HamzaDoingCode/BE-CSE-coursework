#include <stdio.h>

int main()
{
    printf("Pythagorean Triples\n");
    printf("----------------------\n");
    for (int hypotneus = 1; hypotneus <= 500; hypotneus++)
    {
        for (int base = 1; base <= 500; base++)
        {
            for (int height = 1; height <= 500; height++)
            {
                if (hypotneus * hypotneus == base * base + height * height)
                {
                    printf("%d,%d,%d\n", base, height, hypotneus);
                }
            }
        }
    }

    return 0;
}