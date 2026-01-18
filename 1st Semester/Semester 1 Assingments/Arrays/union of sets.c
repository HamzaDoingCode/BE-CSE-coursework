#include <stdio.h>

int main()
{
    int k = 0;
    int set1[10], set2[10], unionSet[20] = {0};
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
    // nested loops to copy elements of 1st set into union set
    for (int i = 0; i < 10; i++)
    {
        int already = 0;
        for (int j = 0; j < k; j++)
        {
            if (set1[i] == unionSet[j]) // checks whether the element of set1 already exist in union set
            {
                already = 1; // set flag already to 1 if element is already stored.
            }
        }
        if (already == 0) // stores common element in union set if it is not stored.
        {
            unionSet[k++] = set1[i]; // first common element stores at 0 then increment index and so on.
        }
    }
    // nested loops to copy elements of 2nd set into union set
    for (int i = 0; i < 10; i++)
    {
        int already = 0;
        for (int j = 0; j < k; j++)
        {
            if (set2[i] == unionSet[j]) // checks whether the element of set2 already exist in union set
            {
                already = 1; // set flag already to 1 if element is already stored.
            }
        }
        if (already == 0) // stores common element in union set if it is not stored.
        {
            unionSet[k++] = set2[i]; // first common element stores at 0 then increment index and so on.
        }
    }
    printf("-----------------\n"); // seperator for printing union set

    for (int i = 0; i < k; i++) // loop executes only k(no. of elements) number of times and extra 0s will not print
    {
        printf("%d  ", unionSet[i]);
    }

    return 0;
}