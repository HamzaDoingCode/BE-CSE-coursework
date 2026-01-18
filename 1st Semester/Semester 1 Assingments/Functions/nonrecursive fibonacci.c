    #include <stdio.h>
    long long int fibonacci(unsigned int n);
    int main()
    {
        unsigned int n;
        printf("Enter 0 to exit\n");
        while (1)
        {
            printf("Enter (n) for number of terms for fabonacci series:\n");
            printf("> ");
            scanf("%u", &n);
            if (n == 0)
            {
                printf("Exiting from program\n");
                break;
            }
            printf("The %u term of fibonacci series is: %lld\n", n, fibonacci(n));
        }

        return 0;
    }
    long long int fibonacci(unsigned int n)
    {
        // n = no. of terms
        long long int firstTerm, secondTerm, nextTerm;
        firstTerm = 0;
        secondTerm = 1;
        if (n == 1)
        {
            return firstTerm;
        }
        else if (n == 2)
        {
            return secondTerm;
        }
        else
        {

            for (int i = 3; i <= n; i++)
            {
                nextTerm = firstTerm + secondTerm;
                firstTerm = secondTerm;
                secondTerm = nextTerm;
            }
            return nextTerm;
        }
    }