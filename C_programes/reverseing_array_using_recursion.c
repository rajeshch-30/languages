#include <stdio.h>
// NOTE: implicit declaration of function is not allowed  in i.e we have to declare a function before using it.
// if we don't define type of a function then it will be considered as int type by default.


void swap(char *arraya , char *arrayb)
{
       char temp = *arraya;
        *arraya = *arrayb;
        *arrayb = temp;   
        return;  
}

void reverse(char array[], int n)
{
    if (n == 0 || n==1)
    {
        return;
    }

    else
    {
      swap(array,&array[n-1]);
        reverse(array + 1, n - 2);
    }
}

// void swap(char array[], int n)
// {
//        char temp = array[0];
//         array[0] = array[n - 1];
//         array[n - 1] = temp;   
//         return;  
// }

int main()
{
    int n;
    scanf("%d", &n);
    char array[n];
    // why it's scanning n-1 characters only not n.
    for (int i = 0; i < n; i++)
    {
        scanf("%c", &array[i]); // m percent babu moshay mpercent
    }

    for (int i = 0; i < n+1; i++)
    {
        printf("%c", array[i]); 
    }

    printf("%s", array);
    reverse(array, n);

    printf("%s", array);
}