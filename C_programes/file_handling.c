#include<stdio.h>
#include<stdlib.h>
int main()
{   
    int a = 10;
    char ch = 'R';
    char str[30] = "__Rixton__";
    FILE *fptr = NULL;
    fptr = fopen("factorial_recursion.c","a");
    if(fptr == NULL)
    {
       printf("ERROR!");
       exit(0);
    }
    fprintf(fptr,"\n%c %d %s",ch,a,str);
    fputc(ch,fptr);
    fclose(fptr);

}