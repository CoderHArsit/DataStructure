#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *next;
};
void display(struct node*last);
void addtoempty(struct node*last,int data);
void addatend(struct node*last,int data);
void addatbeg(struct node*last,int data);
void addafter(struct node*last,int data,int item);
void del(struct node*last,int data);
void main(){
    int data,item;
    struct node*last=NULL;
    // addtoempty(last,8);
    addatbeg(last,74);
    addatbeg(last,74);
    addatbeg(last,74);
    addatbeg(last,6);
    display(last);

}
void display(struct node*last){
    struct node*p;
    // if(last==NULL){
        // printf("List is empty \n");
        // return;
    // }
    p=last->next;
    do{
        printf("%d",p->info);
        p=p->next;
    }while(p!=last->next);
    printf("\n");
}
void addatend(struct node*last, int data){
    struct node *tmp;
    tmp=(struct node *)malloc(sizeof(struct node));
    tmp->info=data;
    tmp->next=last->next;
    last->next=tmp;
    last=tmp;
}
void addafter(struct node*last,int data,int item){
    struct node*tmp,*p;
    p=last->next;
    do{
        if(p->info==item){
            tmp=(struct node*)malloc(sizeof(struct node));
            tmp->info=data;
            tmp->next=p->next;
            p->next=tmp;
            if(p==last)
                last=tmp;
        return;}
        p=p->next;
    }while(p!=last->next);
    printf("%d not present in the list \n",item);
}
void addatbeg(struct node*last,int data){
    struct node *tmp;
    tmp=(struct node*)malloc(sizeof(struct node));
    tmp->info=data;
    tmp->next=last->next;
    last->next=tmp;
    
}
void addtoempty(struct node*last,int data){
    struct node*tmp;
    tmp=(struct node*)malloc(sizeof(struct node));
    tmp->info=data;
    last=tmp;
    last->next=last;
}
