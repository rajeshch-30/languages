// The user enters the Nth number as the input, 
// the program then calculates the sum of first N numbers using recursion 
// and then displays the final result.
#include<stdio.h>
int sum(int n )
{   if(n ==0) return n;

    return(n + sum(n-1));
}
int main()
{   static int a = 5;
    int n;
    printf("Enter value of n : ");
    scanf("%d",&n);
    printf("sum of whole numbers till %d is : %d\n",n,sum(n));
    printf("%d\n",a);
    a++;
    printf("%d\n",a);
    return 0;
}