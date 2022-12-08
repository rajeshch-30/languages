// memory management 
// 1. Text segment  (i.e. instructions)  ----> text editors, c compilers  # read only
// 2. Initialized data segment ------> global variables and static variables that are initialized by the programmer.  # read and write
// 3. Uninitialized data segment  (bss)
// 4. Heap 
// 5. Stack
// try to use malloc over calloc because malloc is faster than calloc because calloc got initialized by 0 by default
#include<stdio.h>
#include<stdlib.h>
int main()
 {   
    // double *ptrd;
//     char *ptr1;
//     int *ptr2 = (int *)malloc(5*sizeof(int)); // 20 bit of memory block  is allocated ND ptr2 is initialize to locaton of first block of mmemory 
//     ptr1 = (char *)calloc(25,sizeof(char));   // 25 bit of memory block is allocated 
//     printf("size of ptr1 is : %d \nsize of ptr2 is : %d\n",sizeof(ptr1),sizeof(ptr2));            
//     printf("%d \n%d",sizeof(*ptr1),sizeof(*ptr2));
//     printf("\n---------------------------------");
//     printf("\n%d\n%d\n", *ptr1,*ptr2);
//     printf("%d",sizeof(ptrd));
//     ptr2 = realloc(ptr2,30*sizeof(int));
//     free(ptr1);
//     free(ptr1);
//     free(ptrd);
//     realloc(ptr1,0); // equivalent to free(ptr1)
    int a = 134;
    int *ptr;
    ptr = &a;
    char *c;
    // c = ptr;
    c = (char*)ptr;   // defererecing may give random output c will store only one byte while integer required 4 byte.
    // printf("%d",a);
    printf("%d %d %d %d\n",*ptr,ptr,c,*c);
    printf("%d %d",sizeof(ptr),sizeof(c));

}
