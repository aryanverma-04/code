#include<stdio.h>
#include<stdlib.h>

struct node{
    int data ;
    struct node * next;
};

void linkedListTraversal(struct node *head){
    struct node *ptr = head;
    do{
        printf("Element is %d\n", ptr->data);
        ptr = ptr->next;
    }while(ptr!=head);
}

struct node * insertAtFirst(struct node *head, int data){
    struct node * ptr = (struct node *) malloc(sizeof(struct node));
    ptr->data = data;
 
    struct node * p = head->next;
    while(p->next != head){
        p = p->next;
    }
    // At this point p points to the last node of this circular linked list
 
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
 
}


int main(){
    printf("\nProgram for Circualar linked list  \n\n");
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
    fourth->next = head;
    printf("Linked lisft before insertion \n\n");
    linkedListTraversal(head);
    head = insertAtFirst(head,0);

    printf("\nLinked lisft After insertion \n\n");
    linkedListTraversal(head);



}    




