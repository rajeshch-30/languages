# include<iostream>
using namespace std;
int glo=6;

void sum(){
  int a;
  cout<<"\n glo="<<glo;
  }                               //no need to write retun zero because it's void function


int main(){                     // program execution always start from int main function
int glo=1;
                                //int glo=2; [it's wrong because glo is already declared to change it locally use glo only i.e without int
  glo=2;
  cout<<" glo="<<glo;

    int a=4;
    int b=5,c=3;
    float d=3.235,e=2.335;

    sum();                           // when we call a function execution stops for sometimes and goes in that function and execute that and first try to find glo locally in sum if it didn't find glo locally it will look for globally  hence glo=6 is printed
 cout<<"\n hello Ramesh"<<".\n a is equal to "<<a<<".\n b is equal to "<<b<<".\n c is equal to "<<c;
   cout<<"\n The value of d is "<<d<<"\n The value of e is "<<e;
   char f='f';
   cout<<"\n The meaning of f is "<<f;
   cout<<"\n glo="<<glo;

   bool is_true = true;
   cout<<"\n bool="<<is_true;
   bool is_false = false;
   cout<<"\n bool="<<is_false;

   
    return 0;
}

                                  // local and global variable can of same name but local variable will have ultimate authority
                                  // because execution starts from int main() function if executor didn't found required varaable locally then it will look for golbal variabel otherwise not.
                                  // variables are case sensitive and can start from alphabets and and undrscore but not numbers but numbers can be used in between and end arthart numbers can't be used in starting of name
                                  // name of variable can vary from 1 to 255 character
                                  // space,special character and reserved words can't be used.