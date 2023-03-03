#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
void printList(struct node*);
void push(struct node**,int);

// inserting node from head

void main(){
    struct node *head=NULL;
    struct node *second = NULL;
    struct node *third =NULL;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    head->data=1;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=NULL;

    
    push(&head,56);
    printList(head);
    

    
}
void printList(struct node*n){
    while ((n!= NULL))
    {
        printf("%d \n",n->data);
        n=n->next;
    }}
void push(struct node** head_ref,int new_data) {
    struct node *new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=new_data;
    new_node->next=*head_ref;
    *head_ref=new_node;
}