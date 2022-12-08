#include<stdio.h>
#include<string.h>

int main()
{
    char public[999];
    char sensitive[99];
    int i=0;
    scanf("%c",public[i]);
    while((public[i] >'a' && public[i]<'z' )|| (public[i]<'Z' && public[i]>'A'))
    {
        i++;
      scanf("%c",public[i]);   
    }
    
    for(int j=0 ; ((sensitive[j]>'a' && sensitive[j]<'z') || (sensitive[i]<'Z' && sensitive[i]>'A')); j++)
    {
        scanf("%c",sensitive[j]);
    }
    
    
    
    
    
}