#include<stdio.h>
int main()
{
    int a = sizeof(int);
    printf("%d\n",a) ;
    printf("%d\n",sizeof(char));

    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

   // note: c interprete array[i] as *(array + i). and *(array + i) as *(array + i*sizeof(int))      # here array is pointer.
   // for accessing ith element of an array. general format -----> as intrepreted by c compiler  *(name of array + i*siceof(type of array))

   // for general        type *ptr ;   ptr + i is byte numbered ptr + i*sizeof(type)

    printf("%d\n",sizeof(10.5));
    printf("sizeof(array) : %d\n",sizeof(array));
    printf("no of elements in array : %d \n",sizeof(array)/sizeof(array[0]));


}