//! DOUBLY Linked List
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    Node* next;
    Node* prev;
    int data;
    Node(int data){
        this->next = NULL;
        this->prev = NULL;
        this->data = data;
    }
};
void insertHead(Node* &head, int data){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        return;
    }
    Node* newNode = new Node(data);
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}

void traversal(Node* head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
void insertTail(Node* &head,int data){
    Node* temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    Node* newNode = new Node(data);
    temp->next = newNode;
    newNode->prev = temp;
}
void insertAtIndex(Node* &head, int data, int index){
    Node* curr = head;
    Node* prev = curr;
    if(index == 1){
        insertHead(head, data);
        return;
    }
    index--;
    while (index--)
    {
        prev = curr;
        curr = curr->next;
        if(curr->next == NULL){
            cout<<"Insert tail called !"<<endl;
            insertTail(head, data);
            return;
        }
    }
    Node* newNode = new Node(data);
    newNode->prev = prev;
    newNode->next = curr;
    curr->prev = newNode;
    prev->next = newNode;
}
int deleteNodeAtValue(Node* &head, int value){
    Node* temp = head;
    Node* prev = NULL;
    while (temp!= NULL)
    {
        if(temp->data == value){
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    if(temp == NULL) return -1;
    if(temp->next == NULL){
        prev->next = NULL;
        int d = temp->data;
        delete temp;
        return d;
    }
    // cout<<temp->data;
    // cout<<prev->data;
    prev->next = temp->next;
    temp->next->prev = prev;
    int d = temp->data;
    delete temp;
    return d;
}
int main()
{
    Node* head = NULL;
    insertHead(head, 10);
    // cout<<head->data;
    insertHead(head, 20);
    insertHead(head, 30);
    insertTail(head, 49);
    insertAtIndex(head, 222, 1);
    traversal(head); cout<<endl;
    cout<<deleteNodeAtValue(head, 49)<<endl;
    traversal(head);
    return 0;
}