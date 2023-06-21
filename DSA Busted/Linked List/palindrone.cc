//! This program is to implement experiment 2 
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
    if(head == NULL){
        head = newNode;
        return;
    }
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

bool checkPalindrome(Node* head){
    Node* slow = head;
    Node* fast = head;
    stack<int> s;
    while(fast != NULL && fast->next != NULL){
        s.push(slow->data);
        slow = slow->next;
        fast = fast->next->next;
    }
    if(fast!=NULL){
        slow = slow->next;
    }
    while(slow!=NULL){
        int top = s.top();
        s.pop();
        if(slow->data!= top){
            return false;
        }
        slow= slow ->next;
    }
    return true;
}

int main()
{
    Node *LL1 = new Node(1);
    insertHead(LL1, 6);
    insertHead(LL1, 2);
    traverseList(LL1);
    bool ans = checkPalindrome(LL1);
    cout<<ans;
}

// / TC-> 0(N) SC-> O(N/2)
