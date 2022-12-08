#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *fp;
    fp = fopen("second.txt","w");
    if(fp == NULL) 
    {
        printf("Error! file can't be opened");
        exit(1);
    }
   
    char str[15];
    // for(int i =0;i<12 /*&& (str[i] != '\n') */;i++)
    // {
    //     scanf("%c",&str[i]);
    //     // if(str[i] == '\n') break;
    // }
    gets(str);
     for(int i =0;i<strlen(str) ;i++)
    {
        fputc(str[i],fp);
        // if(str[i] == '\n') break;
    }
    fprintf(fp,"\n%c",str[2]);
    // fputs(str,fp);
    fclose(fp);
}
