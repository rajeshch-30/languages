#include<stdio.h>

    struct student{
        int roll;               // we can't initialized any data type here because no memory is allocated here i.e int roll = 10 ; is invalid.
        char name[20];        // roll, name,marks are members
        float marks; 
    } sout1 = {5}  ;                 // can be also written as } s1; ---> after that there is no need of declaration in main funciton
    struct student sout2 = {1,"rajesh",90.00};
    // struct student is a data type
    // student is name/tag of student which is optional if we decalare sturct outside the main function otherwise it's needed if we declrare varialbe inside main
    // sturcture is an user defined data type
    // till now no memory is allocated for struct because we haven't declared valiable till now
    int main()
{
    struct student s1,s3; // now memory got allocated
    struct student s2 ={2,"Ramesh",89.80};
    scanf("%d",&s1.roll);
    scanf("%s",s1.name);
    scanf("%f",&s1.marks);
    s3 = sout2;
    printf("%d %s %f\n",s2.roll,s2.name,s2.marks);
    printf("%d %s %f\n",sout1.roll, sout1.name, sout1.marks);
    printf("%d %s %f\n",s1.roll, s1.name, s1.marks);
    printf("%d %s %f\n",s3.roll, s3.name, s3.marks);
    
}