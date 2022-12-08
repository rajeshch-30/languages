#include<stdio.h>
int main(){
    int i;
    int maxchars;
    char previous,current ='\n';

    scanf("%d",&maxchars);

    for(i=0; i < maxchars; i++ ){
        previous = current;
        current = getchar();
        printf("%c %c", previous, current);
         
         if((previous =='\n') && (current =='\n')){
             break;
         }
        
    }
       printf("%d",i);
}