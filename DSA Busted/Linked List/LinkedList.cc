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
void traverseList(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void insertHead(Node* &head, int data){
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
    return;
}
void insertTail(Node* &head, int data){
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    Node* newNode = new Node(data);
    temp->next = newNode;
    return;
}
void insertAfterNode(Node* &head, int value, int data){
    Node* temp = head;
    while( temp!= NULL){
        if (temp->data == value)
        {
            break;
        }
        temp = temp->next;
    }
    if(temp==NULL){
        cout<<"Value Not Found !! ";
        return;
    }
    Node* newNode = new Node(data);
    Node* forward = temp->next;
    temp->next = newNode;
    newNode->next = forward;
}
void insertAfterPosition(Node* &head, int position, int data){
    Node* temp = head; int count = 2;
    while(count < position){
        temp = temp->next; count++;
    }
    if(temp==NULL){
        cout<<"Value Not Found !! ";
        return;
    }
    Node* newNode = new Node(data);
    Node* forward = temp->next;
    temp->next = newNode;
    newNode->next = forward;
}
 void deleteAtPositon(Node* &head, int position){
     if(position == 1){
         Node* temp = head;
         head = head->next;
         delete temp;
         return;
     }
     Node* temp = head;
     Node* prev = NULL;
     int count = 1;
     while(position > count){
         prev = temp;
         temp = temp->next;
         count++;
     }
     prev->next = temp->next;
     delete temp;
 }

int main(){
    Node* head = new Node(10);
    traverseList(head);
    insertHead(head,20);
    traverseList(head);
    insertTail(head, 30);
    traverseList(head);
    insertAfterNode(head, 10, 40);
    traverseList(head);
    insertAfterPosition(head, 2, 300);
    traverseList(head);
    deleteAtPositon(head, 2);
    traverseList(head);

    return 0;
}