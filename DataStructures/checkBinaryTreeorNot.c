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

void inorder(struct node* root){
    if (root!= NULL)
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
    
}

int isbst(struct node* root){
    static struct node* prev = NULL;
    if (root!= NULL)
    {
        if(!isbst(root->left)){
            return 0;
        }
        if (prev!= NULL && root->data <= prev->data)
        {
            return 0;
        }
        prev = root;
        return isbst(root->right);
        
    }
    else{
        return 1;
    }
}
int main(){

    struct node* p = createnode(5);
    struct node* p1 = createnode(3);
    struct node* p2 = createnode(6);
    struct node* p3 = createnode(1);
    struct node* p4 = createnode(4);

    // The Tree looks like this
    //         5
    //        /  \
    //      3     6
    //     / \   
    //    1   4

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    inorder(p);
    if (isbst(p))
    {
        printf("\nGiven tree is a binary Search Tree");
    }
    else
    {
        printf("\n Not a Binary Search Tree");
    };
    return 0;
}  