#include <stdio.h>
int isBlank(int);
int isDigit(int);
int isAlpha(int);
int isalnum(int);
int isXdigit(int);
int islower(int);
int isupper(int);
int ToLower(int);
int ToUpper(int);
int isSpace(int);
int iscntrl(int);
int ispunc(int);
int isprint(int);
int isgraph(int);

int main()
{
    char c;
    printf("Enter a character to check it with various functions(# to exit)\n");
    while (1)
    {
        printf("> ");
        scanf(" %c", &c);
        if (c == '#')
        {
            break; // end of loop
        }
        printf("'%c'%sblank\n", c, isBlank(c) ? " is a " : " is not a ");
        printf("'%c'%sdigit\n", c, isDigit(c) ? " is a " : " is not a ");
        printf("'%c'%salpha\n", c, isAlpha(c) ? " is an " : " is not an ");
        printf("'%c'%s\n", c, isalnum(c) ? " is a letter or a digit " : " is neither letter nor a digit");
        printf("'%c'%shexadecimal digit\n", c, isXdigit(c) ? " is a " : " is not a ");
        printf("'%c'%slowercase letter\n", c, islower(c) ? " is a " : " is not a ");
        printf("'%c'%suppercase letter\n", c, isupper(c) ? " is a " : " is not a ");
        printf("The lowercase equivalent of %c is %c\n", c, ToLower(c));
        printf("The uppercase equivalent of %c is %c\n", c, ToUpper(c));
        printf("'%c'%swhitespace character\n", c, isSpace(c) ? " is a " : " is not a ");
        printf("'%c'%scontrol character\n", c, iscntrl(c) ? " is a " : " is not a ");
        printf("'%c'%sspecial character(symbol)\n", c, ispunc(c) ? " is a " : " is not a ");
        printf("'%c'%sprinting character\n", c, isprint(c) ? " is a " : " is not a ");
        printf("'%c'%sprinting character other than a space\n", c, isgraph(c) ? " is a " : " is not a ");
    }
    return 0;
}
int isBlank(int c)
{
    if (c == ' ')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isDigit(int c)
{
    if (c >= '0' && c <= '9')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isAlpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isalnum(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isXdigit(int c)
{
    if ((c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F') || (c >= '0' && c <= '9'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int islower(int c)
{
    if (c >= 'a' && c <= 'z')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int ToLower(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return c + 32;
    }
    else
    {
        return c;
    }
}
int ToUpper(int c)
{
    if (c >= 'a' && c <= 'z')
    {
        return c - 32;
    }
    else
    {
        return c;
    }
}
int isSpace(int c)
{
    if (c == '\n' || c == '\t' || c == '\r' || c == ' ' || c == '\f' || c == '\v')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int iscntrl(int c)
{
    if ((c >= 0 && c <= 31) || c == 127) // starting 31 characters are control charaters and 127 is a delete character
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int ispunc(int c)
{
    if (c > 31) // starting 31 are control characters
    {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9') || c == ' ' || c == 127)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    return 0;
}
int isprint(int c)
{
    if ((c >= 0 && c <= 31) || c == 127) // starting 31 characters are control charaters and 127 is a delete character
    {
        return 0;
    }
    else // else all are printing characters
    {
        return 1;
    }
}
int isgraph(int c)
{
    if ((c >= 0 && c <= 31) || c == 127 || c == ' ') // starting 31 characters are control charaters and 127 is a delete character
    {
        return 0;
    }
    else // else all are printing characters
    {
        return 1;
    }
}
