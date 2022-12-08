#include<stdio.h>
struct chaska{
    int roll;
    char name[20];
    float marks;
};

int main()
{
    struct chaska s[3];
    printf("Enter data :");
  for(int i =0;i<3;i++)
  {
    scanf("%d %s %f",&s[i].roll, s[i].name, &s[i].marks);
  }
  for(int i =0;i<3;i++)
  {
    printf("%d %s %f\n",s[i].roll,s[i].name,s[i].marks);
  }
  return 0;
}