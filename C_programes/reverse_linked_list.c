#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head;

void insert(int data)
{
    struct node *temp1 = (struct node *)malloc(sizeof(struct node *));
    struct node *temp2 = (struct node *)malloc(sizeof(struct node *));
    // struct node *temp = head;
    temp1->data = data;
    temp1->next = NULL;
    temp2 = head;
    if (temp2 == NULL)
    {
        temp2 = temp1;
        head = temp2;
        return;
    }

    while (temp2->next != NULL)
    {

        // temp2 = temp;
        temp2 = temp2->next;
    }

    temp2->next = temp1;
}

void print()
{
    struct node *temp = (struct node *)malloc(sizeof(struct node *));
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
    return;
}

void reverse()
{
    struct node *curr,*prev,*next;
    prev = NULL;
    curr = head;
    while(curr != NULL)
    {   
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        
    }
    head = prev;
}
int main()
{
    head = NULL;
     insert(1);
    // printf("He");
    // print();
    insert(2);
    // printf("He");
    // print();
    insert(3);
    // print();
    insert(4);
    insert(5);
    print();
    reverse();
    print();
}