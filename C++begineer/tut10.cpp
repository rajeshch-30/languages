#include<iostream>
using namespace std;

int main(){
   /* types of loops in C++
   There are 3 types of loops in C++
   1. for loop
   2. while loop
   3. Do-while loop    */
   

// ********** for loop in C++ **************
  /* int i=1;
   cout<<i;
    i++;
    cout<<i;
    i++;
    cout<<i;
    i++;
    cout<<i;
    i++;*/

    // syntax for for loop
    /*    for(initialization; condition; updation){
          loop body ( code in C++)   ;
       }       */

     /*  for (int i = 0; i < 34 ; i++)    // Initialzaton-->condition-->execution of code in loop bodY(only if condtion is ture)-->Updation-->condition-->execution of code in loop bodY(only if condtion is ture)l-->updation..........................so on
       {
          cout<<i<<endl;
          i++;
          i++;
         
           }   */

       // example of infinite for loop    // set a condition which is always true

     /*  for(int i=0; i>=0; i++){
          cout<<i<<endl;
       }    
       */

   
  /* // syntax for while loop
    while(condition)
   { 
      c++ statements;
   }*/

   // int i=1;
   // while(i<=40) {
   //    cout<<i<<endl;
   //    i++;
   // }

  /* // example infinite while loop
   int i=1;
   while(true){
      cout<<i<<endl;    
   }   */


   // // syntax of do while loop:
   // int i=**;
   // do
   // {
   //    /* code */
   // } while (/* condition */); 
   

   int i=1;    // float,double can be used
   do              
   {
      cout<<i<<endl;
      i++;
   } while (i<=40);
      
              // difference between while and do while loop is it will excute once even if condition is false
    int a=5;
    do{
       cout<<a<<endl;
       a++;
    } while(false);


    // table of 19 using for loop
    int b;                        // no difference if we write int b=any integer; output will remain same
    for(b=1; b<=10; b++){ 
       cout<<(19*b)<<endl;        // 19*b can be written without paranthesis because of single operation

    }
    // table of 21 using while loop
    int c=1;
    while(c<=10){
       cout<<21*c<<endl;
       c++;

    }

    // table of 18 using do while loop
    int d=1;
    do{
       cout<<18*d<<endl;
       d++;
    }while(d<11);


    return 0;
}