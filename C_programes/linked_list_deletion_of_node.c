#include <stdio.h>
#include <stdlib.h>
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

void delete (int n)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node *));
    temp = head;
    for (int i = 0; i < n - 2; i++)
    {
        temp = temp->next;
    }

    struct node *temp2 = temp->next;
    temp->next = temp2->next;
    // free(temp2);
}

int main()
{
    int n;
    // printf("He");
    head = NULL;
    // printf("He");
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
    printf("Enter position : ");
    scanf("%d", &n);
    delete (n);
    print();
}