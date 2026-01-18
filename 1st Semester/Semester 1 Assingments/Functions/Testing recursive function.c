#include <stdio.h>
int sum(int);

int main()
{
    int a,result;
    scanf("%d",&a);
    result = sum(a);
    printf("%d",result);


}
int sum(int n)
    {
        if (0 == n)
        {
            return 0;
        }
        else
        {
            return n + sum(n-1);
        }
    }