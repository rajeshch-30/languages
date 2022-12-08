#include<iostream>

#include<iomanip>                     // we included iomanip to use setw, which is used for adjusting field width
using namespace std;

int main(){
    int a = 34;
    char b = 'U';
cout<<"The value of a was: "<<a<<endl<<"The value of b was: "<<b<<endl;
    a = 22;
    b = '1';           //enter single input only in '   ' otherwise you will get unexpected result
cout<<"The value of a is: "<<a<<endl<<"The value of b is: "<<b<<endl;


// ************** constants*************
    const int c=34;                      // can't be changed. it will show error if we try to assign new value to c,d 
    const float d=35.34;
cout<<c<<d;



// *************** Manupulators  (endl and setW){used for alignment} ******************
    int p=3, q=55, r=123456;
cout<<"The value of p without setw is: "<<p<<endl;
cout<<"The value of q without setw is: "<<q<<endl;
cout<<"The value of r without setw is: "<<r<<endl;

cout<<"The value of p with setw is: "<<setw(4)<<p<<endl;
cout<<"The value of q with setw is: "<<setw(4)<<q<<endl;
cout<<"The value of r with setw is: "<<setw(4)<<r<<endl;


// ************ Operator Precedence ***************
     int x=23,y=56;
     int z= ((((x*5) + y) - 34) + 45) ;            // First chech precedence, if both operations have same precedence then check associativity at cppreference.com
cout<<"The value of z is: "<<z<<endl;

    return 0;
}