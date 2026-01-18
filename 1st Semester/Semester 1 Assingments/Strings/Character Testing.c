#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;
    printf("Enter a character to check it with character handling library:\n> ");
    scanf("%c", &c);
    printf("'%c'%sblank\n", c, isblank(c) ? " is a " : " is not a ");
    printf("'%c'%sdigit\n", c, isdigit(c) ? " is a " : " is not a ");
    printf("'%c'%salpha\n", c, isalpha(c) ? " is an " : " is not an ");
    printf("'%c'%s\n", c, isalnum(c) ? " is a letter or a digit " : " is neither letter nor a digit");
    printf("'%c'%shexadecimal digit\n", c, isxdigit(c) ? " is a " : " is not a ");
    printf("'%c'%slowercase letter\n", c, islower(c) ? " is a " : " is not a ");
    printf("'%c'%suppercase letter\n", c, isupper(c) ? " is a " : " is not a ");
    printf("'%c'%swhitespace character\n", c, isspace(c) ? " is a " : " is not a ");
    printf("'%c'%scontrol character\n", c, iscntrl(c) ? " is a " : " is not a ");
    printf("'%c'%sspecial character(symbol)\n", c, ispunct(c) ? " is a " : " is not a ");
    printf("'%c'%sprinting character\n", c, isprint(c) ? " is a " : " is not a ");
    printf("'%c'%sprinting character other than a space\n", c, isgraph(c) ? " is a " : " is not a ");

    return 0;
}