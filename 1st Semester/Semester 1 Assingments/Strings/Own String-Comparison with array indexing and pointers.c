#include <stdio.h>
int stringcmp(char[], char[]);
int strcmpPoint(char *, char *);
int stringncmp(char[], char[], int);
int strncmpPoint(char *, char *, int);
int main()
{
    char s1[20] = "ABC";
    char s2[20] = "ABCDE";
    printf("COMPARE FUNCTION\n");
    printf("---------------------\n");
    printf("%s\n", s1);
    printf("%s\n", s2);
    printf("Ans is 0 if both equal, >0 if first string contains larger value \nand different character, <0 otherwise\n");
    printf("---------------------------------------------------------\n");
    printf("By Array Indexing\n");
    printf("ANS: %d\n", stringcmp(s1, s2));

    printf("By pointers\n");
    printf("ANS: %d\n", strcmpPoint(s1, s2));

    printf("---------------------------------\n");
    printf("COMPARE TO Nth NUMBER, FUNCTION\n");
    printf("---------------------------------\n");
    printf("%s\n", s1);
    printf("%s\n", s2);
    printf("Comparing first 3 characters\n");
    printf("By Array Indexing\n");
    printf("Ans: %d\n", stringncmp(s1, s2, 3));

    printf("By pointers\n");
    printf("Ans: %d\n", strncmpPoint(s1, s2, 3));
    return 0;
}
int stringcmp(char s1[], char s2[])
{
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] == s2[i])
        {
            i++; // loop continues till different character is found
        }
        else if (s1[i] > s2[i])
        {
            return 1;
        }
        else if (s1[i] < s2[i])
        {
            return -1;
        }
    }
    if (s1[i] == '\0' && s2[i] == '\0')
    {
        return 0; // If both strings contains same characters
    }
    else if (s1[i] == '\0')
    {
        return -1; // means 1st string is shorter than 2nd.
    }
    else
    {
        return 1;
    }
}
int strcmpPoint(char *s1, char *s2)
{
    int i = 0;
    while (*(s1 + i) != '\0' && *(s2 + i) != '\0')
    {
        if (*(s1 + i) == *(s2 + i))
        {
            i++; // loop continues till different character is found
        }
        else if (*(s1 + i) > *(s2 + i))
        {
            return 1;
        }
        else if (*(s1 + i) < *(s2 + i))
        {
            return -1;
        }
    }
    if (*(s1 + i) == '\0' && *(s2 + i) == '\0')
    {
        return 0; // If both strings contains same characters
    }
    else if (*(s1 + i) == '\0')
    {
        return -1; // means 1st string is shorter than 2nd.
    }
    else
    {
        return 1;
    }
}
int stringncmp(char s1[], char s2[], int n)
{
    int limit = n-1;
    int i = 0;
    while (i <= limit && s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] == s2[i])
        {
            i++; // loop continues till different character is found OR till index reach the value n
        }
        else if (s1[i] > s2[i])
        {
            return 1;
        }
        else
        {
            return -1;
        }
    }
    if (i == n)  // i reached n
    {
        return 0;
    }
    if (s1[i] == s2[i]) // checks whether ending index of both contains same value or not
    {
        return 0; // If both strings contains same characters
    }
    else if (s1[i] < s2[i])
    {
        return -1; // means 1st string is shorter than 2nd.
    }
    else
    {
        return 1;
    }
}
int strncmpPoint(char *s1, char *s2, int n)
{
    int limit = n-1;
    int i = 0;
    while (i <= limit && *(s1 + i) != '\0' && *(s2 + i) != '\0')
    {
        if (*(s1 + i) == *(s2 + i))
        {
            i++; // loop continues till different character is found OR till index reach the value n
        }
        else if (*(s1 + i) > *(s2 + i))
        {
            return 1;
        }
        else
        {
            return -1;
        }
    }
    if (i == n)  // i reached n
    {
        return 0;
    }
    if (*(s1 + i) == *(s2 + i)) // checks whether ending index of both contains same value or not
    {
        return 0; // If both strings contains same characters
    }
    else if (*(s1 + i) < *(s2 + i))
    {
        return -1; // means 1st string is shorter than 2nd.
    }
    else
    {
        return 1;
    }
}