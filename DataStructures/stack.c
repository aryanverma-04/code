#include<stdio.h>
#include<stdlib.h>
struct stack {
    int top;
    int *arr;
    int size;
};

int isEmpty(struct stack * sp){
    if (sp->top == -1)
    {
        return 1;
    }
    return 0;
    
}

int isFull(struct stack * sp){
    if(sp->top==sp->size-1){
        return 1;
    }
    return 0;
}

void push(struct stack * sp, int value){
    if (isFull(sp))
    {
        printf("\n !! Stack Overflow !! \n Cannot puch the value %d into the stack \n",value);
    }
    else{
        sp->top++;
        sp->arr[sp->top] = value;
    }
}
int pop(struct stack * sp){
    if (isEmpty(sp))
    {
        printf(" !! Stack Underflow !! , Cannot pop an element from the stack ");
    }
    else{
        int value = sp->arr[sp->top];
        sp->top--;
        return value;
    }   
};
int peek(struct stack* sp, int i){
    int arrayInd = sp->top -i + 1;
    if(arrayInd < 0){
        printf("Not a valid position for the stack\n");
        return -1;
    }
    else{
        return sp->arr[arrayInd];
    }
}

int stackTop(struct stack* sp){
    return sp->arr[sp->top];
}

int stackBottom(struct stack* sp){
    return sp->arr[0];
}

int main(){

    struct stack * sp;
    sp->size=50;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size *(sizeof(int)));
    printf("\nThis is for checking Empty :%d\n",isEmpty(sp));
    printf("This is for checking Full  :%d\n",isFull(sp));
    push(sp,10);
    push(sp,20);
    push(sp,30);
    push(sp,40); 
    push(sp,50);

    printf("\nStack after pushing an element in the stack \n\n");
    printf("This is for checking Empty :%d\n",isEmpty(sp));
    printf("This is for checking Full  :%d\n",isFull(sp));
    
    printf("\nPopped %d from the stack \n",pop(sp));
    printf("Popped %d from the stack \n",pop(sp));
    printf("Popped %d from the stack \n",pop(sp));
    printf("Popped %d from the stack \n",pop(sp));
    printf("Popped %d from the stack \n",pop(sp));
    printf("Popped %d from the stack \n",pop(sp));

    printf("\nThe value at position %d is %d\n", 1, peek(sp, 1));
    printf("The value at position %d is %d\n", 2, peek(sp, 2));
    printf("The value at position %d is %d\n", 3, peek(sp, 3));
    printf("The value at position %d is %d\n", 4, peek(sp, 4));
    printf("The value at position %d is %d\n", 5, peek(sp, 5));

    printf("\nThe top most value of this stack is %d\n", stackTop(sp));
    printf("The bottom most value of this stack is %d\n", stackBottom(sp));







}