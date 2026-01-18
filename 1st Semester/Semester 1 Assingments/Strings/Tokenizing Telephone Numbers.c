#include<stdio.h>
#include<conio.h>

int main(){
    char number[15] = {0};
    char code[5] = {0};
    int areaCode = 0;
    int j = 0;
    char phoneNumber[8] = {0};
    long phnNumber = 0;

    int i = 0;
    printf("Enter a telephone phone in the form (555) 555-5555\n> ");
    while ((number[i] = getche()) != '\r')
    {
        i++;
    }
    number[i] = '\0'; // replaces \n with \0
    printf("\nGiven Telephone Number: %s\n",number);
    for (i = 1; number[i] != ')'; i++) // extracts area code from the given number
    {
        code[j] = number[i];
        j++;
    }
    code[j] = '\0'; // places null at the end of area code
    for (i = 0; code[i] != '\0'; i++) 
    {
        code[i] -= '0';
        areaCode = areaCode*10 + code[i]; // converts code from string to integer
    }
    printf("Area code: %d\n",areaCode);
    j = 0;
    for (i = 6; number[i] != '\0'; i++) // starting from 6 because phone number starts from 6th index
    {
        if (number[i] == '-')
        {
            continue; // skips hypen in the number
        }
        phoneNumber[j] = number [i]; // stores each digit of a number as a string
        phoneNumber[j] -= '0'; // stores each digit of a number as an integer 
        j++;  
    }
    phoneNumber[j] = '0';
    for (i = 0; phoneNumber[i] != '0'; i++)
    {
        phnNumber = phnNumber*10 + phoneNumber[i]; // convert phone number from integer array into whole integer
    }
    printf("Phone Number: %ld\n",phnNumber);
    
    
    
    

    
    
    return 0;
}