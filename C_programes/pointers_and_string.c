#include <stdio.h>
void print(char str[3])  // arrays are always passed call be reference i.e here char *str[3] is passed as a pointer variable char *str.
{
    while (*str != '\0')
    {
        printf("%c", (str));
        str++; // valid because str is pointer not an array.
    }
}

int main()
{
    char str[6] = "Mridul";  // will give unexpected result because we need n+1 space for storing n characters i.e one for null character.
    char str1[7] = "Mridul"; // perfectly fine.
    printf("%s\n", str);
    printf("%s\n", str1); // yup.
                          //   str++;      // invalid
    char *strp = "Mridul";
    printf(str1);
    printf("\n");
   

    //------------------------------------------------------
    char str2[4] ={'1','a','b','k'};  // inverted comma to mat bhul jan re .
    printf("%s\n",str2);
}