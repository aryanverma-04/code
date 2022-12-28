#include<stdio.h>
#include<stdlib.h>

struct node{
    int data ;
    struct node * next;
};
struct node* head;
int choice;
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
    int element,index;
    do
    {
        printf("\nEnter your choice\n");
        printf("1. Print the elements in Linked List.\n");
        printf("2. Insert at first.\n");
        printf("3. Insert in Between.\n");
        printf("4. Insert at end.\n");
        printf("5. Delete First node\n");
        printf("6. Exit the program.\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1: 
            printer(head);
            break;
        case 2: 
            printf("Enter the element\n");
            scanf("%d",&element);
            insertionatfirst(head,element);
            break;

        case 3:
        printf("Enter the element\n");
        scanf("%d",&element);
        printf("Enter the Index\n");
        scanf("%d",&index);
        insertionatbetween(head,element,index);
        break; 

        case 4:
        printf("Enter the element\n");
        scanf("%d",&element);
        insertionatend(head,element);   

        case 5: 
        deletefirst(head);
           
        case 6:
        printf("Exiting the program..");
        break;
        default:
        printf("wrong choice");
            break;
        }

    } while (choice!=6);
    
    
    return 0;
}