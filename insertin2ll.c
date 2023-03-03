#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
void printList(struct node*);
void append(struct node**,int);

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

    
    append(&head,56);
    printList(head);
    

    
}
void printList(struct node*n){
    while ((n!= NULL))
    {
        printf("%d \n",n->data);
        n=n->next;
    }}

 void append(struct node **head_ref,int new_data){
    struct node *r;
    struct node *new_node =(struct node*)malloc(sizeof(struct node));
    

    if(*head_ref==NULL){
        new_node->data=new_data;
    new_node->next=NULL;
    *head_ref=new_node;
        
    }
    else{
        new_node=*head_ref;
    while (new_node->next!=NULL)//in this loop the new node firstly refers to the headref which is given which means the first node address
    //then in the loop newnode =newnode->next means that now the next node has been called as it is the addres of the whole node.
    {
        new_node=new_node->next;
        printf("%d \n",new_node);
    }
    r=(struct node*)malloc(sizeof(struct node));
    r->data=new_data;
    r->next=NULL;
    new_node->next=r;
 }   }