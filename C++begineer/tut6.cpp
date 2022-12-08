/*To enable multicursor use ctrl+alt+arrow up/down key and click enywhere to escape
To comment out a line can use ctrl+/  or select area then press ctrl+/
to replicate a line use alt+shift+ arrow up/down key 
use ctrl+z to undo and use ctrl+shift+z to redo */



// There are two types of header files  
// 1. Sytem header files: It commes with compiler
# include<iostream>  // iostream can be expanded by pressing ctrl+left click on iostream

// 2. User defined header files: It is written by programmer.
/* # include "RTS"      //It will produce error IF RTS file is not present in current directory*/

// visit cppreference.com for knowing more about header files. 


using namespace std;

int main(){
 cout<<"This is Tutorial number 6.\n";
 int a=4, b=5;
 cout<<"Operators in C++"<<endl;
 cout<<"Following are the types of operators. \n";
 
// 1. Arithmatic Operators
    cout<<"The value of a+b is "<<a+b<<endl;
    cout<<"The value of a-b is "<<a-b<<endl;
    cout<<"The value of a*b is "<<a*b<<endl;
    cout<<"The value of a%b is "<<a%b<<endl;
    cout<<"The value of a/b is "<<a/b<<endl;         // result of divison of two numer will also be integer, if not then vscode will show integer part only
    cout<<"The value of a++ is "<<a++<<endl;         // first print then increment 
    cout<<"The value of a-- is "<<a--<<endl;         // first print then decrement 
    cout<<"The value of ++a is "<<++a<<endl;         // first increment then print
    cout<<"The value of --a is "<<--a<<endl;         // first decrement then print 
    
//2. Assigment operators --> use to asign valuess to variales
     a=1, b=2;                                    // It will show error if we again use int here, so to update variables do not use int again. previous code remain unchange due to this change.
     int c=8;
    char d='z',e='y';
    float f=34.343;
    bool sach=true, jooth=false;
    cout<<a<<b<<c<<d<<e<<f<<sach<<jooth;

// 3. comparison operator
    cout<<"Following are the Comparison operators in c++. "<<endl;
    cout<<"The value of a==b is "<<(a==b)<<endl;   //Never forget paranthesis
    cout<<"The value of a!=b is "<<(a!=b)<<endl;   // here != stand for not equal
    cout<<"The value of a>=b is "<<(a>=b)<<endl;  
    cout<<"The value of a<=b is "<<(a<=b)<<endl;  
    cout<<"The value of a>b is "<<(a>b)<<endl;  
    cout<<"The value of a<b is "<<(a<b)<<endl;  

// 4. Logical Operators   (bhai of comparison Operators)
    cout<<"Following are the Logical Operators in c++."<<endl;
    cout<<"The value of this Logical and operator ((a==b) && ((a<b)) is: "<<((a==b) && (a<b))<<endl;
    cout<<"The value of this Logical or operator ((a==b) || ((a<b)) is: "<<((a==b) || (a<b))<<endl;
    cout<<"The value of this Logical not operator !((a==b) || ((a<b)) is: "<<!((a==b) || (a<b))<<endl;
    cout<<"The value of this Logical not operator !(a==b) is: "<<!(a==b)<<endl;

    // We will study bitwise operators later

    return 0;
}