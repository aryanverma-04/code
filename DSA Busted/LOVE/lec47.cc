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

bool cycleDetect(Node* head){
    if(head == NULL){
        return false;
    }
    map<Node*, bool> visited;
    Node *temp = head;
    while (temp != NULL)
    {
        if(visited[temp] == true){
            cout<<"Present on element "<<temp->data<<endl;
            return 1;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return 0;
}

Node* floydsDetectLoop(Node *head){
    if(head == NULL){
        return NULL;
    }
    Node* slow = head;
    Node* fast = head;

    while (slow != NULL && fast != NULL)
    {
        fast= fast->next;
        if(fast != NULL){
            fast = fast->next;
        }
        slow = slow->next;

        if(slow == fast){
            // cout<<"cycle is present at: "<<slow->data<<endl;
            return slow;
        }
    }
    return NULL;
}

Node *getStartingNode(Node* head){
    if(head == NULL){
        return NULL;
    }
    Node *intersection = floydsDetectLoop(head);
    Node *slow = head;
    while (slow != intersection)
    {
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}

void removeLoop(Node *head){
    if(head == NULL){
        return;
    }
    Node *a = getStartingNode(head);
    Node *b = a;
    while (a->next != b){
        b = b->next;
    }
    b->next = NULL;
    
}
int main()
{
    Node *head = new Node(10);
    Node *tail = head;
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    // printList(head);
    insertHead(head, 20);
    insertHead(head, 30);
    insertHead(head, 469);
    // printList(head);

    insertTail(tail, 70);
    insertTail(tail, 50);
    insertTail(tail, 80);
    insertHead(head, 10);
    cout << "Head is: " << head->data << endl;
    cout << "tail is: " << tail->data << endl;
    tail->next = head->next;
    // printList(head);

    // insertAtPosition(head, tail, 68, 1);
    // printList(head);

    // printList(head);
    // deleteNode(head, 5);
    // printList(head);

    // cout<<cycleDetect(head);
    // cout<<floydsDetectLoop(head);
    // Node *c = getStartingNode(head);
    // cout<<endl<<c->data<<endl;

    removeLoop(head);
    cout << "Head is: " << head->data << endl;
    cout << "tail is: " << tail->data << endl;
    printList(head);
    return 0;
}