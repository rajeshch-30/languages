#include <stdio.h>
#include <stdlib.h>

//          ************************ dangling pointers ---->> fear of data loss while returning poointers from a function. to avoid it we use malloc(n)******************************


int *sum(int n) // sum() is of int * type means pointer which can retun address of a varaible but problem is that once execution of c program completes i.e program returns some value  c erase memoy of that funciton. ultimately retruned pointer will be of no use because it will give some grabbage value.
{

    int *ptr = 0;                         // initialized pointer ptr  with 0.
    ptr = (int *)malloc(1 * sizeof(int)); // globally allocated 4 bytes to store integer values which is globally accesible.
    int s = 0;
    for (int i = 0; i < 10; i++)
    {

        s = s + (i + 1) * n; // it will update value stored in ptr everytime.
        // printf("%d\n", *ptr);
    }
    ptr = &s;

    return ptr;
}

/*   **********************************stack vs heap ********************
   stack: memory may got erased once function returns value .
   heap: memory is allocated globally i.e data remains in memory even after completion of funciton we have to free up that memory using free function.
                            */

int main()
{
    int *p = 0;

    int sum_tab, n;
    printf("Enter n : ");
    scanf("%d", &n);
    // sum_tab = *sum(n);
    // printf("%d\n",sum_tab);             // although we are getting correct ouptut using pointers because c is not that much aggressive in erasing memory but it didn't guarantee we will get correct result every time.
    // printf("%d\n",*sum(n));
    p = sum(n);
    printf("%d", *p);

    free(p);
    printf("%d", *p);                    // give garbagge value because free(p) had already erased the memory.


    return 0;
}
