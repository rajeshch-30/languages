// / Program to find GCD of given Numbers using Recursion
#include <stdio.h>
int hcf_without_recursion(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}

int lcm(int a, int b)
{
    if (a < b)
    {
        return (lcm(b, a));
    }
    else
    {
        int static i = 0;
        if ((i + a) % a == 0 && (i + a) % b == 0)
            return i + a;

        else
        {
            i++;
            return lcm(a, b);
            // return i;
        }
    }
}

int gcd(int a, int b)
{
    if (a < b)
        return (gcd(b, a));
    else if (b == 0)
        return a;
    else
        return (gcd(b, a % b));
}

int hcf(int a, int b)
{
    if (a != b)
    {
        if (a < b)
        {
            hcf(a, b - a);
        }
        else
        {
            hcf(a - b, b);
        }
    }
    else
    {
        return a;
    }
}

int main()
{
    int a, b;
    printf("Enter first num  : ");
    scanf("%d", &a);
    printf("Enter second num : ");
    scanf("%d", &b);
    if (a == 0 || b == 0)
    {
        printf("Invalid input!!!");
        return 0;
    }
    // gcd(a, b);
    printf("gcd of %d and %d is : %d \n while lcm is : %d \nand hcf which is same as gcd is : %d \n", a, b, gcd(a, b), lcm(a, b), hcf(a, b));
    printf("hcf of %d and %d is : %d ",a,b,hcf_without_recursion(a,b));
}

/*
#include <stdio.h>

int gcd(int, int);

int main()
{
  int a, b, result;

  printf("Enter the two numbers to find their GCD: ");
  scanf("%d%d", &a, &b);
  result = gcd(a, b);
  printf("The GCD of %d and %d is %d.\n", a, b, result);
}

int gcd(int a, int b)
{
  while (a != b)
  {
      if (a > b)
      {
          return gcd(a - b, b);
      }
      else
      {
          return gcd(a, b - a);
      }
  }
  return a ;
}
*/