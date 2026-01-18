    #include <stdio.h>
    #include <conio.h>

    int main()
    {
        int num = 0;
        int sum = 0;
        char arr[6][8] = {0};
        printf("Enter 6 numbers\n> ");
        for (int i = 0; i < 6; i++)
        {
            int j = 0; // Intializes to zero so that for next number iterations for the coloumn starts from 0
            while ((arr[i][j] = getche()) != '\r')
            {
                j++;
            }
            arr[i][j] = '\0'; // replaces \n with \0
            if(i == 5)
            {
                continue; // Dont prints a ">" for 7th number
            }
            printf("\n> "); // newline for next number
        }
        printf("\n");
        for (int k = 0; k < 6; k++)
        {
            num = 0; // Intializes to zero to store next number from starting
            for (int i = 0; arr[k][i] != '\0'; i++)
            {
                arr[k][i] -= 48;            // Converts the given string into integer value by subtracting its ASCII value
                num = num * 10 + arr[k][i]; // Stores the consecutive element of string OR digit of a number in a variable to make an integer
            }
            sum += num;
        }
        printf("\nThe sum of the given 6 integers(passed as strings) is %d\n",sum);
        printf("The average of the given 6 integers(passed as strings) is %.2f\n",sum/6.0);

        return 0;
    }