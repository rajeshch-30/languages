/*
This C program using recursion,
finds the product of 2 numbers without using the multiplication operator.
 */

#include <stdio.h>

int multiply(int a, int b)
{
    if (b == 1)
        return a;
    else if (b == 0)
        return 0;
    return (a + multiply(a, b - 1));
}

int main()
{
    int a, b;
    printf("Enter First num : ");
    scanf("%d", &a);
    printf("Enter second num : ");
    scanf("%d", &b);
    multiply(a, b);
    printf("Multiplicaton of %d with %d is : %d ", a, b, multiply(a, b));
}