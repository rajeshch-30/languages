#include<iostream>
using namespace std;

int main(){
    cout<<"This is the tutorial 9"<<endl;
    
    int age;
    cout<<"Tell me your age: ";
    cin>>age;

    // ******* selection control structurr: if, else if, else ladder **********

    if((age<18) && (age>=1)){cout<<"You are not eligible.";}
    else if(age==18){cout<<"You Might be eligible.";}
    else if(age<1){cout<<"Janam to le le baabu";}
    else{cout<<"You are eligible";}

    // ******* selection control structurr: switch case statement **********
     
     switch (age)
     {
     case 18:
         cout<<"\nYou are 18";
         break;                    // if we don't add break then it will print all later cases.

    case 22 :
         cout<<"\nyou are 22";
         break;

     default:
     cout<<"\nNo such special cases.\n";
         break;
     }

    return 0;
}