// This C program, using recursion, finds the binary equivalent of a decimal number entered by the user.
#include<stdio.h>
int int_2_binary(int n)
{   
    if(n == 0)
    {
        return n;
    }
     return(n%2 + 10*int_2_binary(n/2));
}
int main()
{
    int n;
    printf("Enter an Integer value n :");
    scanf("%d",&n);
    printf("binary equivlaent of %d is : %d",n,int_2_binary(n));
}


// 10010 (binary) = (1 × 24) + (0 × 23) + (0 × 22) + (1 × 21) + (0 × 20) = 18