//! Doubly Linked List  
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node* prev;

    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

class LinkedList{
    private:
        Node* head;
    public:
        void insertHead(int data);
    
    LinkedList(){
        this->head = NULL;
    }
    void printList();
};
void LinkedList :: insertHead(int data){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
    }
    else{
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode; 
    }
}

int main()
{
    LinkedList LL;
    LL.insertHead(60);
    LL.insertHead(90);
    LL.insertHead(890);
    LL.printList();
    return 0;
}