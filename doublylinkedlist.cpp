#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node (int data){
        this -> data = data;
        this -> next = NULL;
        this -> prev = NULL;
    }
};
void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
    }
void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
    }    
void deletionAtHead(Node* &head){
    Node* temp = head;
    head = head -> next;
    delete temp;
}
void deletionAtTail(Node* &tail){
    Node* temp = tail;
    tail = tail -> prev;
    tail->next = NULL;
    delete temp;
}

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp ->data << " ";
        temp = temp -> next;
    }
}
;
int main() {
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    insertAtHead(head, 12);
    insertAtHead(head, 13);
    insertAtHead(head, 14);
    insertAtTail(tail,20);
    print(head);
    cout<<endl;
    deletionAtHead(head);
    print(head);
    cout<<endl;
    deletionAtTail(tail);
    print(head);
    return 0;
}