#include <stdio.h>
#include <math.h>

int ispalindrom(char *str, int len)
{
    if (len == 0 || len == 1)
    {
        return 1;
    }

    else if (str[0] != str[len - 1])
    {
        return 0;
    }

    if (str[0] == str[len - 1])
    {
        return  /* ispalindrom((str + 1), len - 2) */ MAX{ ispalindrom((str + 1), len - 1), ispalindrom((str), len - 1) } ;
    }
}
int main()

{   int i ;

    scanf("%d",&i);
    char *input[i];
    scanf("%s",input);
    printf("%d",ispalindrom(input , i));
}