#include<stdio.h>

void sub_array(float array1[],float array2[],int n)
{
     for(int i = 0; i<n;i++){
         array2[i]=array1[i];
        //   array2[i]=*(array1+i);

     }
}
int main(){
     int n=5;
    float array[13];
    float subarray[n];
   

    for(int i=0 ;i<13;i++){
        i[array]= 2.71 + i;
    }

   
    
    for(int i=0; i<13;i++){
        printf("%f\n",array[i]);

    }

    printf("---------------------------------------------------\n");
    
     printf("%f\n",*array);                 // why such output
    printf("---------------------------------------------------\n");  
     
    sub_array(array+3,subarray+2,n);      // wow! here array is equivalent to location first element and array  + 3 is equivalent to an array whose location of  first element is equals to 4th element of array array.
   

    for(int i=0; i<n+2;i++){
        printf("%f\n",subarray[i]);

    }

   
   
}