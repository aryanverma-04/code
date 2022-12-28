#include<stdio.h>
#include<stdlib.h>
struct circularqueue{
    int size; 
    int f;
    int r;
    int* arr;
};
 
int isEmpty(struct circularqueue *q){
    if(q->r==q->f){
        return 1;
    }
    return 0;
}
 
int isFull(struct circularqueue *q){
    if((q->r+1)%q->size == q->f){
        return 1;
    }
    return 0;
}
void enqueue(struct circularqueue* q, int value){
    if (isFull(q))
    {
        printf("!! The queue is Full !!\n");
    }else{
    q->r= (q->r+1)%q->size;
    q->arr[q->r] = value;
    printf("Enqued element: %d\n", value);
    }
}
int dequeue(struct circularqueue *q){
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
    struct circularqueue* q;
    q->size = 5;
    q->f = q->r = -0;
    q->arr = (int*) malloc(q->size* sizeof(int));
    
    enqueue(q,10);
    enqueue(q,20);
    enqueue(q,30);
    enqueue(q,40);
    printf("Dequeuing element %d\n", dequeue(q));
    printf("Dequeuing element %d\n", dequeue(q));
    printf("Dequeuing element %d\n", dequeue(q));
    printf("Dequeuing element %d\n", dequeue(q));
    // enqueue(q,50);
    // enqueue(q,60);
    // enqueue(q,70);
    // enqueue(q,80);
    // enqueue(q,90);


    // We can easliy insert elements in the queue in place where an element is deleted.

    if(isEmpty(q)){
        printf("Queue is empty\n");
    }else{
    printf("There are some elements in the queue\n");
    }
    if(isFull(q)){
        printf("Queue is full\n");
    }else{
    printf("The queue has some space for inserting elements...");
    }
}