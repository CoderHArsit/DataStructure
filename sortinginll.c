#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *link;
};
void insert_s(struct node *start,int data);

void display(struct node*start);
void main(){
    int data;
    struct node*start=NULL;
    start=(struct node*)malloc(sizeof(struct node));
    start->info=4;
    start->link=NULL;
    insert_s(start,4);
    insert_s(start,1);
    insert_s(start,7);
    insert_s(start,8);
    insert_s(start,43);
    insert_s(start,11);   
    display(start);

}
void insert_s(struct node *start,int data){
    struct node*p,*tmp;
    tmp=(struct node*)malloc(sizeof(struct node));
    tmp->info=data;
    //list is empty or new node to be added before first node
    if(start==NULL || data < start->info){
        tmp->link=start;
        start=tmp;
        return;
    }
    else{
        p=start;
        while(p->link!=NULL && p->link->info<data)
          { p=p->link;}
        tmp->link=p->link;
        p->link=tmp;
        
    }
}
void display(struct node*start)
{
    struct node*q;
    // if(start==NULL){
        // printf("List is empty \n");
        // return;
    // }
    q=start;
    printf("List is : \n");
    while(q!=NULL){
        printf("%d \n",q->info);
        q=q->link;
    }
    printf("\n");
}