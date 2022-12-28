#include<stdio.h>
#include<stdlib.h>

struct node{
    int data ;
    struct node * next;
};


void printer(struct node *ptr){
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
    
}

struct node * insertionatfirst(struct node* head, int data){
    struct node * ptr = (struct node *) malloc (sizeof(struct node));
    ptr->next = head;
    ptr->data = data;
    return ptr;

}

struct node * insertionatbetween(struct node* head, int data, int index){
    struct node * ptr = (struct node *) malloc (sizeof(struct node));
    struct node * p = head;
    int i = 0;
    while (i!=index-1)
    {
        p = p->next;
        i++;
    }
    ptr->data=data;
    ptr->next= p->next;
    p->next= ptr;
    return head;
    
}

struct node * insertionatend(struct node* head, int data){
    struct node * ptr = (struct node *) malloc (sizeof(struct node));
    ptr->data=data;
    struct node* p = head;
    while (p->next!=NULL)
    {
        p = p->next;

    }
    p->next= ptr;
    ptr->next = NULL;
    return head; 
}


struct node * insertAfterNode(struct node *head, struct node *prevNode, int data){
    struct node * ptr = (struct node *) malloc(sizeof(struct node));
    ptr->data = data;
 
    ptr->next = prevNode->next;
    prevNode->next = ptr;
 
    return head;
}


int main(){
    printf("Program for linked list insertion \n\n");
    struct node* head;
    struct node* second;
    struct node* third;
    struct node* fourth;
    

    head = (struct node*) malloc(sizeof(struct node));
    second = (struct node*) malloc(sizeof(struct node));
    third = (struct node*) malloc(sizeof(struct node));
    fourth = (struct node*) malloc(sizeof(struct node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = NULL;

    printer(head);
    
    head = insertionatfirst(head,0);
    printf("\nAfter insertion: \n");
    printer(head);

    printf("\nAfter insertion at index : \n");
    head = insertionatbetween(head, 25,3);
    printer(head);

    printf("\nAfter insertion at end : \n");
    head = insertionatend(head, 50);
    printer(head);

    printf("\nAfter insertion after node : \n");
    head = insertAfterNode(head, second, 111);
    printer(head);

    
    
    


}