#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
void printList(struct node*n){
    while ((n!= NULL))
    {
        printf("%d \n",n->data);
        n=n->next;
    }
    }
    // in this loop first the head as pointer is called first time giving the address of the heAD And data 
    // after which print the data inside head and in n the address of next node has been initialized then again this process for third
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

    printList(head);

    
}


