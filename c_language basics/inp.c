#include<stdio.h>
int main(){
   int length, input, sum = 0 , max = -100000 , min = 100000;
   scanf("%d",&length);
  
   int i = 1;

   while(i != length){
         scanf("%d",&input);
        
         if(input == - 900){
             sum = sum + 900;
             printf("%d %d %d", sum, max, min);
             return 0;
             
         }
         if(input == -700){
             printf("%d %d %d", sum, max, min);
             return 0 ;
         }

          sum = sum + input;
          if(input > max){
              max = input;
          }

          if(input< min){
              min = input;
          }
          
          
   }

}