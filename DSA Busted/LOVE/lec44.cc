//! Singly Link list
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
void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        // cout<<temp << " ";
        temp = temp->next;
    }
    cout << endl;
}
void insertHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node *&head, Node *&tail, int data, int position)
{
    if (position == 1)
    {
        insertHead(head, data);
        return;
    }
    int cnt = 1;
    Node *temp = head;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL)
    {
        insertTail(tail, data);
        return;
    }
    Node *nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deleteNode(Node* &head, int position){
    if(position == 1){
        Node * temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        Node *curr = head;
        Node *prev = NULL;
        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next; cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
int main()
{
    Node *head = new Node(10);
    Node *tail = head;
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    // printList(head);
    // insertHead(head, 20);
    // insertHead(head, 30);
    // insertHead(head, 40);
    // printList(head);

    // insertTail(tail, 20);
    // insertTail(tail, 30);
    // insertTail(tail, 40);
    // insertHead(head, 50);
    // printList(head);
    cout<<"\nName: Aryan verma, Uid: 20bcs3651 "<<endl;
    insertAtPosition(head, tail, 60, 1);
    insertAtPosition(head, tail, 28, 2);
    cout<<"Originial linked List: ";
    printList(head);

    deleteNode(head, 1);
    cout<<"linked List after deletion of element: ";
    printList(head);

    // cout << "Head is: " << head->data << endl;
    // cout << "tail is: " << tail->data << endl;

    insertAtPosition(head, tail, 22, 3);
    insertAtPosition(head, tail, 100, 1);
    insertAtPosition(head, tail, 62, 2);

    cout<<"linked List after Inserting of elements: ";
    printList(head);
    cout<<endl;
    return 0;
}