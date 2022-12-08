#include<iostream>
using namespace std;
int main(){
    //Apointer is a variable
    //a -  1 block of 4 bytes,
   //b - 1 block of 4 bytes,address 5003,value=2.1
   //C-  1 block of<>bytes,address-1001,value=<2002>
   //d - 1 block of<>bytes,address=9002,value=<5003>
    int a=5;
    float b=2.1;
    int*c;// pointer-to-integer
    c=&a;
    float*d=&b;// pointer-to-float
    return 0 ;
}                