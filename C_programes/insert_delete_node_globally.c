#include<stdio.h>
#include<stdlib.h>

struct link {
    char data;
    struct link * next;
};

struct link *head;

int  main()
{
  head = (struct link*)malloc(sizeof(struct link));
  head = NULL;
  struct link * temp = (struct link *)malloc(sizeof(struct link));
  char arr[] = {'a','b','c','d','e','0/'};
  int i = 0;
  while(arr[i] != 0)
  {
      temp->data = arr[i];
      temp->next = head;
      head = temp;
      i++;
  }
  

    return 0;
}