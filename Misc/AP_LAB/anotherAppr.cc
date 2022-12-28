//! Time Complexity - Since we are traversing all the nodes of the tree time complexity is O(n).
//! Space Complexity - O(n)

#include <bits/stdc++.h>
using namespace std;
class TreeNode
{
public:
    int val;
    TreeNode *left, *right;
    TreeNode(int val)
    {
        this->val = val;
        left = right = NULL;
    }
};
int maxLevel = -1;
void leftview_logic(TreeNode *node, int level)
{
    if (node == NULL)
        return;
    if (level > maxLevel)
    {
        cout << node->val << " ";
        maxLevel = level;
    }
    leftview_logic(node->left, 1 + level);
    leftview_logic(node->right, 1 + level);
}
void leftView(TreeNode *root)
{
    leftview_logic(root, 0);
}
int main()
{

    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(8);
    root->right = new TreeNode(7);
    root->right->left = new TreeNode(9);
    root->right->right = new TreeNode(10);
    root->right->right->right = new TreeNode(11);
    leftView(root);

    return 0;
}
