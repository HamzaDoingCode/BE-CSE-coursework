#include <stdio.h>

int main()
{
    printf("DE MORGANS LAW\n");
    printf("A\t");
    printf("%d", !(4 < 5) && !(8 >= 7)); // (!condition1 && !condition2)
    printf("%d\n", !((4 < 5) || (8 >= 7))); // !(condition1 || condition2)

    printf("B\t");
    printf("%d",!(7 == 8) || !(6 != 5)); // (!condition1 || !condition2)
    printf("%d\n",!((7 == 8) && (6 != 5))); // !(condition1 && condition2)

    printf("C\t");
    printf("%d",!((7 <= 8) && (3 > 4)));// !(condition1 && condition2)
    printf("%d\n", !(7 <= 8) || !(3 > 4));  // (!condition1 || !condition2)
    
    printf("D\t");
    printf("%d",!((6 > 4) || (7 <= 6))); // !(condition1 || condition2) 
    printf("%d\n", !(6 > 4) && !(7 <= 6));// (!condition1 && !condition2)
    return 0; 
}

