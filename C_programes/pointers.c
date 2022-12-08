#include <stdio.h>
/*         it the following Note completely correct ?
          // Note : We can't declare a function after main or inside main we have to declare function before using i.e. we can't use a function before declaring it .
    */

int swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("From swap (a = %d , b = %d)\n", a, b);
}
// --------------------------------------------------------------------------------------------------------------
int swap1(int arr[])
{
    int temp = arr[0];
    arr[0] = arr[1];
    arr[1] = temp;

    printf("From swap1 (arr[0]= %d , arr[1]= %d)\n", arr[0], arr[1]);
}
//============================================================================================================
/* swap2 will change value of variable in original location also */

void swap2(int *ptra, int *ptrb)
{
    // int *temp = *ptra;                       // Invalid! because ponter variable can't be initiliazed as ramdom memory location(here here '*' ended sambandh of pointer 'ptrb' with variable stored in it i.e *ptrb is now just an  number and temp = *ptra; means we are storing and unoccupied memory locatin in ponter temp which is not possible.

    int temp = *ptra; // first it will deference  ptra because of *
    *ptra = *ptrb;    // it will deference ptra and store value(which is preset in memory location of ptrb) in original location i.e it will change value in main function also.
                      // *ptrb = *temp;                          // Golmal h bhai sab golmal h

    *ptrb = temp;
    printf("From swap2 (a= %d,b= %d\n", *ptra, *ptrb);
}

// --------------------------------------------------------------------------------------------------------

