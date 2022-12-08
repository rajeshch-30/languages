// inserting a node in the begining

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *head; // glbal variables can be accessed from anywhere

void insert(int x)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = head;
    head = temp;
    // (*temp).next = NULL;
    // if (head != NULL)
    //     temp->next = head;
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

int main()
{
    /*  head = NULL;   // can't be done because we changed memory lacation later using malloc function */
    head = (struct node *)malloc(sizeof(struct node));
    head = NULL; // empty list.

    int n, x;
    printf("Enter value of n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter number : ");
        scanf("%d", &x);
        insert(x);
        print();
    }
    free(head);

    return 0;
}