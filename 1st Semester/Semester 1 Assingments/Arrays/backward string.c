#include <stdio.h>
void stringReverse(char[], int);

int main()
{
    char stringArr[25] = {"Let's Check it's Reverse"};
    printf("%s\n",stringArr);
    stringReverse(stringArr, 0);

    return 0;
}
void stringReverse(char arr[], int index)
{
    if (arr[index] == '\0')
    {
        return;
    }
    else
    {
        stringReverse(arr, index + 1);
        printf("%c", arr[index]);
        if (index == 0)
        {
            printf("%c",'\0'); // prints null charcter when all recursive calls unwinds
        }
        
    }
}