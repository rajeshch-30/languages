#include <stdio.h>

// define a function which counts number of digits and retuns 10^(no of digits - 1)
// although power of 10 be calculate using math.h library
// pow(10,k) = 10^k

int count_digits_and_returns_in_powof_10(int n)
{
    int k = 1;
    for (int i = 0; n != 0; i++)
    {
        n = n / 10;
        k = k * 10;
    }
    return k / 10;
}

//----------------------------------------------------------------------------------
int reverse(int n)
{
    // calculate no of digits in n
    // count_digits_and_returns_in_powof_10(n);
    if (n == 0)
    {
        return 0; // we can keep it blank(keeping blank might be risky because not all compiler returns 0 some might return some garbagge values also) so   return only 0.
                  // otherwise it won't give desired result for example if n = 45 and we return 2 the output will be 56 instead of 54;
    }

    else
    {
        int rev_n = 1 * (n % 10);
        return (count_digits_and_returns_in_powof_10(n) * rev_n + reverse(n / 10));
    }
}
int main()
{
    int n;
    int rev_n;
    printf("Enter value of n : ");
    scanf("%d", &n);

    printf("reverse of %d is : %d", n, reverse(n));
}

/*
   The pow() function takes ‘double’ as the arguments and returns a ‘double’ value.
   This function does not always work for integers. One such example is pow(5, 2).
    When assigned to an integer, it outputs 24 on some compilers and works fine for some other compilers.
    But pow(5, 2) without any assignment to an integer outputs 25.
      */