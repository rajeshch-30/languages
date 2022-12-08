#include<stdio.h>
#include<stdlib.h>
int main()
{
   
    FILE *fp = NULL;
    char ch;
    char str[400];
    fp=fopen("factorial_recursion.c","r");
    if(fp == NULL)
    {
        printf("ERROR!");
        exit(1);
    }

        // printing first  character of file
  /*
    ch = fgetc(fp);   // read first char
    printf("%c",ch);  // print first char
    fclose(fp);
    */


// ---------------------------------------------------------
   // printing complete file using while loop
   /*
   while(!feof(fp))
   {
     ch = getc(fp);
     printf("%c",ch);
    
   }
   */
   fgets(str,40,fp);
   printf("%s",str);
  
   return 0;

}