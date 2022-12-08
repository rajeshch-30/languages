#include<stdio.h>

void lexi_N(int a,int n)
{
    if(a>n) return; 
    if(a == n)
    {
    printf("%d",a);
    return ;
    }


   
    if(a != 0)
    {
        printf("%d ",a);
    }

    for(int i = ((a == 0) ? 1 : 0 ); i<10; i++)
    {
        // printf("%d",a);
        lexi_N(10*a + i, n);
    }
}
int main()
{
    int n;
    int a = 0;
    printf("Enter value of n : ");
    scanf("%d",&n);

    lexi_N(a,n);
}