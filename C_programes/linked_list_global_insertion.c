#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};

struct node *head = NULL;

void insert(int data,int pos)
{    
    struct node *temp1 = (struct node*)malloc(sizeof(struct node*));
    // struct node *temp2 = (struct node*)malloc(sizeof(struct node*));
   
    temp1->data = data;
    temp1->next = NULL;
    if(pos==1){
        // printf("hello\n");
        temp1->next = head;
        head = temp1;
        return;
    }
    struct node *temp2 = head;
    for(int i = 0 ; i<pos-2; i++)
    {   
        //printf("hello");
        temp2 = temp2->next;
    }
        temp1->next = temp2->next;
        temp2->next = temp1;
        return;  
       
}

void print()
{   
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp = head;
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int main()
{
     head = NULL;
     insert(1,1);
     insert(2,2);
     print();
     insert(3,3);
     insert(4,4);
     print();
     insert(5,5);
     print();
     insert(8,2);
     print();

}