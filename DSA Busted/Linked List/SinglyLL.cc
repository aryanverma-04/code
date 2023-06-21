//! Program to implement Singly Linked List
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

void insertTail(Node *&head, int data)
{
    Node *newNode = new Node(data);
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = NULL;
}

void insertAfterNode(Node *&head, int value, int data)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == value)
        {
            break;
        }
        temp = temp->next;
    }
    if (temp == NULL)
    {
        return;
    }
    Node *newNode = new Node(data);
    newNode->next = temp->next;
    temp->next = newNode;
}
void insertAtPosition(Node *&head, int data, int position)
{
    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    Node *newNode = new Node(data);
    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteNodeAtPositon(Node *&head, int position)
{
    Node *temp = head;
    if (position == 1)
    {
        head = head->next;
        delete temp;
    }
    else
    {
        int cnt = 1;
        Node *prev = NULL;
        while (cnt < position)
        {
            prev = temp;
            cnt++;
            temp = temp->next;
        }
        prev->next = temp->next;
        delete temp;
    }
}

void deleteNodeAtValue(Node *&head, int value)
{
    Node *temp = head;
    Node *prev = NULL;
    while (temp->data != value)
    {
        prev = temp;
        temp = temp->next;
    }
    prev->next = temp->next;
    delete temp;
}
Node* getTail(Node* head){
    while(head->next != NULL){
        head = head->next;
    }
    return head;
}
// General Approach
bool checkLoop(Node* head){
    
    map<Node*, bool> visited;
    Node* temp = head;
    while(temp!=NULL){
        if(visited[temp] == true){
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

// Floyds Cycle Detection Cycle
Node* floydsCycle(Node* head){
    Node* slow = head;
    Node* fast = head;
    while (slow !=NULL && fast!=NULL)
    {
        fast = fast ->next;
        if(fast != NULL){
            fast = fast ->next;
        }
        slow = slow ->next;
        if(slow == fast){
            return fast;
        }
    }
    return NULL;
}

int main()
{
    Node *newNode = new Node(10);
    traverseList(newNode);
    insertHead(newNode, 22);
    traverseList(newNode);
    insertHead(newNode, 111);
    traverseList(newNode);
    insertTail(newNode, 111111);
    traverseList(newNode);
    insertAfterNode(newNode, 10, 555);
    traverseList(newNode);
    insertAtPosition(newNode, 999, 2);
    traverseList(newNode);
    deleteNodeAtPositon(newNode, 6);
    traverseList(newNode);
    deleteNodeAtValue(newNode, 10);
    traverseList(newNode);
    Node* tail = getTail(newNode);
    cout<<tail->data;
    tail->next = newNode;

    // traverseList(newNode);
    cout<<endl<<floydsCycle(newNode);
    return 0;
}