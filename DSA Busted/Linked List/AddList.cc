//! This program is to implement experiment 2 
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertHead(Node *&head, int data)
{
    Node *newNode = new Node(data);
    if(head == NULL){
        head = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

void traverseList(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void reverseList(Node *&head)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *forward = NULL;
    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    head = prev;
}
Node* addList(Node* first, Node* second){
    Node* ans = NULL;
    int carry = 0;
    while (first != NULL || second != NULL || carry != 0)
    {
        int sum = 0;
        if(first != NULL)
            sum += first->data;
        if(second != NULL)
            sum += second->data;
        if(carry!= 0)
            sum += carry;
        int digit = sum%10;
        carry = sum/10;
        insertHead(ans, digit);
        if(first!= NULL)
            first = first->next;
        if(second != NULL)
            second = second->next;
    }
    // reverseList(ans);
    return ans; 
}
int main()
{
    Node *LL1 = new Node(1);
    insertHead(LL1, 6);
    insertHead(LL1, 2);
    insertHead(LL1, 3);
    Node *LL2 = new Node(4);
    insertHead(LL2, 5);
    insertHead(LL2, 6);

    Node* ans = addList(LL1, LL2);
    cout<<"Linked list after performing the operations is ";
    traverseList(ans);

}
