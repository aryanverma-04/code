#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createnode(int data)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->left = NULL;
    n->right = NULL;
    n->data = data
    return n;
}

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

struct node *search(struct node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (key == root->data)
    {
        return root;
    }
    else if (key < root->data)
    {
        return search(root->left, key);
    }
    else
    {
        return search(root->right, key);
    }
}
struct node * searchIter(struct node* root, int key){
    while(root!=NULL){
        if(key == root->data){
            return root;
        }
        else if(key<root->data){
            root = root->left;
        }
        else{
            root = root->right;
        }
    }
    return NULL;
}
int main()
{

    struct node *p = createnode(5);
    struct node *p1 = createnode(3);
    struct node *p2 = createnode(6);
    struct node *p3 = createnode(1);
    struct node *p4 = createnode(4);

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

    // There are two ways for searching in a binary tree:
    // 1. Recursive search
    // 2. Iterative search

    // 1. Recursive search

    struct node *n = search(p, 6);
    if (n != NULL)
    {
        printf("\nFound : %d", n->data);
    }
    else
    {
        printf("\nElement not found");
    }


    // 2. Iterative search

    struct node *m = searchIter(p, 6);
    if (m != NULL)
    {
        printf("\nFound : %d", m->data);
    }
    else
    {
        printf("\nElement not found");
    }
    return 0;
}