#include<stdio.h>

// relational comparison operator can be used on ponter if and only if pointers points memory location in the same array otherwise we will get some random results.

void swap(char *ptr1 , char *ptr2)                          // swaping using pointers changes original memory space in main function.
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}


int main()
{   int n;
    scanf("%d",&n);
    // n = getchar();
    char arr[n];

    for(int i=0; i<n;i++)
    {
         arr[i]='a'+i;
    }


    for(int i=0;i<n;i++)
    {
        // printf("%c",arr[i]);
        putchar(arr[i]);
    }

    int i=0,j=0;
    while(i<=n/2)
    {
        swap(&arr[i],&arr[n-i-1]);
        i++;
    }
    printf("\n---------------------------------------------------------------------------\n");
     for(int i=0;i<n;i++)
    {
        // printf("%c",arr[i]);
        putchar(arr[i]);
    }

}