#include<stdio.h>

int main(){
    char arr1[10],arr2[10],arr3[20];
    int count = 0,i = 0,j=0;
    printf("Enter 1st string\n> ");
    scanf("%s",arr1);
    printf("Enter 2nd string\n> ");
    scanf("%s",arr2);
    printf("1st string\n");
    for (int i = 0; arr1[i] != '\0'; i++)
    {
        printf("%c",arr1[i]);
    }
    printf("\n2nd string\n");
    for (i = 0; arr2[i] != '\0'; i++)
    {
        printf("%c",arr2[i]);
    }
    // To concatenate two strings
    for (i = 0; arr1[i] != '\0'; i++)
    {
        arr3[i] = arr1[i];
    }
    for (j = 0; arr2[j] != '\0'; j++)
    {
        arr3[i+j] = arr2[j];
    }
    arr3[i+j] = '\0';
    printf("\nConcatenated String\n");
    for (j = 0; arr3[j] != '\0'; j++)
    {
        printf("%c",arr3[j]);
    }

    for (i = 0; arr3[i] != '\0'; i++)
    {
        count++;
    }
    printf("\nThe length of the third string, the concatenated string, is %d",count);
    

    return 0;
}