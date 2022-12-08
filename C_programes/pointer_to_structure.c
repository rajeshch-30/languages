#include<stdio.h>
int main()
{
    struct chaska{
    int roll;
    char name[20];
    float marks;
};

struct chaska s1 = {1,"Rajesh",89.88};
struct chaska *ptr;
ptr = &s1;
printf("%d %s %f\n",s1.roll,s1.name,s1.marks);
printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
printf("%d %s %f\n",(*ptr).roll,(*ptr).name,(*ptr).marks);


}