// #include<stdio.h>
//  int fun() { static int count = 0; count++; return count; }      // static declaration are initialize only once later keeps on updating until complete forgram ends .i.e it is considered declared globally even even if we declare it curly braces of a loop or a function.
//  int main() { 
//      printf("%d ", fun()); 
//      printf("%d ", fun()); 
//  return 0; }
 /*
  #include<stdio.h>
int main()
{
    int i = 1;
    printf("%d %d %d\n", ++i, i++, i);
    return 0;
}
        
        */

/*

  // *******************using limits library *********************
#include<stdio.h>
#include<limits.h>

int main(){
    int max, min;
    
    printf("min integer value: %d\n max integer value: %d\n size of integer max in bytes: %d\n size of integer min in bytes: %d", INT_MAX, INT_MIN,sizeof(max),sizeof(min));
    printf("\n size of double in bytes: %d\n size of integer in bytes: %d\n size of long long in bytes: %d\n",__SIZEOF_DOUBLE__ ,__SIZEOF_INT__,__SIZEOF_LONG_LONG__);
    printf(" size of integer in bits: %d\n",sizeof(int)*CHAR_BIT);

    printf("max unsigned integer value: %d\n" ,UINT_MAX);
    printf("min unsigned integer value: %d\n",0);

    int a = 10 , b = -10;
     printf("%d\n %i\n",a ,b) ;
                                                 //%u is used to print unsigned integer values.
    printf("%u\n %u\n",a ,b) ;                   // %u converted -10 into its equivalent usingned form 

    return 0 ;
}

                      */
                     /*

 #include<stdio.h>
 int main(){



     return 0;
 }                    
        

        // difference between int main() and int main(void)
                */

#include<stdio.h>
int main()
{
    int i = 1;
   // i++;
    //++i;
    printf("%d %d\n",++i, i++ );
   
    return 0;
}
        
        
        

      
      