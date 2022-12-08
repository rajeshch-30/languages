#include<stdio.h>
int main()
{
    int n,sum=0; 
    printf("Enter value of n : ");
    scanf("%d",&n);
    int n_copy = n;
     
     int i= 0;
    while(sum/10 > 0 || i ==0 )
    {  
        while(n != 0)
        {
            sum = sum + n%10;
            n = n/10;
        } 
        i++;
        printf("%d",i);
        n = sum;
    }
    printf("sum of digits of %d till we git sigle digit is : %d",n_copy,sum);
}