#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
};

void printer(struct node * count){
    while (count!= NULL)
    {
        printf("Element is : %d\n",count->data);

        count = count->next;
    }
    
}

struct node * deletefirst(struct node * head){
    struct node * p = head;
    head = head->next;
    free(p);
    return head;
}

struct node * deleteatindex(struct node * head, int index){
    struct node * p = head;
    struct node * q = head->next;
    for (int i = 0; i < index-1; i++)
    {
        p = p->next;
        q = q->next; 
    }

    p->next = q->next;
    free(q);
    
    return head;
}

struct node * deletelast(struct node * head){
    struct node * p = head;
    struct node * q = head->next;
    while (q->next!= NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}

struct node * deletevalue(struct node * head, int value ){
    struct node * p = head;
    struct node * q = head->next;
    while ( q->data!=value && q->next!= NULL )
    {
        p = p->next; 
        q = q->next;
    }

    if (q->data == value)
    {
        p->next = q->next;
        free(q);
    }
    return head;
}

int main(){
printf("\nThis is a program for deletion in a linked list !!!\n\n");
struct node * head;
struct node * second;
struct node * third;
struct node * fourth;

head = (struct node *) malloc(sizeof(struct node));
second = (struct node *) malloc(sizeof(struct node));
third = (struct node *) malloc(sizeof(struct node));
fourth = (struct node *) malloc(sizeof(struct node));

head->data = 10;
head->next = second;

second->data = 20;
second->next = third;

third->data = 30;
third->next = fourth;

fourth->data = 40;
fourth->next = NULL;

printf("Linked list before deletion is \n");
printer(head);
/*
head = deletefirst(head);

printf("\nLinked list after deletion of first node is \n\n");
printer(head);

head = deleteatindex(head, 1);
printf("\n Linked list after deletion at an index is \n\n");
printer(head);

head = deletelast(head);
printf("\nAfter deleting the Last node the linked list is \n\n ");
printer(head);*/


head = deletevalue(head, 555);
printf("\nlinked list after deleting node with a given value is \n\n");
printer(head);



}