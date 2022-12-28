#include<stdio.h>
#include<stdlib.h>
struct node{
    int data; 
    struct node* left;
    struct node* right;
};

struct node* createnode(int data){
    struct node* n = (struct node*)malloc(sizeof(struct node));
    n->left = NULL;
    n->right = NULL; 
    n->data = data;
    return n;
}
int main(){
    /*
    // Root node
    struct node* p = (struct node*)malloc(sizeof(struct node));
    p->left = p->right = NULL;
    p->data = 2;

    // second node
    struct node* p1 = (struct node*)malloc(sizeof(struct node));
    p1->left = p1->right = NULL;
    p1->data = 1;

    // Third node
    struct node* p2 = (struct node*)malloc(sizeof(struct node));
    p2->left = p2->right = NULL;
    p2->data = 4;

    // Linking the root and second node and third node  
    p->left = p1;
    p->right = p2;*/

    // This method is very repeating so we will create an function 

    struct node* p = createnode(2);
    struct node* p1 = createnode(1);
    struct node* p2 = createnode(4);
    // Linking the root and second node and third node  
    p->left = p1;
    p->right = p2;
    return 0;
}