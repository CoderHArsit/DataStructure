#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int stack_arr[MAX];
int top=-1;
void push(int item);
int pop();
int peek();
int isEmpty();
int isFull();
void display();

void main(){
    int choice,item;
    while(1){
        printf("1.push \n");
        printf("2.Pop \n");
        printf("3.Dislay the top element \n");
        printf("4.Display thhr top elements \n");
        printf("5.Quit \n");
        printf("Enter the choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                 printf("enter the item to be pushed: ");
                 scanf("%d",&item);
                 push(item);
                 break;
            case 2:
                item=pop();
                printf("the item popped is: %d \n",item);
                break;
            case 3:
                printf("Item at the top is: %d\n",peek());
                break;
            case 4:
                display();
                break;
            case 5:
              exit(1);
              default:
              printf("wrong choice \n");             
        }
    }
}
void push(int item){
    if(isFull()){
        printf("stack overflow\n");
        return;
    }
    top=top+1;
    stack_arr[top]=item;
}
int pop(){
    int item;
    if(isEmpty()){
        printf("stack underflow\n");
        exit(1);
    }
    item=stack_arr[top];
    top=top-1;
    return item;
}
int peek(){
    if(isEmpty()){
        printf("stack underflow\n");
        exit(1);

    }
    return stack_arr[top];
}
int isEmpty()
{

    if(top==-1){
        return 1;}
        else {
        return 0;
    }
}
int isFull(){
    if(top==MAX-1){
        return 1;
    }
    else {
        return 0;
    }
}
void display(){
    int i;
    if(isEmpty()){
        printf("Stack is empty\n");
        return;
    }
    printf("stack elements : \n\n");
    for(i=top;i>=0;i--)
       {printf("%d\n",stack_arr[i]);
       printf("\n");}
}