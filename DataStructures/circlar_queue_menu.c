#include<stdio.h>
#include<stdlib.h>
struct circularqueue{
    int size; 
    int f;
    int r;
    int* arr;
};
int choice; 
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
void display(struct circularqueue *q)  
{  
    int i=q->f+1;  
    if(q->f==-1 && q->r==-1)  
    {  
        printf("\n Queue is empty..");  
    }  
    else  
    {  
        printf("\nElements in a Queue are : ");  
        while(i<=q->r)  
        {  
            printf("%d ", q->arr[i]);  
            i=(i+1)%50;  
        }  
    }  
} 

int main(){
    struct circularqueue* q;
    q->size = 50;
    q->f = q->r = -0;
    q->arr = (int*) malloc(q->size* sizeof(int));
    int element;
    do
    {
        printf("\nEnter your choice\n");
        printf("1. Enqueue a element.\n");
        printf("2. Dequeue a element.\n");
        printf("3. Check is queue is empty or not.\n");
        printf("4. Check is queue is full or not.\n");
        printf("5. Display elements in the queue\n");
        printf("6. Exit the program.\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1: 
            printf("Enter the element: ");
            scanf("%d",&element);
            enqueue(q,element);
            printf("\n");
            break;
        case 2: 
            printf("Dequeuing element %d\n", dequeue(q));
            printf("\n");
            break;
        case 3:
        if (isEmpty(q))
        {
            printf("The queue is Empty\n");
        }else{
            printf("The queue is not Empty\n");

        }  
        break;  
        case 4:
        if (isFull(q))
        {
            printf("The queue is Full\n");
        }else{
            printf("The queue is not Full\n");

        }
        break;
        case 5: 
        display(q);
        break;

        case 6:
        printf("Exiting the program..");
        break;
        default:
        printf("wrong choice");
            break;
        }

    } while (choice!=6);
    
    
}