//! Singly Linked List
// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };

// void insertAtHead(Node *&head, int data)
// {
//     Node *temp = new Node(data);
//     temp->next = head;
//     head = temp;
// }

// void insertAtTail(Node *&head, int data)
// {
//     Node *temp = head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     Node *newNode = new Node(data);
//     temp->next = newNode;
//     newNode->next = NULL;
// }
// void printList(Node *head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// void insertAtPosition(Node *&head, int data, int position)
// {
//     if (position == 1)
//     {
//         insertAtHead(head, data);
//         return;
//     }
//     int cnt = 1;
//     Node *temp = head;
//     while (cnt < position - 1)
//     {
//         cnt++;
//         temp = temp->next;
//     }
//     if (temp->next == NULL)
//     {
//         insertAtTail(head, data);
//         return;
//     }

//     Node* newNode = new Node(data);
//     newNode->next = temp->next;
//     temp->next = newNode;
// }

// void deleteAtPostion(Node *&head,int position){
//     Node*curr = head;
//     if (position == 1)
//     {
//         head = head->next;
//         curr->next = NULL;
//         delete curr;
//     }
//     else{
//     int cnt = 1; Node* prev = NULL;
//     while (cnt < position)
//     {
//         prev = curr;
//         curr = curr->next;
//         cnt++;
//     }
//     prev->next = curr->next;
//     curr->next = NULL;
//     delete curr;
//     }
// }
// int main()
// {
//     Node *head = new Node(12);
//     insertAtHead(head, 10);
//     insertAtHead(head, 13);
//     insertAtTail(head, 234);
//     printList(head);
//     insertAtPosition(head, 53, 2);
//     printList(head);
//     deleteAtPostion(head, 1);
//     printList(head);
//     deleteAtPostion(head, 4);
//     printList(head);
//     return 0;
// }

// //! Doubly Linkded List
// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node *prev;
//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//         this->prev = NULL;
//     }
// };
// void insertHead(Node *&head, int data)
// {
//     if (head == NULL)
//     {
//         Node *temp = new Node(data);
//         head = temp;
//     }
//     else
//     {
//         Node *temp = new Node(data);
//         temp->next = head;
//         temp->prev = NULL;
//         head = temp;
//     }
// }
// void insertTail(Node *&head, int data)
// {
//     Node *temp = head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     Node *newNode = new Node(data);
//     temp->next = newNode;
//     newNode->next = NULL;
//     newNode->prev = temp;
// }

// void insertPostion(Node *&head, int data, int position)
// {
//     if (position == 1)
//     {
//         insertHead(head, data);
//         return;
//     }
//     Node *curr = head;
//     int cnt = 1;
//     while (cnt < position - 1)
//     {
//         cnt ++;
//         curr = curr -> next;
//     }
//     if(curr->next == NULL){
//         insertTail(head, data);
//         return;
//     }
//     Node *newNode = new Node(data);
//     newNode->next = curr->next;
//     newNode->prev = curr;
//     curr->next->prev = newNode;
//     curr->next = newNode;
// }
// void printList(Node *head)
// {
//     while (head != NULL)
//     {
//         cout << head->data << " ";
//         head = head->next;
//     }
//     cout << endl;
// }

// int main()
// {
//     Node *head = NULL;
//     printList(head);
//     insertHead(head, 10);
//     insertHead(head, 20);
//     insertHead(head, 30);
//     printList(head);
//     insertTail(head, 40);
//     printList(head);
//     insertPostion(head, 50, 5);
//     printList(head);
//     return 0;
// }

//! Circular Linkded list
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
void insertNode(Node *&tail, int data, int element = INT_MAX){
    if(tail == NULL){
        Node *newNode = new Node(data);
        tail = newNode;
        newNode->next = newNode;
    }
    else{
        Node*temp = tail;
        while (temp->data != element)
        {
            temp = temp->next;
        }
        Node *newNode = new Node(data);
        newNode->next = temp->next;
        temp->next = newNode;
        
    }
}

void deleteNode(Node *&tail, int data){
    
}
void printList(Node *tail){
    Node* temp = tail;
    do
    {
        cout<<tail->data<<" ";
        tail = tail->next;
    } while (tail != temp);
    cout<<endl;
}
bool isCircular(Node *tail){
    if (tail == NULL)
    {
        return true;
    }
    
    Node *temp = tail->next;
    while(temp != NULL && temp != tail){
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
    Node*tail = NULL;
    insertNode(tail,10);
    printList(tail);
    insertNode(tail,20, 10);
    printList(tail);
    cout<<isCircular(tail);
    return 0;
}