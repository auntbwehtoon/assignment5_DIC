//
// Created by DELL on 1/3/2023.
//

#include "stdio.h"
#include "stdlib.h"

#define Max_GG 10

struct stack{
    int data[Max_GG];
    int top;
};

int index=-1;

int IsStackIsFull(struct stack *myStack){
    if(myStack->top==Max_GG-1){
        return 1;
    }
    else{
        return 0;
    }
}

int IsStackIsEmpty(struct stack *myStack){
    if(myStack->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}

void create_emptyStack(struct stack *myStack){
    myStack->top=-1;
}

void pushToStack(struct stack *myStack, int value){
    if(IsStackIsFull(myStack)){
        printf("Stack is full!!\n");
    }
    else{
        myStack->top++;
        myStack->data[myStack->top]=value;
        index++;
    }
}

void popFromStack(struct stack *myStack){
    if(IsStackIsEmpty(myStack)){
        printf("Stack is empty!!\n");
    }
    else{
        while (myStack->top!=-1){
            printf("Data : %d At index : %d\n",myStack->data[myStack->top],index);
            myStack->top--;
            index--;
        }
    }
}



int main(){
    struct stack *myStack = (struct stack*) malloc(sizeof (struct stack));

    create_emptyStack(myStack);

    pushToStack(myStack,10);
    pushToStack(myStack,20);
    pushToStack(myStack,30);
    pushToStack(myStack,40);
    pushToStack(myStack,50);

    popFromStack(myStack);

}