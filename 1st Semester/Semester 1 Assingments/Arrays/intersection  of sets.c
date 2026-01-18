#include <stdio.h>

int main()
{
    int k = 0;
    int set1[10], set2[10], intersectionSet[10] = {0};
    printf("Enter elements of first set\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &set1[i]); // reads elements of 1st set
    }
    printf("Enter elements of second set\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &set2[i]); // reads elements of 2nd set
    }
    for (int i = 0; i < 10; i++)
    {
        int already = 0;
        for (int j = 0; j < 10; j++)
        {
            if (set1[i] == set2[j]) // checks whether element of set 1 matches with any element of 2nd set
            {
                for (int l = 0; l < k; l++)
                {
                    if (set1[i] == intersectionSet[l]) // checks whether the common element in both sets already exist in intersection set
                    {
                        already = 1; // set flag already to 1 if element is already stored.
                    }
                }
                if (already == 0) // stores common element in intersection set if it is not stored.
                {
                    intersectionSet[k++] = set1[i]; // first common element stores at 0 then increment index and so on.
                    break;
                }
            }
        }
    }
    printf("-----------------\n"); // seperator for printing intersection set

    for (int i = 0; i < k; i++) // loop executes only k(no. of common elements) number of times and extra 0s will not print
    {
        printf("%d\n", intersectionSet[i]);
    }

    return 0;
}