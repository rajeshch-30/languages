#include<stdio.h>
int sum_digit(int n)
{   
   if(n!=0)
   {
       return(n%10 + sum_digit(n/10));
   }
   else
   {
       return 0;
   }
}

int sum_till_single_digit(int n)
{
    if(n/10==0)
    {
        return n;
    }
    else
    {   
        n = sum_digit(n);
        return(sum_till_single_digit(n));
    }
}
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    // sum_digit(n);

    printf("sum of digits of %d is : %d\n",n,sum_digit(n));
    printf("sum of digit of %d till we get single digit is : %d",n,sum_till_single_digit(n));

}
  /*
 int sum=0;
    if(n/10==0)
    {   
        sum = sum +  n;
        return sum;
    }
    else
    {
    int last_digit = n%10;
    n=n/10;
    // sum = sum + last_digit;
    sum = sum + sum_digit(n);
    return sum;
    // sum_digit(n);
    } 
       */