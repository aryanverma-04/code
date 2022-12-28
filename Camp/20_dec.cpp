#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

class LinkList{
    public:
    LinkList(){
        head = NULL;
    }
    void addNode(int value);
    void display();
    private:
        Node* head;
};

void LinkList :: addNode(int value){
    Node* newNode  = new Node();
    newNode->data = value;
    newNode->next = NULL;
    if(head == NULL){
        head = newNode;
    }
    else{
        Node* temp = head; 
        while (temp->next != NULL) { 
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void LinkList::display() {
    if (head == NULL) {
        cout << "List is empty!" << endl;
    }
    else {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}

int main(){
    LinkList* list = new LinkList();
    LinkList* list1 = list;

    list1->addNode(10);
    list1->addNode(20);
    list1->addNode(30);
    list1->addNode(40);

    cout << "Linked List data" << endl;
    list->display();

    return 0;
}