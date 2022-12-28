// C++ program to print left view of Binary Tree
#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left, *right;
};

// A utility function to
// create a new Binary Tree Node
struct Node *newNode(int item)
{
	struct Node *temp = (struct Node *)malloc(
						sizeof(struct Node));
	temp->data = item;
	temp->left = temp->right = NULL;
	return temp;
}

// Recursive function to print
// left view of a binary tree.
void leftViewUtil(struct Node *root,
				int level, int *max_level)
{
	if (root == NULL) return;

	if (*max_level < level)
	{
		cout << root->data << " ";
		*max_level = level;
	}
	leftViewUtil(root->left, level + 1, max_level);
	leftViewUtil(root->right, level + 1, max_level);
	
}

void leftView(struct Node *root)
{
	int max_level = 0;
	leftViewUtil(root, 1, &max_level);
}

int main()
{
	Node* root = newNode(1);
	root->left = newNode(8);
	root->right = newNode(7);
	
	
	root->right->right = newNode(10);
	root->right->left = newNode(9);
	root->right->right->right = newNode(11);

	leftView(root);

	return 0;
}