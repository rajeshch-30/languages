#include<iostream>
using namespace std;
int d=45;

int main(){

    // ************ Built in data types ************
    int a, b, c,d;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<"Enter the value of c: ";
    cin>>c;
    d = a+b+c;

    cout<<"The sum i.e d is: "<<d<<endl;
    cout<<"The global d is: "<<::d;           // :: is scope operator, used for using global variable.

   //************** Float,Double and Long double Literals  ***************

   float e=34.4;                             // note: 34.4 is double(bydefault) but can be passed as a float by putting f at end arthart 34.4f is a float
   long double f=34.4;   
                                             // bydefault C++ compiler cosider decimal number as a double not float
   cout<<"\nThe value of e is: "<<e<<endl<<"The value of f is: "<<f<<endl;

    cout<<"The size of 34.4 is: "<<sizeof(34.4)<<endl;
    cout<<"The size of 34.4F is: "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4f is: "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4L is: "<<sizeof(34.4L)<<endl;
    cout<<"The size of 34.4l is: "<<sizeof(34.4l)<<endl;

    // *************** Reference variables *************
    // Rohan das----> Monty----> Rahu----> kajod
    float x = 355;
    float & y = x;
    cout<<"x: "<<x<<endl;
    cout<<"y: "<<y<<endl;


    // ************** Typecasting(conversion of float into double, conversion of int into float etc) ************
    int p=45;
    float q=45.51;
    cout<<"The value of float(p) is: "<<(float)p<<endl;     // float(A)=(float)A same thing true for int also
    cout<<"The value of (int)q is: "<<int(q)<<endl;
    // int r = int(q);
    int r = (int)q;
    cout<<"The value of r is: "<<r<<endl;

    cout<<"The expression p+q is: "<<p+q<<endl;
    cout<<"The expression p+int(q) is: "<<p+int(q)<<endl;
    cout<<"The expression p+(int)q is: "<<p+(int)q<<endl;

    
    return 0;
}
