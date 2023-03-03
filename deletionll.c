#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
void printList(struct node*);
void deletenode(struct node**, int);//use this function to delete the first occurence of the key in the list.
// void deletefirst(struct node**);
// inserting node from head
void delatend( struct node**);
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

    
    // deletenode(&head,2);
    // deletefirst(&head);
    // delatend(&head);
    printList(head);
    

    
}
void printList(struct node*n){
    while ((n!= NULL))
    {
        printf("%d \n",n->data);
        n=n->next;
    }}
 void deletenode(struct node**head_ref, int key){
    struct node *temp=*head_ref,*prev;
  if(temp!=NULL && temp->data==key){
    *head_ref=temp->next;
    free(temp);
    return;
  }  
  while (temp!=NULL && temp->data!=key)
  
  {
        prev=temp;
        temp=temp->next;
  }
  if (temp==NULL)
  {
    return;
  }
  prev->next=temp->next;
  free(temp);

 }
//  void deletefirst(struct node**head){
//     struct node *start;
//     if(head==NULL){
//         printf("underflow \n");
//         return;
//     }
//     *start=*head;
//     *head=start->next;
//     free(start);
    
//  }
// void delatend(struct node**head_ref){
//     struct node *ptr,*cpt;
//     if(head_ref==NULL){
//         printf("underflow \n");
//         return;
//     }
//     *ptr=**head_ref;
//     while(ptr->next!=NULL){
//         cpt=ptr;
//         ptr=ptr->next;
//     }
//     cpt->next=NULL;
//     free(ptr);
// }