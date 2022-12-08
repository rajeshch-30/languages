#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}node;

node* createLinkedList(int data){
    node *start=(node *)malloc(sizeof(node));
    
    start->data=data;
    start->next=NULL;
    return start;
}
void insertNode(node* head,int data){
    node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    node* newNode=(node*)malloc(sizeof(node));
    newNode->data=data;
    newNode->next=NULL;
    temp->next=newNode;
    return;
}
int isPresent(node* head, int key){
    node*temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return 1;
        }
        temp=temp->next;
    }
    return 0;
}
void printLL(node* head){
    if(head==NULL){
        printf("Empty Linked List");
        return;
    }
    node* temp=head;
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}
void deleteNode(node*head,int key){
    if(head==NULL){
        printf("Empty Linked List");
        return;
    }
    if(head->data==key){
        node* temp1=head;
        head=temp1->next;
        free(temp1);
        return;
        
    }
    node* temp=head;
    node* pre=NULL;
    while(temp!=NULL){
        if(temp->data==key){
            pre->next=temp->next;
            free(temp);
            return;
        }
        pre=temp;
        temp=temp->next;
    }
    return ;
}

int main(){
    node* head=createLinkedList(2);
    insertNode(head,3);
    insertNode(head,4);
    insertNode(head,10);
    insertNode(head,15);
    insertNode(head,16);
    insertNode(head,17);
    printf("%d\n",isPresent(head,10));
    printf("%d\n",isPresent(head,11));
    printLL(head);
  deleteNode(head,2);
  deleteNode(head,3);
  deleteNode(head,15);
    printLL(head);
    return 0;
}