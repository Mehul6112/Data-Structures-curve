#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node (int data){
        this -> data = data;
        this -> next = NULL;
    }
};
void push(Node* &front, Node* &rear, int d){
    Node* temp = new Node(d);
    rear -> next = temp;
    rear = temp;
    rear -> next = front;
    }
void pop(Node* &front, Node* &rear){
    Node* temp = front;
    front = front -> next;
    rear ->next = front;
    delete temp;
}

void print(Node* &front){
    Node* temp = front;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != front);
}
;
int main() {
    Node* node1 = new Node(10);
    Node* front = node1;
    Node* rear = node1;
    push(front, rear, 12);
    push(front, rear, 13);
    push(front, rear, 14);
    print(front);
    cout<<endl;
    pop(front, rear);
    print(front);
    cout<<endl;
    return 0;
}