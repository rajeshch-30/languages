// Static variables are allocated memory in data segment, not stack segment
// Static variables (like global variables) are initialized as 0 if not initialized explicitly.
// In C, static variables can only be initialized using constant literals.
// some propertie of static variables resembles with gobal varaibles but they are very much different
// like global varible can be accesed from any function, but  static variables  can only be accessed from the function in which they were declared.

#include <stdio.h>
int fun()
{
    static int count = 0; // static variable can be initialized only once,
                          // and it remain in memory till program run i.e all varialble got destroyed once fun() ends but count will remain in memory
                          //    till main() functions end...
    count++;
    return count;
}
int main()
{
    printf("%d ", fun());
    printf("%d ", fun());
    printf("%d ", fun());
    return 0;
}
 // below program will reinitialize count every time whenever it is called.

   /*

 #include<stdio.h>

int fun()
{
  int count = 0;
  count++;
  return count;
}
  
int main()
{
  printf("%d ", fun());
  printf("%d ", fun());
  return 0;
} 
*/