// following code didn't give required output why??
int swap3(int *ptra, int *ptrb)
{

    int *temp = ptra; // memory location of pointer ptra got store in pointer temp which is okay.
    ptra = ptrb;      // memory location of pointer ptrb got stored in pointer ptra.
    ptrb = temp;      // memory location of pointer temp got stored in ponter ptrb

    // in above three steps a separate memory space is used for all the chages which is independent of memory allocated for main() function i.e everything takes place in memory space of pointers, it can't anything in main().

    printf("From swap3 (a= %d,b= %d)\n", *ptra, *ptrb);
}
//----------------------------------------------------------------------------------------------
int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // yes we can define array without mentioning size of array
                                                   // If we  define size of  an array and give input less than defined size then by C standard rest empty memory locations are occupied by zeroes but if we didn't initialize like this i.e we first initialize it and then take input one by one and try to access an empty memory location then it will give some random garabagge output
                                                   /* int array[10];
                                                  array[10] =  {1,2,3,4,5,6,7,8,9,10};   // we can't write like this  */

    // printf("%d ",array[2]);
    printf("array: %d\n", array);   //   will it print MEMORY location of array?  --> yes it will print memory location of first element of array
    printf("*array: %d\n", *array); // name of an array points location of 1st element of array here. here * will de-ference array and print value store in memory loction
    printf("array: %d\n", array);   // differece in memory location is 4 because array is of int type and int take 4 bytes. if array of char types differerce will be only 1;
    printf("array+1: %d\n", array + 1);

    //  array[i] = i[array]              // logically incorrect but c intrepet both same, because c takes array[i]= *(array + i) which is same as  to  *(i + array)=i[array]

    printf("%d\n", 7 [array]);  
    // printf("%d",array[7]);

    int *ptr;
    ptr = array + 2; // in short ptr = &array[0] + 2;
    printf("ptr: %d\n", ptr);
    *ptr = *array + array[3];
    printf("*ptr = *array + array[3] = : %d\n", *ptr);
    printf("*array = array[2] = : %d\n", array[2]);
    printf("*ptr = : %d\n", *ptr);
    printf("memory location( *ptr : array[2] : array[]) is (%d : %d : %d\n)\n", ptr, &array[2], &array[0]);
    printf("---------------------------------------------\n");

    char rixton[] = "rixton is random2@ic"; // in string declaration null character(\0) got addded by default at the end of string.
    char *rix;                              // declaration of a pointer to a variable of type char.
    rix = &rixton[7];
    printf("%c\n", rixton[7]);
    printf("---------------------------------------------\n");
    printf("%c\n", *rix);

    int i = 0;
    while (rixton[i] != '\0')
    {
        printf("%c", rixton[i]);
        i++;
    }

    printf("\n%c\n", rixton[2]);
    
    printf("%s\n", rix); // Note: here rix is memory locatio of rixton[7] and interstingly  %s will print the string starting from memory location.
    /* wow! we a control initial character in printing of string */
    printf("%s\n", rix + 3);

    /* *********************let's see an intersting observation ************************** */

    printf("---------------------------------------------\n");
    // printf("%s", rixton[7]);       // *************it will  not print anything. infact program will not print any command given after this(idk why) ************************

    printf("---------------------------------------------\n");

    printf("%s\n", &rixton[7]);
    printf("hemlo jumtaa\n");

    /* lets insert null character in between the string  */

    char rixton2[] = "rixton is random2\0@ic";
    printf("%s\n", &rixton2[7]); // ("%s",memorylocation address) will print string starting from given address till it encounter null character(\0) .

    // ********** counting no of elements in a string(not having null character in between the string********8
    int j = 0;
    while (rixton[j] != '\0')
    {
        j++;
    }
    printf("No of characters in string rixton : %d\n", ++j);
    printf("No of characters in string rixton : %d\n", j++); // 21 because ++j updated value of j and now value of j is 22 but it's printing 21 because it's post increment.
    printf("=======================================================\n");
    // printf("%d",j);
    /* ****************************8 swapping two numbes ****************************8888*/

    int a, b;
    a = 1, b = 2;
    swap(a, b);
    printf("From main after swap (a = %d , b = %d)\n", a, b);

    int arr[2];
    arr[0] = a;
    arr[1] = b;

    swap1(arr);

    printf("From main after swap1 (arr[0] = %d , arr[1] = %d)\n", arr[0], arr[1]); // wow! we changed elements of arr in main memory location using array;

    // *********************** better way of swaping without using array  *************************************
    // ------------------------------------------------------------------------------------------------------------------

    /*  int *ptra = a, *ptrb = b;                           // ooooh oock it will give warning: initialization makes pointer from integer without a cast [-Wint-conversion]
                                                               int *ptra = a, *ptrb = b;  because pointer varialbe can only be initiliazed as 0 or 1 . i.e you can't store any random location of memory in pointer without storing some data in that location.

         int x,*p=0;                                         //valid declaration of integer variable x , and an integer type pointer variable p and initiliazed p as 0.

         int *q = 564;                                      // invalid ! we can't store any random location in ponter varialbe.
         float flo;
         int *r = &flo;                                    // again invalid we can't store memory location of float varailbe in integer type pointer // program will compile and execute but will show some random unexpected behaviour.
         float *f = &flo;                                   // valid! and perfectly fine.
                                  */

    int *ptra, *ptrb; // declaration of pointer variable ptra, ptrb.
    printf("---------------------------------------------\n");

    swap2(&a, &b); // NooooooooooooooooTeeeeeeeeeeeeeeeeeeeeee // why why! shouldn't be *ptra or a;
                   //------------------------------------------------------------------------------------------------------------
    printf("From main after swap2 (a= %d ,b = %d)\n", a, b);

    printf("---------------------------------------------\n");
    swap3(&a, &b);
    printf("From main after swap3 (a= %d ,b= %d)", a, b);

    return 0;

    // 1. call by value -->> changes will not be reflected outside the function(BUT NOT ALWAYS TRURE LIKE swap1()function).
    // 2. call by reference  -->> changes will be reflected outside the funciton also(BUT NOT ALWAYS TRURE LIKE swap3()function).
    //  statement 1, statememt 2 may be violated if you play some dirty trick like we used array in swap1, and slight twiking in body of swap3() funcition.
    //  note: swap is call be value while swap2,swap1,swap3 are  call by referencce.

    /*
     The call by reference method of passing arguments to a function copies the address of an argument into the formal parameter.
     Inside the function, the address is used to access the actual argument used in the call.
     It means the changes made to the parameter affect the passed argument.
     */
}
