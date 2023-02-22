//! Doubly Linked list
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *prev;
    node *next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void printList(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int getLength(node *head)
{
    node *temp = head;
    int length = 0;
    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    }
    return length;
}

void insertHead(node *&head, node *&tail,int data)
{
    if(head == NULL){
        node *temp = new node(data);
        head = temp;
        tail = temp;
    }
    else{
    node *temp = new node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
    }
}

void insertTail(node *&head, node *&tail, int data)
{
    if(head == NULL){
    node *temp = new node(data);
    head = temp;
    tail = temp;
    }
    else{
    node *temp = new node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
    }
}

void insertAtPosition(node *&head, node *&tail, int data, int position)
{
    if (position == 1)
    {
        insertHead(head, tail, data);
        return;
    }
    int cnt = 1;
    node *temp = head;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL)
    {
        insertTail(head, tail, data);
        return;
    }

    node *nodeToInsert = new node(data);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

void deleteNode(node* &head, int position){
    if(position == 1){
        node * temp = head;
        temp->next->prev = NULL;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        node *curr = head; 
        node *prev = NULL;
        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next; cnt++;
        }
        curr->prev = NULL;
        prev->next = curr->next;
        // prev->next->prev = prev->prev;
        curr->next = NULL;
        delete curr;
    }
}
int main()
{   
    node*head = NULL;
    node*tail = NULL;
    // insertHead(head, tail, 2);
    // printList(head);
    // cout << "Head is: " << head->data << endl;
    // cout << "tail is: " << tail->data << endl;
    // cout << getLength(head) << endl;
    // insertHead(head, tail,  20);
    // printList(head);
    // cout << "Head is: " << head->data << endl;
    // cout << "tail is: " << tail->data << endl;
    // cout << getLength(head) << endl;
    // insertTail(head, tail, 30);
    // printList(head);
    // cout << "Head is: " << head->data << endl;
    // cout << "tail is: " << tail->data << endl;
    // cout << getLength(head) << endl;
    insertAtPosition(head, tail, 10, 1);
    printList(head);
    // cout << "Head is: " << head->data << endl;
    // cout << "tail is: " << tail->data << endl;
    // cout << getLength(head) << endl;
    insertAtPosition(head, tail, 20, 2);
    insertAtPosition(head, tail, 40, 2);
    insertAtPosition(head, tail, 70, 4);
    insertAtPosition(head, tail, 90, 2);

    printList(head);
    // cout << "Head is: " << head->data << endl;
    // cout << "tail is: " << tail->data << endl;
    // cout << getLength(head) << endl;
    deleteNode(head, 2);
    printList(head);
    // cout << "Head is: " << head->data << endl;
    // cout << "tail is: " << tail->data << endl;
    // cout << getLength(head) << endl;
    return 0;
}