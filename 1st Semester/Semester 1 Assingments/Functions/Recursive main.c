#include<stdio.h>

int main(){
    static int count = 1;
    count++;
    printf("The value of count is %d\n",count);
    return main();
}