#include<stdio.h>
#include<stdlib.h>
//ccreation of the node
struct node
{
    int data;
    struct node *next;
};
void push(struct node **head_ref,int new_data);
void reverse(struct node **head_ref);
void printList(struct node *n);

void main()
{
    struct node *head=NULL;
    int n,i;
    printf ("number of elements:");
    scanf("%d",&n);
   
    for(i=0;i<n;i++)
    {
      int c;
      printf("enter the element\n");
      scanf("%d",&c);
      push(&head,c);
    }
    reverse(&head);
    printList(head);

    
}
void push(struct node **head_ref,int new_data) {
    struct node *new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=new_data;
    new_node->next=*head_ref;
    *head_ref=new_node;
}
void reverse(struct node** head_ref)
{
    struct node* prev = NULL;
    struct node* current = *head_ref;
    struct node* next = NULL;
    while (current != NULL) {
        // Store next
        next = current->next;
 
        // Reverse current node's pointer
        current->next = prev;
 
        // Move pointers one position ahead.
        prev = current;
        current = next;
    }
    *head_ref = prev;
}
void printList(struct node*n){
    struct node* temp=n;
    while ((temp != NULL))
    {
        printf("%d \n",n->data);
        temp=temp->next;
    }}