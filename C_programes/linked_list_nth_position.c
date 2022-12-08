#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *insert(struct node *head, int x)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = head;
    return temp;
}

void print(struct node *head)
{
    printf("The list is : ");
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    return;
}

void insert_Nth_position(struct node **head, int x, int n)
{
    struct node *tempreco = (struct node *)malloc(sizeof(struct node));
    tempreco = *head;            // head will change so we stored in it for future purpose
    struct node *prev = (struct node *)malloc(sizeof(struct node));
    for (int i = 0; i < n - 1; i++)
    {
        prev = *head;
        (*head) = (*head)->next;
    }
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = *head;
    *head = temp;
    prev->next = (*head);
    *head = tempreco;
}
int main()
{
    struct node *head = NULL;
    int n, x, pos;
    printf("Enter number of node you wana create : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            printf("Enter first num : ");
        }
        else
        {
            printf("\nEnter next num : ");
        }
        scanf("%d", &x);
        head = insert(head, x);
        print(head);
    }

    printf("\npositon : ");
    scanf("%d", &pos);
    printf("\nEnter num to insert at Nth position : ");
    scanf("%d", &x);
    insert_Nth_position(&head, x, pos);

    print(head);
}