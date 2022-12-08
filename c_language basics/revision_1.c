           /*

//     *****************1. printing special characters like %d,%c,\n etc *****************
 
 #include<stdio.h>
 int main(){                     // execution of program starts from int main function
     printf("%%d %%f %%c \\n");
//    return 0;                  //  whenever hit return 0; it will end the complete program inside main() function {doesn't matter whether return 0; is inside a loop or any position. (i.e. it will return 0 to main() function.
   printf(" %c",'%');
 }
                        */
//  2. Taking input from user

#include<stdio.h>
int main(){
    int num1,num2 = 3,num3;
    num3 = 5.4;                  // we try to assign 5.4 to num3, but it will  store num3 = 5 because num3 is an integer, so it will store integer part of given input; 
     num2 = 4;                   // we updated num2 , now num2 is no more equal to 3 , instead num2 = 4;

   // how to interchange assigned values of num2 and num3;
   int temp;                    // declared a temporary variable temp
   temp = num2;                 // now temp = 4
   num2 = num3;                 // num2 will lost its initial input and store nume = 5 !!!! NOTE: If we wrote num3 = num2; then role of num2 and num3 will got interchage {i.e  then num3 will lost initial input and num3 = 4;}
   num3 = temp;                 // wow ! storing  initial input of num2 with the help of temp variable  actually helped in  assigninig num3  = 4 ;
//  
   float float1, float2 = 2
  char char1,char2,char3 = 'R';

}  