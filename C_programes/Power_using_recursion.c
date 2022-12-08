// The following C program, using recursion, finds the power of a number.
#include<stdio.h>

long pow_fun(int base,int power)
{  int  static count = 0;
    // printf("%d",count);
     if(power == 0)   // alternatively can be written as ---if(pow)---  both are same.
     {
         return 1;
         count++;
     }
     count++;
    //   printf("%d ",count);
     return(base*pow_fun(base,power-1));
    //  printf("%d",count);
}

int main()
{
   int base,power;
   printf("Enter base : ");
   scanf("%d",&base);
   printf("Enter power : ");
   scanf("%d",&power);
   pow_fun(base,power);
   if(!(power || base)) printf("Error ! ---------UNDEFINED----------");
   else 
   printf("%d raised to the power %d is : %ld",base,power,pow_fun(base,power));
//    printf("%d",count);
}