#include <stdio.h>
int stringlen(char[]);
int stringlenPoint(char *);

int main()
{
    char string[] = "This is the string whose length is going to be measured";
    printf("%s\n", string);
    printf("Lenght By Array Indexing\n");
    printf("The lenghth of the string is %d\n", stringlen(string));
    printf("Lenght By Pointers\n");
    printf("The lenghth of the string is %d\n", stringlenPoint(string));

    return 0;
}
int stringlen(char s[])
{
    int len = 0;
    while (s[len] != '\0')
    {
        len++;
    }
    return len;
}
int stringlenPoint(char *s)
{
    int len = 0;
    while (*(s + len) != '\0')
    {
        len++;
    }
    return len;
}