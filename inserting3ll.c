#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
void printList(struct node*);
void addafter(struct node**,int,int);

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

    
    addafter(&head,1,5);
    printList(head);
    

    
}
void printList(struct node*n){
    while ((n!= NULL))
    {
        printf("%d \n",n->data);
        n=n->next;
    }}

void addafter(struct node**q,int loc, int num){
    struct node *temp,*r;
    int i;
    temp=*q;
    //skip to desired portion
    for(i=0;i<loc;i++){
        temp=temp->next;
        //if end of linked list is encountered
        if(temp==NULL){
            printf("There are less than %d elementts in list \n",loc);
            return;
        }
    }
    //insert new node
    r=(struct node*)malloc(sizeof(struct node));
    r->data=num;
    r->next=temp->next;
    temp->next=r;
}