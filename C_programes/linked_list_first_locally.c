#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node * insert1(struct node *head,int x )
{   
   
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = head;    // here head is locally variable of insert because it's passed by value
    // head = temp;

    // return head;
    return temp;

}

// void insert(struct node** head, int x)
// {
//     struct node *temp;
//     temp = (struct node *)malloc(sizeof(struct node));
  
//     (temp)->data = x;
//     temp->next = (*head);
 
//     *head = temp;

//    return ;

// }

void print(struct node *head)
{
    printf("List is : ");
    while (head != NULL)
    {
        printf("%d ", head->data); 
        head = head->next;               // we can traverse using head itself because it's local variable print changes in it won't be reflected in main function
    }
    printf("\n");
}

int main()
{
    struct node *head = NULL; // head is declared locally in main function.

    int n, x;
    printf("Enter no of elements : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {    
        printf("Enter number : ");
        scanf("%d", &x);
        // insert(&head,x);
       head = insert1(head,x);
        print(head);
    }
    return 0;
}