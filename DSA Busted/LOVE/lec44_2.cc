//! Circular Linked List
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
    }
};

void insertNode(Node *&tail, int data, int element = 8393)
{
    if (tail == NULL)
    {
        Node *newNode = new Node(data);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        Node *temp = tail;
        while (temp->data != element)
        {
            temp = temp->next;
        }
        Node *newNode = new Node(data);
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void printNode(Node *tail)
{
    Node *temp = tail;
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}

void deleteNode(Node *&tail, int value)
{

    // empty list
    if (tail == NULL)
    {
        cout << " List is empty, please check again" << endl;
        return;
    }
    else
    {
        // non-empty

        // assuming that "value" is present in the Linked List
        Node *prev = tail;
        Node *curr = prev->next;

        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        // 1 Node Linked List
        if (curr == prev)
        {
            tail = NULL;
        }

        // >=2 Node linked list
        else if (tail == curr)
        {
            tail = prev;
        }

        curr->next = NULL;
        delete curr;
    }
}

bool isCircular(Node *tail){
    if (tail == NULL)
    {
        return true;
    }
    
    Node *temp = tail->next;
    while(temp != NULL && temp -> next != tail){
        temp = temp->next;
    }
    if(temp == tail){
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    Node *tail = NULL;
    insertNode(tail, 10);
    insertNode(tail, 20, 10);
    printNode(tail);
    // insertNode(tail, 40, 20);
    // insertNode(tail, 50, 20);
    // // insertNode(tail, 30);
    // printNode(tail);
    // deleteNode(tail, 20);
    // printNode(tail);
    cout<<isCircular(tail);
    return 0;
}