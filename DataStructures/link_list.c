#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};

void printer(struct Node *ptr){
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
    
}

int main(){

struct Node* head;
struct Node* second;

// Memory allocation in Heap for the elements in the structure.

head = (struct Node*) malloc(sizeof(struct Node));
second = (struct Node*) malloc(sizeof(struct Node));

// Linking the elements in the list.

head->data = 10;
head->next = second;

second->data = 20;
second->next = NULL;

printer(head);



}