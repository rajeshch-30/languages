#include <stdio.h>

int octal_to_decimal(int octal)
{
    if(octal != 0)
    {
        return(octal%10 + 8*octal_to_decimal(octal/10));
    }
    else
    {
        return octal;
    }
}

int decimal_to_binary(int n)
{
    if (n == 1 || n == 0)
        return n;
    else
    {
        return (n % 2 + 10 * decimal_to_binary(n / 2));
    }
}

int binary_to_gray(int binary)
{
    int a, b;
    if (!binary)
        return 0;

    else
    {
        a = binary % 10;
        binary = binary / 10;
        b = binary % 10;

        /*  it didn't worked because during conversion from binary to gray operation between two bits is xor not or.
     //    if(a || b ) return (1  + (10*binary_to_gray(binary)));
     //    else  return (0  + (10*binary_to_gray(binary)));

     */
        return (((a && !b) || (!a && b)) + (10 * binary_to_gray(binary)));

        //     if((a && !b) || (!a && b ))
        //     return(1+ 10*binary_to_gray(binary));
        //     else
        //     return(10*binary_to_gray(binary));
    }
}
int decimal_to_octal(int n)
{
    if(n<8) return n;
    else
    {
        return(n%8 + 10*decimal_to_octal(n/8));
    }
}
int main()
{
    int decimal, binary, gray, decimal_from_gray,octal;
    printf("Enter a decimal num : ");
    scanf("%d", &decimal);

    binary = decimal_to_binary(decimal);
    printf("binary of %d is : %d\n",decimal, binary);

    gray = binary_to_gray(binary);
    printf("gray of %d is : %d\n",binary, gray);
    
    octal = decimal_to_octal(decimal);
    printf("octal of %d is : %d\n",decimal,octal);

    printf("decimal of %d(octal) is : %d",octal,octal_to_decimal(octal));

    // a % n = a – ( n * trunc( a/n ) ).
}