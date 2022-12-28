#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node* left;
        node* right;
    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

// node* Insert(int data){
//     node* root = new node(data);
// }

node* recursiveBuild(node* root){
    cout<<"\nEnter the data ";
    int data; cin>>data;
    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }
    cout<<"\nEnter data for inserting in left of "<<data;
    root->left = recursiveBuild(root->left);
    cout<<"\nEnter the data for inserting in right of "<<data;
    root->right = recursiveBuild(root->right);
}
void levelOrder(node* root){
    queue<node*> q;
    q.push(root);
    while (!q.empty())
    {
        node* temp = q.front();
        cout<<temp->data<<" ";
        q.pop();
        if (temp->left!= NULL)
        {
            q.push(temp->left);
        }
        if (temp->right!= NULL)
        {
            q.push(temp->right);
        }
        
    }
    
}
int main(){
    // node* root = new node(10);
    // root->data = 10;
    // root->left = NULL;
    // root->right = NULL;
    // cout<<root->data;
    // node* p = Insert(15);
    // cout<<p->data;
    // root->left = p;
    // cout<<root->left->data;

    // node* root = Insert(10);
    // node* c1 = Insert(20);
    // node* c2 = Insert(30);
    // node* cc1 = Insert(40);
    // node* cc2 = Insert(50);
    // node* dd1 = Insert(60);

    // root->left = c1;
    // root->right = c2;
    // root->left->left = cc1;
    // root->left->right = cc2;
    // root->right->left = dd1;

    // cout<<" "<<root->data;
    // cout<<" "<<root->left->data;
    // cout<<" "<<root->right->data;
    // cout<<" "<<root->left->left->data;
    // cout<<" "<<root->left->right->data;
    // cout<<" "<<root->right->left->data;

    // node* root = NULL;
    // root = recursiveBuild(root);

    node* newroot = recursiveBuild(newroot);
    levelOrder(newroot);
}