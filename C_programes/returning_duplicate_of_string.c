#include <stdio.h>
#include <stdlib.h>

char *duplicate(char *input_string)
{
    int i;
    int len;
    char *t; // for allocating global memory space.
    for (i = 0; input_string[i] != '\0'; i++)

        len = i;                                 // excluding null character which is present at the end of string.
    t = (int *)malloc((len+1)*sizeof(char)); // one extra byte for storing null character otherwsie both string will not be same.

    for (int i = 0; i < len+1; i++)
    {
        t[i] = input_string[i];
    }
    t[i] = '\0';                    // added null character at end of string.

    return t;
}

int main()
{
    char s[] = "rts 2030";
    char *copy = duplicate(s);
       printf("%s\n",copy);           // while printing string location of memory is used i.e pointer.

    for(int i=0; copy[i]!='\0';i++)
    {
        printf("%c",copy[i]);
     
    }
    free(copy);
    //  printf("%s\n",copy);                //  will give some garbagge output because we erased memory location of copy
    printf("\n%s",duplicate(s));
}