#include <stdio.h>
void stringcpy(char[], char[]);
void strcpyPoint(char *, char *);
void stringcat(char[], char[]);
void strcatPoint(char *, char *);
int main()
{
    char paste[40];
    char copy[30] = "Lets check copy and paste";
    printf("COPY FUNCTION\n");
    printf("---------------------\n");
    printf("By Array Indexing\n");
    stringcpy(paste, copy);
    printf("%s\n", copy);
    printf("%s\n", paste);

    char paste2[40];
    char copy2[30] = "Lets check copy and paste";
    printf("By pointers\n");
    strcpyPoint(paste2, copy2);
    printf("%s\n", copy2);
    printf("%s\n", paste2);

    
    char string[] = "Check";
    char concatenate[20] = "Lets";
    printf("---------------------\n");
    printf("CONCATENATING FUNCTION\n");
    printf("---------------------\n");
    printf("By Array Indexing\n");
    stringcat(concatenate, string);
    printf("%s\n", concatenate);

    char string2[] = "Check";
    char concatenate2[20] = "Lets";
    printf("By pointers\n");
    strcatPoint(concatenate2, string2);
    printf("%s\n", concatenate2);

    return 0;
}
void stringcpy(char destination[], char source[])
{
    int i = 0;
    while (source[i] != '\0')
    {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0'; // stores null caracter at the end of string
}
void strcpyPoint(char *destination, char *source)
{
    int i = 0;
    while (*(source + i) != '\0')
    {
        *(destination + i) = *(source + i);
        i++;
    }
    *(destination + i) = '\0'; // stores null caracter at the end of string
}
void stringcat(char concat[], char string[]) // concatenate the string
{
    int len = 0;
    while (concat[len] != '\0')
    {
        len++;
    }
    concat[len++] = ' '; // replaces null with space
    int i = 0;
    while (string[i] != '\0')
    {
        concat[len++] = string[i++];
    }
}
void strcatPoint(char *concat, char *string) // concatenate the string
{
    int len = 0;
    while (*(concat + len) != '\0')
    {
        len++;
    }
    *(concat + len) = ' '; // replaces null with space
    len++;
    int i = 0;
    while (*(string + i) != '\0')
    {
        *(concat + len++) = *(string + i++);
    }
}