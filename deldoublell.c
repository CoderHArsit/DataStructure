#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node*prev;
    struct node*next;
};
void reverse(struct node*);
void del(struct node **head_ref,int data);
void push(struct node**,int);
void printlist(struct node*);
void main(){
    struct node *head=NULL;
    push(&head,5);
    push(&head,0);
    push(&head,8);
    push(&head,7);
    push(&head,65);
    push(&head,23);
    printf("enter the element\n");
    int n;
    scanf("%d",&n);
    push(&head,n);
    del(&head,7);
    del(&head,0);
    del(&head,9);
    reverse(head);
    printf("list of elements after adding the elements are:\n");
    printlist(head);
     


}
void push(struct node** head_ref, int new_data)
{
    /* 1. allocate node */
    struct node* new_node
        = (struct node*)malloc(sizeof(struct node));
 
    /* 2. put in the data  */
    new_node->data = new_data;
 
    /* 3. Make next of new node as head and previous as NULL
     */
    new_node->next = (*head_ref);
    new_node->prev = NULL;
 
    /* 4. change prev of head node to new node */
    if ((*head_ref) != NULL)
        (*head_ref)->prev = new_node;
 
    /* 5. move the head to point to the new node */
    (*head_ref) = new_node;
}
 void printlist(struct node *head_ref){
    while ((head_ref!= NULL))
    {
        printf("%d \n",head_ref->data);
        head_ref=head_ref->prev;
    }
 }
 void del(struct node **head_ref,int data){
    struct node *tmp;
    if((*head_ref)==NULL){
        printf("List is empty \n");
          return;
    }
    if((*head_ref)->next==NULL)//deletion of only node
    {
        if((*head_ref)->data==data){
            tmp=*head_ref;
            *head_ref=NULL;
            free(tmp);
            return;
        }
        else{
        printf("element not found \n");
   return; }}
    if((*head_ref)->data==data){
        //deletion of first node
        tmp=(*head_ref);
        (*head_ref)=(*head_ref)->next;
        (*head_ref)->prev=NULL;
        free(tmp);
        return;
    }
    tmp=(*head_ref)->next;
    while(tmp->next!=NULL){
        if(tmp->data==data){
            tmp->prev->next=tmp->next;
            tmp->next->prev=tmp->prev;
            free(tmp);
            return;
        }
        tmp=tmp->next;
    }
    if(tmp->data==data){
        tmp->prev->next=NULL;
        free(tmp);
        return;
    }

 }
 void reverse(struct node*head_ref){
    struct node *p1,*p2;
    p1=head_ref;
    p2=p1->next;
    p1->next=NULL;
    p1->prev=p2;
    while(p2!=NULL){
        p2->prev=p2->next;
        p2->next=p1;
        p1=p2;
        p2=p2->prev;
    }
    head_ref=p1;
 }