#include <stdio.h>

int fib(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    return (fib(n - 1) + fib(n - 2));
}
int main()
{
    int n;
    printf("Enter position in fibonacci series : ");
    scanf("%d", &n);
    if(n<0)
    printf("Invalid input");
    else
    printf("%d element of fibonacci series is : %d ", n,fib(n));
}