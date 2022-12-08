#include<iostream>
using namespace std;

int main()
{ int num1, num2, num3;
 cout<<" Enter the value of num1: ";     // "<<" is called insertion operator
 cin>>num1;                              // ">>" is called exraction operator
 cout<<"\n Enter the value of num2: ";
 cin>>num2;
 cout<<"\n Enter the value of num3: ";
 cin>>num3;
 
 cout<<"\n Output: "<<num1*num2+num2*num3+num3*num1;   
    return 0;
}
                         
                            //execution using command prommt or terminal
                         /*             Microsoft Windows [Version 10.0.19044.1586]
                         (c) Microsoft Corporation. All rights reserved.
                         
                         C:\Users\91968>cd documents
                         
                         C:\Users\91968\Documents>cd C++
                         
                         C:\Users\91968\Documents\C++>g++ tut5.cpp -o tut5
                         
                         C:\Users\91968\Documents\C++>tut5
                          Enter the value of num1: 1
                         
                          Enter the value of num2: 4
                         
                          Enter the value of num3: 8
                         
                          Output: 44
                         C:\Users\91968\Documents\C++>*/

                                            // Run code in vs code without using Run botton
                                            
                                            /* 1. Open new terminal from top bar.
                                               Copyright (C) Microsoft Corporation. All rights reserved.
                                            Try the new cross-platform PowerShell https://aka.ms/pscore6
                                            
                                            PS C:\Users\91968> cd documents
                                            PS C:\Users\91968\documents> cd c++
                                            PS C:\Users\91968\documents\c++> .\tut5.cpp      //compilation
                                            PS C:\Users\91968\documents\c++>
                                                                           > .\a.exe         //Execution
                                             Enter the value of num1: 1
                                            
                                             Enter the value of num2: 2
                                            
                                             Enter the value of num3: 3
                                            
                                             Output: 11
                                            PS C:\Users\91968\documents\c++> */