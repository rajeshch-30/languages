#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* head;

void insert(int data)
{
    struct node * temp = (struct node*)malloc(sizeof(struct node *));
    temp->data = data;
    temp->next = head;
    head = temp;
    return; 
}

void print()
{
    struct node *temp = head;
    printf("The list is : ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
        // break;
    }
    printf("\n");
}
 
void revrec(struct node *p)
{   
    // struct node*temp = temp;
    if(p == NULL ){
        return;
    }

    printf("%d ",p->data);
    // p = p->next;
    revrec(p->next);
    printf("%d ",p->data);
}
int main(){
    head = NULL;
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    revrec(head);
    // print();




    return 0;
}