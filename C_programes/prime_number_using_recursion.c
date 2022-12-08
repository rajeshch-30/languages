#include <stdio.h>
int is_prime(int n, int a)
{
    if (a == n/2)
    {
        printf("YES");
    }
    else if (n % a == 0)
    {
        printf("NO");
    }
    else
    {
        is_prime(n, a = a + 1);
    }
}

int main()
{
    int n;
    printf("Enter the number to check as prime number ");
    scanf("%d", &n);
    if(n == 1) printf("No");

    else
    is_prime(n, 2);
}

/*

#include <stdio.h>

int primeno(int, int);

int main()
{
    int num, check;
    printf("Enter a number: ");
    scanf("%d", &num);
    check = primeno(num, num / 2);
    if (check == 1)
    {
        printf("%d is a prime number\n", num);
    }
    else
    {
        printf("%d is not a prime number\n", num);
    }
    return 0;
}

int primeno(int num, int i)
{
    if (i == 1)
    {
        return 1;
    }
    else
    {
       if (num % i == 0)
       {
         return 0;
       }
       else
       {
         return primeno(num, i - 1);
       }
    }
}

*/