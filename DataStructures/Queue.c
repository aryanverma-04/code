#include<stdio.h>
#include<stdlib.h>
struct queue{
    int size; 
    int f;
    int r;
    int* arr;
};
 
int isEmpty(struct queue *q){
    if(q->r==q->f){
        return 1;
    }
    return 0;
}
 
int isFull(struct queue *q){
    if(q->r==q->size-1){
        return 1;
    }
    return 0;
}
void enqueue(struct queue* q, int value){
    if (isFull(q))
    {
        printf("!! The queue is Full !!\n");
    }else{
    q->r= q->r+1;
    q->arr[q->r] = value;
    printf("Enqued element: %d\n", value);
    }
}
int dequeue(struct queue *q){
    int a = -1;
    if(isEmpty(q)){
        printf("This Queue is empty\n");
    }
    else{
        q->f++;
        a = q->arr[q->f]; 
    }
    return a;
}


int main(){
    struct queue* q;
    q->size = 4;
    q->f = q->r = -1;
    q->arr = (int*) malloc(q->size* sizeof(int));
    
    enqueue(q,10);
    enqueue(q,20);
    enqueue(q,30);
    enqueue(q,40);
    printf("Dequeuing element %d\n", dequeue(q));
    printf("Dequeuing element %d\n", dequeue(q));
    printf("Dequeuing element %d\n", dequeue(q));
    printf("Dequeuing element %d\n", dequeue(q));


    if(isEmpty(q)){
        printf("Queue is empty\n");
    }else{
    printf("There are some elements in the queue\n");
    }
    if(isFull(q)){
        printf("Queue is full\n");
    }else{
    printf("\nThe queue has some space for inserting elements...");
    }
}