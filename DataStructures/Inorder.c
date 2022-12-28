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

void preorder(struct node* root){
    if (root!= NULL)
    {
        preorder(root->left);
        preorder(root->right);
        printf("%d ",root->data);
    }
    
}
int main(){

    struct node* p = createnode(4);
    struct node* p1 = createnode(1);
    struct node* p2 = createnode(5);
    struct node* p3 = createnode(2);
    struct node* p4 = createnode(6);

    // The Tree looks like this
    //          4
    //        /  \
    //      1     6
    //     / \   
    //    5   2

    p->left = p1;
    p->right = p4;
    p1->left = p2;
    p1->right = p3;

    preorder(p);
    return 0;
}